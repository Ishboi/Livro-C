    #include <stdio.h>
    int main()
    {
        int l,c;
        int temperaturas[3][7];
        for(l=0;l<2;l++)
        {
           printf("Temperaturas %s da semana\n\n",l==0?"minimas":"maximas");
            for(c=0;c<7;c++)
            {
                printf("Dia %i  :",c+1);
                scanf("%i",&temperaturas[l][c]);


            }
            for(c=0;c<7;c++)
            {
                temperaturas[2][c] = ((temperaturas[0][c] + temperaturas[1][c]) / 2);
            }



        }





        printf("\nTemperaturas da semana:\n\n");
        for(l=0;l<3;l++)
        {
            for(c=0;c<7;c++)
            {
                printf("%2d ",temperaturas[l][c]);



            }
            putchar('\n');
        }
        return 0;
    }
//-----------------------------------------------------------------------------------
//        for(aux1=0;aux1<14;aux1++)
//        {
//            for(l=0;l<2;l++)
//            {
//                for(c=0;c<1;c++)
//                aux2=c[0]
//                aux3=aux3++
//
//
//                    //tenho que meter um contador aqui algures para contar até 7 para depois definir o valor na linha 3 no array para ir subindo
//
//
//            }
//        }
//-----------------------------------------------------------------------------------
//    for(l=0;l<3;l++)
//                {
//                    for(c=0;c<7;c++)
//                        printf("%2d Dia %i:",temperaturas[l][c]);
//                        aux1=temperaturas[c];
//                        if(temperaturas[l]=2)
//                        {
//                            aux2=temperaturas[c];
//                            aux3=aux1/aux2;
//
//                        }
//
//                        }
