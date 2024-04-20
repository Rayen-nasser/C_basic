#include<stdio.h>
#include<string.h>

void main(){
    char TXT[200];
    printf("donne une ligne de text");
    gets(TXT);

    int len = strlen(TXT);
    printf("le longuer de TXT est %d\n",len);

    int Nb_e=0;
    for(int i=0; i<len;i++)
    {
        if(TXT[i]=='e')
        {
            Nb_e++;
        }
    }
    printf("nomber de de carater de e est %d \n",Nb_e);
    printf("la phrase a l'envers est :");

    for(int i = len ; i >= 0 ; i--)
    {
        printf("%c",TXT[i]);
    }

    printf("\n la phrase a l'envers apres inversion de chain est :");
    for(int i = 0 ; i < len / 2 ;i++)
    {
        char temp = TXT[i];
        TXT[i] = TXT[len - 2  - i];
        TXT[len - 2  - i] = temp ;
    }
    printf(" %s \n",TXT);
}
