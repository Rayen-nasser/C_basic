#include <stdio.h>
typedef struct{
int ss;
int mm;
int hh;
}heure;
heure h;

void ConvHeure(int s , int h1){
  h1 = s / 3600 ;
  if ( s % 3600 != 0 ){
        s=s % 3600;
    printf("Convertion en heure : %d h /  %d s  ", h1,s);
  }else{
  printf("Convertion en heure : %d h ", h1);}
}

void ConvSeconde(int s , int h1){
  s = h1 * 3600 ;

  printf("Convertion en seconde : %d s ", s);
}


main(){
    int s , h1;
    printf("Donnez un nombre en seconde :  ");
    scanf("%d",&s);
    printf("Donnez un nombre en heure :  ");
    scanf("%d",&h1);
    printf("\n");
printf("seconde :  ");
scanf("%d ",&h.ss );
printf("minute :  ");
scanf("%d ", &h.mm );
printf("heure :  ");
scanf("%d ",&h.hh );
printf("\n");
printf("L Heure : %d/ %d / %d ", h.hh, h.mm ,h.ss);
printf("\n");

ConvHeure(s, h1);
ConvSeconde(s, h1);
}
