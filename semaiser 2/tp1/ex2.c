#include<stdio.h>
#include<string.h>

void main(){
    char ch1[200],ch2[200];
    printf("Introduisez la premi�re cha�ne:");
    gets(ch1);
    printf("Introduisez la premi�re cha�ne:");
    gets(ch2);

    int comp = strcmp(ch1,ch2);
    if(comp > 0){
        printf("\n%s precede %s",ch1,ch2);
    }else{
        printf("\n%s egale %s",ch1,ch2);
    }
}
