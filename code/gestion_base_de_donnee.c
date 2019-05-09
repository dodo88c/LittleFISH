/*Creation d'un fichier dbf (en c)--------------------------------
Url     : http://codes-sources.commentcamarche.net/source/47871-creation-d-un-fichier-dbf-en-cAuteur  : StanelDate    : 14/08/2013
Licence :
=========

Ce document intitulé « Creation d'un fichier dbf (en c) » issu de CommentCaMarche
(codes-sources.commentcamarche.net) est mis à disposition sous les termes de
la licence Creative Commons. Vous pouvez copier, modifier des copies de cette
source, dans les conditions fixées par la licence, tant que cette note
apparaît clairement.

Description :
=============

Un petit programme pour creer (et ecrire) une base des donnees dBase, realise av
ec le language C simple, sans utiliser autre logiciel.
<br /><a name='source-ex
emple'></a><h2> Source / Exemple : </h2>

<br /><pre class='code' data-mode='ba
sic'>
//04-sep-2008 21:47:34
*/




#include <dos.h>
#include <io.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define O_CREAT  0x0100
#define O_TRUNC  0x0200
#define O_BINARY 0x8000
#define O_RDWR   4
#define S_IWRITE 0x0080
#define S_IREAD  0x0100

typedef unsigned short ushort;
typedef unsigned long  ulong;
typedef unsigned char  uchar;

uchar nom_dbf[]="ENDGAME.DBF";
short nf;
ulong nart;
ushort RCS;
#define NB_CHAMPS 11
struct BASE
{
   uchar nom_champ[11];
   uchar typ_champ;
   uchar long_champ;
   uchar nb_dec;
} strbase[NB_CHAMPS]=
{
   "COD_SOC"    ,'N', 4,0,
   "NOM_SOC"    ,'C',40,0,
   "COD_LIEU"   ,'N', 4,0,
   "NOM_LIEU"   ,'C',24,0,
   "COD_FONC"   ,'N', 4,0,
   "NOM_FONC"   ,'C',24,0,
   "ID"         ,'N', 8,0,
   "NOM"        ,'C',24,0,
   "SALAIRE"    ,'N',14,3,
   "IMPOT"      ,'N',14,3,
   "RESTE"      ,'N',14,3
};
struct ENTET_BASE
{
   uchar  version;
   uchar  annee;
   uchar  mois;
   uchar  jour;
   ulong  nb_art;
   ushort lg_antet;
   ushort RCS;
   uchar  zero[20];
   struct
   {
      uchar nom_champ[11];
      uchar typ_champ;
      ulong adresse;
      uchar long_champ;
      uchar nb_dec;
      uchar zero[14];
   } champ[NB_CHAMPS];
} aa;
uchar dbf[2048];
uchar man[100];
struct date d;
ushort i;
ulong salaire,impot,reste,nb_inreg;

void main(void)
{
   getdate(&d);
   aa.version=3;
   aa.annee=d.da_year-1900;
   aa.mois=d.da_mon;
   aa.jour=d.da_day;
   aa.nb_art=0;
   aa.lg_antet=0;
   aa.RCS=1;
   memset(aa.zero,'\0',20);
   for(i=0;i<NB_CHAMPS;i++)
   {
      strncpy(aa.champ[i].nom_champ,strbase[i].nom_champ,11);
      aa.champ[i].typ_champ=strbase[i].typ_champ;
      aa.champ[i].adresse=aa.RCS;
      aa.champ[i].long_champ=strbase[i].long_champ;
      aa.champ[i].nb_dec=strbase[i].nb_dec;
      memset(aa.champ[i].zero,'\0',14);
      aa.RCS+=aa.champ[i].long_champ;
   }
   RCS=aa.RCS;
   aa.lg_antet=(NB_CHAMPS+1)*32+1;
   if((nf=open(nom_dbf,O_CREAT|O_BINARY|O_TRUNC|O_RDWR,S_IWRITE|S_IREAD))<1)
   {
      printf("\nErreur dans la creation du fichier %s.",nom_dbf);
      return;
   }
   RCS=aa.lg_antet;
   write(nf,&aa,RCS-1);
   man[0]=0x0D;
   write(nf,man,1);
   RCS=aa.RCS;
   salaire=1000000;
   nb_inreg=0;
   //
   //Exemple
   //
   for(i=0;i<1234;i++)
   {
      memset(&dbf,' ',aa.RCS);
      sprintf(man,"%04u",i+1);
      strncpy(dbf+aa.champ[0].adresse,man,4);
      sprintf(man,"Societe numero %u%40s",i+1,"");
      strncpy(dbf+aa.champ[1].adresse,man,40);
      sprintf(man,"%04u",i+11);
      strncpy(dbf+aa.champ[2].adresse,man,4);
      sprintf(man,"Lieu de travail numero %u%24s",i+11,"");
      strncpy(dbf+aa.champ[3].adresse,man,24);
      sprintf(man,"%04u",i+101);
      strncpy(dbf+aa.champ[4].adresse,man,4);
      sprintf(man,"Fonction numero %u%24s",i+101,"");
      strncpy(dbf+aa.champ[5].adresse,man,24);
      sprintf(man,"%04u",i+1001);
      strncpy(dbf+aa.champ[6].adresse,man,4);
      sprintf(man,"Employe avec ID %u%24s",i+1001,"");
      strncpy(dbf+aa.champ[7].adresse,man,24);
      sprintf(man,"%14.3f",1e-3*salaire);
      strncpy(dbf+aa.champ[8].adresse,man,14);
      impot=floor(16e-2*salaire+0.5);
      sprintf(man,"%14.3f",1e-3*impot);
      strncpy(dbf+aa.champ[9].adresse,man,14);
      reste=salaire-impot;
      sprintf(man,"%14.3f",1e-3*reste);
      strncpy(dbf+aa.champ[10].adresse,man,14);
      write(nf,&dbf,RCS);
      salaire+=1234;
      nb_inreg++;
   }
   man[0]=0x1A;
   write(nf,man,1);
   lseek(nf,4l,SEEK_SET);
   write(nf,&nb_inreg,4l);
   close(nf);
}
