#include<stdio.h>
#include<string.h>

void main(){
    char TXT[30];
    printf("donne une ligne de text");
    gets(TXT);
    int len = strlen(TXT);
    for(int i = 0 ; i < len ; i++){
        if(TXT[i] >= 'a' && TXT[i] <= 'z')
        {
            TXT[i] = TXT[i] - 32;
        }
    }
    printf("donne TXT en majuscule %s",TXT);
}
