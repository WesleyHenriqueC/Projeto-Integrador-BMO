#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sele;
    do{
        //COMEÇO DESSA MERDA
        system("cls");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
        printf("%%  NOME DA CALCULADORA  %%\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");

        printf("\n     MENU PRINCIPAL \n");
        printf(" 1. Somatorio\n");
        printf(" 2. Logica Proposicional\n");
        printf(" 3. Analise Combinatoria\n");
        printf(" 4. Sair\n");

        printf("\n Por favor escolha um: \n\n");
        scanf("%d", &sele);

        //SOMATORIO
        if(sele == 1){
            int opc, n, resultado;
            do{
                //MENU DO SOMATORIO
                system("cls");
                printf(" MENU SOMATORIO\n\n");
                printf("1 - Somatorio de j = 0 ate 'n' para a regra j\n");
                printf("2 - Somatorio de j = 0 ate 'n' para a regra (-j)^(j+1)\n");
                printf("3 - Aproximacao do numero pi com somatorio ate 'n' \n");
                printf("4 - Aproximacao do neperiano por somatorio ate 'n' \n");
                printf("5 - Voltar ao menu anterior\n\n");
                printf("Por favor escolha uma opcao\n");
                scanf("%d", &opc);

                //∑𝑗𝑛𝑗=0
                if(opc == 1){
                    int n, j, somatorio = 0;
                    printf("Por favor digite o valor de 'n'\n");
                    scanf("%d", &n);

                    for(j = 0; j<=n; j++){
                        somatorio = somatorio + j;
                    }

                    printf("\nO resultado do somatorio e: %d \n", somatorio);
                    system("pause");
                }

                //∑(−𝑗)𝑗+1𝑛𝑗=0
                if(opc == 2){
                    int n, j, somatorio = 0;
                    printf("Por favor digite o valor de 'n'\n");
                    scanf("%d", &n);

                    for(j = 0; j<=n; j++){
                        somatorio = somatorio + (pow((0 - j), (j + 1)));
                    }

                    printf("O resultado do somatorio e: %d \n", somatorio);
                    system("pause");
                }

                //𝜋≈∑8(4𝑘+1).(4𝑘+3)𝑛𝑘=0
                if(opc == 3){
                    int n, k;
                    float somatorio = 0;
                    printf("Por favor digite o valor de 'n'\n");
                    scanf("%d", &n);

                    for(k = 0; k<=n; k++){
                        somatorio = somatorio + (8 / (float)(((4 * k) + 1)*((4 * k) + 3)));
                    }

                    printf("O resultado do somatorio e: %f \n", somatorio);
                    system("pause");
                }

                //𝑒≈∑1𝑘!𝑛𝑘=0
                if(opc == 4){
                    int n, k, j = 0, fat = 1;
                    float somatorio = 1;
                    printf("Por favor digite o valor de 'n'\n");
                    scanf("%d", &n);

                    for(k = 1; k<=n; k++){
                        for(j = k; j >=1; --j){
                            fat *= j;
                        }
                        somatorio = somatorio + (1 / (float)fat);
                        fat = 1;
                    }
                    printf("O resultado do somatorio e: %f \n", somatorio);
                    system("pause");
                }

                //Opçao Invalida
                if(opc > 5){
                    printf("\nOpcao invalida. Digite novamente\n");
                    system("pause");
                }
            }while(opc != 5);
        }

        //SUBMENU LÓGICA PROPOSICIONAL
        if(sele == 2){
            int opc2;
            int p;
            int q;
            do{
                system("cls");
                printf(" SUBMENU LOGICA PROPOSICIONAL\n\n");
                printf("1 - ~p\n");
                printf("2 - ~q \n");
                printf("3 - p^q\n");
                printf("4 - pvq\n");
                printf("5 - pv-q \n");
                printf("6 - p->q\n");
                printf("7 - p<->q\n\n");
                printf("8 Voltar ao Menu Anterior\n\n");
                printf("Por favor escolha uma opcao\n");
                scanf("%d", &opc2);

                //1.~𝑝
                if(opc2 == 1){
                    printf("\nPor favor digite o valor de 'p', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&p);

                    if (p==1){
                        // p -= 1;
                        printf("\nF\n");
                    }else{
                        // p += 1;
                        printf("\nF\n");
                    }
                    system("pause");
                }

                //2.~𝑞
                if(opc2 == 2){
                    printf("\nPor favor digite o valor de 'p', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&q);

                    if (q==1){
                        //q -= 1;
                        printf("\nF\n");
                    }else{
                        //q +=1;
                        printf("\nV\n");
                    }
                    system("pause");
                }

                //3.𝑝∧𝑞
                if(opc2 == 3){
                    printf("\nPor favor digite o valor de 'p', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&p);
                    printf("\nPor favor digite o valor de 'q', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&q);
                    if(p==1 && q == 1){
                        printf("\nV\n");
                    }else if(p==1 && q==0){
                        printf("\nF\n");
                    }else if(p==0 && q==1){
                        printf("\nF\n");
                    }else if(p==0 && q==0){
                        printf("\nF\n");
                    }
                        system("pause");
                }

                //4.𝑝∨𝑞
                if(opc2 == 4){
                    printf("\nPor favor digite o valor de 'p', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&p);
                    printf("\nPor favor digite o valor de 'q', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&q);
                    if(p==1 && q == 1){
                        printf("\nV\n");
                    }else if(p==1 && q==0){
                        printf("\nV\n");
                    }else if(p==0 && q==1){
                        printf("\nV\n");
                    }else if(p==0 && q==0){
                        printf("\nF\n");
                    }
                    system("pause");
                }

                //5.𝑝∨=𝑞
                if(opc2 == 5){
                    printf("\nPor favor digite o valor de 'p', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&p);
                    printf("\nPor favor digite o valor de 'q', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&q);

                    if(p==1 && q==1){
                        printf("\nF\n");
                    }else if(p==1 && q==0){
                        printf("\nV\n");
                    }else if(p==0 && q==1){
                        printf("\nV\n");
                    }else if(p==0 && q==0){
                        printf("\nF\n");
                    }
                    system("pause");
                }

                //6.𝑝→𝑞
                if(opc2 == 6){
                    printf("\nPor favor digite o valor de 'p', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&p);
                    printf("\nPor favor digite o valor de 'q', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&q);

                    if(p==1 && q==1){
                        printf("\nV\n");
                    }else if(p==1 && q==0){
                        printf("\nF\n");
                    }else if(p==0 && q==1){
                        printf("\nV\n");
                    }else if(p==0 && q==0){
                        printf("\nV\n");
                    }
                    system("pause");
                }

                //7.𝑝↔𝑞
                if(opc2 == 7){
                    printf("\nPor favor digite o valor de 'p', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&p);
                    printf("\nPor favor digite o valor de 'q', sabendo que 0 para falso e 1 para verdadeiro.\n");
                    scanf("%d",&q);

                    if(p==1 && q==1){
                        printf("\nV\n");
                    }else if(p==1 && q==0){
                        printf("\nF\n");
                    }else if(p==0 && q==1){
                        printf("\nF\n");
                    }else if(p==0 && q==0){
                        printf("\nV\n");
                    }
                    system("pause");
                }

                //Opçao Invalida
                if(opc2 > 8){
                    printf("\nOpcao invalida. Digite novamente\n");
                    system("pause");
                }
            }while(opc2 != 8);
        }

        //SUBMENU ANÁLISE COMBINATÓRIA
        if(sele == 3){
                int opc3;
                do{
                    //SUBMENU ANÁLISE COMBINATÓRIA
                    system("cls");
                    printf(" SUBMENU ANALISE COMBINATORIA\n\n");
                    printf("1 - Permutacao Simples: P(n)\n");
                    printf("2 - Arranjo Simples: A(n,k)\n");
                    printf("3 - Combinacao Simples: C(n,k)\n");
                    printf("4 - Arranjo com Repeticao: AR(n,k)\n");
                    printf("5 - Combinacao com Repeticao: CR(n,k)\n");
                    printf("6 - Permutacao com Repeticao: P(n,k1,...,kp)\n");
                    printf("7 - Voltar ao Menu Anterior.\n\n");
                    printf("Por favor escolha uma opcao\n");
                    scanf("%d", &opc3);

                    //FORMULA DA PERMUTAÇAO SIMPLES
                    if(opc3 == 1){
                        int fatorial;
                        int resposta = 1;

                        printf("Digite o numero fatorial: ");
                        scanf("%d", &fatorial);

                        for( ; fatorial >=1; --fatorial) {
                            resposta *= fatorial;
                        }

                        printf("O resultado da permutacao simples e: %d \n\n", resposta);
                        system("pause");
                    }

                    //FORMULA ARRANJO SIMPLES
                    if(opc3 == 2){
                        int fatorial, combinacao, permsimples, resultadoFinal;
                        int resposta = 1, respostaSimples = 1;

                        printf("Por favor digite o valor de 'n': ");
                        scanf("%d", &fatorial);
                        printf("Por favor digite o valor de 'k': ");
                        scanf("%d", &combinacao);

                        permsimples = fatorial - combinacao;

                        for( ; fatorial >=1; --fatorial){
                            resposta *= fatorial;
                        }
                        for( ; permsimples >=1; --permsimples){
                            respostaSimples *= permsimples;
                        }

                        resultadoFinal = resposta / respostaSimples;

                        printf("O resultado da Arranjo Simples e: %d \n\n", resultadoFinal);
                        system("pause");
                    }

                    //FORMULA COMBINAÇAO SIMPLES
                    if(opc3 == 3){
                        int fatorial, combinacao, permsimples, resultadoFinal;
                        int resposta = 1, respostaSimples = 1, respcombinacao = 1;

                        printf("Por favor digite o valor de 'n': ");
                        scanf("%d", &fatorial);
                        printf("Por favor digite o valor de 'k': ");
                        scanf("%d", &combinacao);

                        permsimples = fatorial - combinacao;

                        for( ; fatorial >=1; --fatorial){
                            resposta *= fatorial;
                        }
                        for( ; combinacao >=1; --combinacao){
                            respcombinacao *= combinacao;
                        }
                        for( ; permsimples >=1; --permsimples){
                            respostaSimples *= permsimples;
                        }

                        resultadoFinal = resposta / (respcombinacao * respostaSimples);

                        printf("O resultado da Combinacao Simples e: %d \n\n", resultadoFinal);
                        system("pause");
                    }

                    //FORMULA DE ARRANJO COM REPETIÇAO
                    if(opc3 == 4){
                        int n;
                        int k;
                        int elevado;
                        printf("digite o valor de 'n': ");
                        scanf("%d", &n);
                        printf("digite o valor de 'k': ");
                        scanf("%d", &k);

                        elevado = pow(n,k);

                        printf("\nO resultado do arranjo com repeticao e: %d  \n\n " , elevado );
                        system("pause");
                    }

                    //COMBINAÇAO COM REPETIÇAO
                    if(opc3 == 5){
                        int fatorial, combinacao, fatorialDivisor, resultadoFinal;
                        int resposta = 1, respostaDivisor = 1, respcombinacao = 1;

                        printf("Por favor digite o valor de 'n': ");
                        scanf("%d", &fatorial);
                        printf("Por favor digite o valor de 'k': ");
                        scanf("%d", &combinacao);

                        fatorialDivisor = fatorial - 1;
                        fatorial = fatorial + combinacao - 1;

                        for( ; fatorial >=1; --fatorial){
                            resposta *= fatorial;
                        }
                        for( ; combinacao >=1; --combinacao){
                            respcombinacao *= combinacao;
                        }
                        for( ; fatorialDivisor >=1; --fatorialDivisor){
                            respostaDivisor *= fatorialDivisor;
                        }

                        resultadoFinal = resposta / (respcombinacao * respostaDivisor);

                        printf("O resultado da Combinacao com Repeticao e: %d \n\n", resultadoFinal);
                        system("pause");
                    }

                    //FORMULA COM REPETIÇAO
                    if(opc3 == 6){
                        int fatorial, combinacao, resultadoFinal, repeticao;
                        int resposta = 1, respcombinacao = 1;

                        printf("Por favor digite o numero total de elementos que existem: ");
                        scanf("%d", &fatorial);

                        for ( ; fatorial >=1; --fatorial){
                             resposta *= fatorial;
                        }

                        printf("Defina quantas repeticoes ha: ");
                        scanf("%d", &repeticao);

                        for( ; repeticao >=1; --repeticao){
                            printf("Digite quantas vezes o numero se repete: ");
                            scanf("%d", &combinacao);

                            for ( ; combinacao >=1; --combinacao){
                                respcombinacao *= combinacao;
                            }
                        }

                        resultadoFinal = resposta / respcombinacao;
                        printf("O resultado da permutacao com repeticao e: %d \n\n", resultadoFinal);
                        system("pause");
                    }

                    //OPIÇAO INVALIDA
                    if(opc3 > 7){
                        printf("\nOpcao invalida. Digite novamente\n");
                        system("pause");
                    }
                }while(opc3 != 7);
        }

        //OPÇAO INVALIDA
        if(sele > 4){
            printf("\nOpcao invalida. Digite novamente\n");
            system("pause");
        }
    }while (sele != 4);
  return 0;
}
