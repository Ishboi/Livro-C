#include <stdio.h>
int main()
{
    int nums[5],aux,i1,i2;
    for(i1=0;i1<=4;i1++)
    {
        printf("Insira o %i numero",i1+1);
        scanf("%i",&nums[i1]);
    }
    for(i1=0;i1<=3;i1++)
        for(i2=i1+1;i2<=4;i2++)
        if(nums[i2]<nums[i1])
        {
            aux=nums[i1];
            nums[i1]=nums[i2];
            nums[i2]=aux;
        }
        for(i1=0;i1<=4;i1++)
        {
            printf("%i\n",nums[i1]);
        }
        return 0;
}
