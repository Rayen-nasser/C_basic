#include<stdio.h>
#include<string.h>

void main(){
   char TXT[200];
    printf("donne une ligne de text");
    gets(TXT);
    int j=0;
    for(int i=0 ; i < strlen(TXT) ; i++)
    {
        if(TXT[i] != 'e')
        {
            TXT[j] = TXT[i];
            j++;
        }
    }
    TXT[j] = '\0';
    printf(TXT);
}
