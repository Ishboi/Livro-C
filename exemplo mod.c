#include <stdio.h>
int main()
{

    int m=25, n=7;
    int soma=m+n,dif=m-n;
    int prod=m*n;
    float quo=(float)m/(float)n; // aqui vai fazer tornar o valor de m e n num float
    int res=m%n;

    printf("m = %i\nn = %i\n",m,n);
    printf("m + n = %i\nm - n = %i\n",soma,dif);
    printf("m * n = %i\nm / n = %f\n", prod,quo);
    printf("m %% n = %i\n",res);
    return 0;

}
