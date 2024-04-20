#include<stdio.h>
#include<string.h>

void main(){
    char ch1[200],ch2[200];
    printf("donne une ligne de text");
    gets(ch1);
    printf("donne une ligne de text");
    gets(ch2);
    if (strlen(ch1)!=strlen(ch2)) {
        printf("Les chaînes ne sont pas équivalentes.\n");
    }
        int mark=1,j;
        for(int i = 0 ; i < strlen(ch1) ; i++)
        {
            for(int j = 0 ; j < strlen(ch2) ; j++)
            {
                if(ch1[i]==ch2[j])
                {
                    ch2[j] = "";
                    break;
                }
            }
            if(j ==strlen(ch2))
            {
                mark = 0;
                break;
            }
        }
        if(mark == 1)
        {
            printf("Les chaînes sont équivalentes.\n");
        }
        else
        {
             printf("Les chaînes ne sont pas équivalentes.\n");
        }
        return 0;
    }

