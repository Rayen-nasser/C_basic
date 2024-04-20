#include<stdio.h>

int conv( int *x , int *y ){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void main(){
    int x = 5 ;
    //int y = 4;
    // printf("%d \n %d",x,y);
    // conv(&x,&y);
    //printf("\n %d \n %d",x,y);
    int * ptr;
    ptr = &x;
    printf("%d \n",&x);
    printf("%d",ptr);

}
