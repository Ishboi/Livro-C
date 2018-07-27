#include<stdio.h>
int main()
{
    int i,i2,aux,nums[5];
    for(i=0;i<=4;i++)
    {
        printf("Insira o %i numero:",i+1);
        scanf("%i",&nums[i]);
    }
    for(i=0;i<=3;i++)
        for(i2=i+1;i2<=4;i2++)
        if(nums[i2]<nums[i])
        {
            aux=nums[i];
            nums[i]=nums[i2];
            nums[i2]=aux;
        }
        for(i=0;i<=4;i++)
            printf("%i ",nums[i]);
        return 0;
}
