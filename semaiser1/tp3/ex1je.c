#include<stdio.h>
main()
{
    int x,y,z;
    printf("donne la valeur x y et z");
    scanf("%d%d%d",&x,&y,&z);
    if( ((x!='0')||(x!='1'))  && ((y!='0')||(y!='1'))   &&   ((z!='0')||(z!='1'))   )
    {
        printf("la valeur de x z et y incorecte\n");
    }
    else
    {
        printf("la valeur de x z et y corecte\n");
    }
    if(x&&y){
        printf("s1 est egal 1\n");
    }else{
        printf("s1 est egal 0\n");
    }
    if((x&&y)||(!z)){
        printf("s2 est egal 1\n");
    }else{
        printf("s2 est egal 0\n");
    }
    if(!z){
        printf("s3 est egal %d \n",!z);
    }else{
        printf("s3 est egal %d \n",!z);
    }
    if(y||z){
        printf("s5 est egal 1\n");
    }else{
        printf("s5 est egal 0\n");
    }
    if( (x&&(!z)) ||((!x)&& (!z))){
        printf("s4 est egal 1\n");
    }else{
        printf("s4 est egal 0\n");
    }
    if( ((x&&(!z)) ||((!x)&& (!z))) && ((x&&y)||(!z)) && (y||z) ){
        printf("s1 est egal 1\n");
    }else{
        printf("s1 est egal 0\n");
    }

}
