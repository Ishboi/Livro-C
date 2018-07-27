#include<stdio.h>
#define LIMITE 20
#define maximo(a,b) (a>b?a:b) //aqui define como a e b o n1 e n2 se a for maior que b então é a se não é b
int main()
{
    int n1,n2,maior;
    printf("Insira dois numeros:\n");
    scanf("%d%d",&n1,&n2);
    maior=maximo(n1,n2);
    printf("O valor maior e %d!\n",maior);
    if(maior>LIMITE)
        printf("O maior e superior ao limite!");
    else
        printf("O maior e inferior ou igual ao limite");
    return 0;
}
