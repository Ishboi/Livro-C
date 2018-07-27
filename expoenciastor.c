#include <stdio.h>
int pot(int b, int e)
{
    int tot=1, cont; //aqui faz com que caso metam 0 devolva 0
    for(cont=1;cont<=e;cont++)
        tot*=b; //versao mais basica
    return tot;
}
int main()
{
    int base, expoente;
    printf("Insira a base:");
    scanf("%i", &base);
    printf("Insira o expoente:");
    scanf("%i", &expoente);
    printf("Resultado:%i", pot(base,expoente));
}
