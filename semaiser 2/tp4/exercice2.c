#include<stdio.h>
#include<string.h>
int parfait(int n,int i ,int somme)
{
    if(i == n)
        return somme == n;
    else if (n % i == 0)
        return parfait(n,i+1,somme+i);
    else
        return parfait(n,i+1,somme);
}
void inverse(char chaine[],int taille) {
    if(taille>0){
        putchar(chaine[taille-1]);
        inverse(chaine , taille-1);
    }
}
int main() {
    int n ;
    char ch[100] ;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    if (parfait(n, 1, 0)) {
        printf("%d est un nombre parfait.\n", n);
    }
    else {
        printf("%d n'est pas un nombre parfait.\n", n);
    }

    printf("Entrez une chaine de caracteres :");
    scanf("%s",ch);
    inverse(ch, strlen(ch));
    scanf("\n");


}

