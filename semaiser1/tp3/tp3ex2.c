#include<stdio.h>
main(){
     float x ,y ;
     printf("donne la valeur x et y");
     scanf("%f%f",&x,&y);
     if(x>y){
        printf("la maximum est %f et la minmum est %f.1",x,y);
     }
     else{
        printf("la maximum est %f et la minmum est %f",y,x);
     }
}
