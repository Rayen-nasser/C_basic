#include<stdio.h>


 void main(){
    int i=4;int s=0;

    do{
        i++;
        if(Zuckerman(i))
        {
            printf("%d \t",i);
            s++;
        }
    }while(s<30);


}
int Zuckerman( int N1)
{
    int p,N;
    N1=N;
   do{
        p=p+(N%10);
        N=N/10;
    }while(N>0);
    if(N1%p==0)
        return(1);
    else
        return(0);

}


