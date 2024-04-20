#include<stdio.h>
#include<string.h>

void main(){
    char ch1[200],ch2[200];
    printf("Introduisez la première chaîne:");
    gets(ch1);
    printf("Introduisez la première chaîne:");
    gets(ch2);

    int comp = strcmp(ch1,ch2);
    if(comp > 0){
        printf("\n%s precede %s",ch1,ch2);
    }else{
        printf("\n%s egale %s",ch1,ch2);
    }
}
