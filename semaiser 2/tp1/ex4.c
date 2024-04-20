#include<stdio.h>
#include<string.h>

void main(){
    char TXT[30];
    printf("donne une ligne de text");
    gets(TXT);
    int i=0,j = strlen(TXT);

    do{
        i++;
        j--;

    }while(i<j || TXT[i] == TXT[j]);
    if(j<i)
    {
        printf("%s est palindrome",TXT);
    }else{
        printf("%s n'est par palindrome",TXT);
    }
}
