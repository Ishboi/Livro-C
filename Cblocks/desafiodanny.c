/*
Or�amento pessoal controlar utiliza��o de dinheiro � nossa disposi��o
Uma pessoa/agregado familiar ou a uma empresa c/ or�amento complicado

Registar movimentos do dinheiro:
Montante envolvido, pequena descri��o, data esta simplificada de 0 a 999, movimento pode ser uma receita ou despesa

Utilizador vai inserir atrav�s da linha de comandos, dados sobre movimentos: montante, data, periodicidade, tipo (receita/despesa) e descri���
Movimentos recorrentes (exemplos mesadas)
Dever� ser poss�vel remover movimentos do or�amento

Conclu�ndo a tarefa de inserir e remover movimentos o utilizador poder� calcular em cada data qual � o balan��o entre despesas e receitas
sendo esperado para uma boa gest�o o valor ser sempre >=0 ou mesmo que um dado valor m�nimo definido pelo user.
Caso esta condi��o n�o seja verificada o sistema informa que o or�amento � inv�lido.
O sistema dever� ainda auxiliar o user a introduzir uma despesa, pode at� verificar-se que na data da despesa o balan�o permane�a maior que o m�nimo permitido
no entanto pode invalidar o or�amento numa despesa futura */

#define dscrp 60
#mov 100s
#datas 1000
#include <stdio.h>
#include <string.h>

int mov(int valor = 0, dscp[])
{
    for()
}


int main()
{
    int = data[datas][mov];
    int entr = 0, rem = 0, ver = 0, cons = 0, minposs = 0, dataIndice, indic = 0, inic,qtddDias, guito = 0,  qtdd = 0;
    char opcao[1], smalldscp[dscrp];
    do
    {
        printf("\nInserir Movimento - i");
        printf("\n Inserir consulta - l");
        printf("\nInsira a opcao: ");
        printf("\n Sair: 0");
        opcao = getchar();
        scanf("%*[^\n]");
        switch(opcao)
        {
        case 'i':
            printf("\nInserir Receita - r");
            printf("\nInserir Despesa - d");
            opcao = getchar();
            if(opcao == 'r')
            {
                printf("\nInserir quantos dias - 1");
                scanf("%i",&qtddDias);
                printf("\nInserir dia em especifico - 2");
                scanf("%i",)
                opcao = getchar();
                switch(opcao)
                {
                    if(opcao == '1')
                    {
                        if(qtdd>100)
                        {
                            printf("Maximo 100")
                            break;
                        }
                        for(inic=0;inic<qtddDias;inic++)
                        {
                            printf("\nInsira o movimento: );
                            scanf("%i",data[inic][guito]);
                        }


                        /*
                        for(;qtdd<=0;qtdd--)
                        {
                            for(;indic>100;indic++)
                        {
                        printf("\nMontante: ");
                        scanf("%i", );
                        //scanf("%*c",);
                        printf("\nDescricao: ");
                        scanf(%desc[^\n], desc);
                        }
                        */
                    }


                    if(opcao == '2')
                    {

                        if(qtdd>100)
                        {
                            printf("Maximo 100")
                            break;
                        }
                        for(;inic<100,inic++)
                        {
                            printf("\nInsira o movimento: );
                            scanf("%i",data[inicguito]);
                        }
                    }

                }
                    }

                }


            }
            else
            {
                printf("\nMontante: ");
                scanf("%*[^\n]");
                scanf("%*c");
                printf("\nDescricao: ");
                scanf(%desc[^\n], desc);
                printf
            }



        }
    }while( opcao!= '0')

}
