#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>

struct Dados{
    char nome[30];
    char email[15];
    char infPes[100];
    };
struct Endereco{
    char rua[30];
    char num[10];
    char complem[30];
    char bairro[20];
    char CEP[20];
    char cidade[20];
    char estado[20];
    char pais[20];
    struct Dados dados;};
struct Telefone{
    int DDD ;
    int numtel;
    struct Endereco end;};
struct DataAn{
    int dia;
    int mes;
    int ano;
    struct Telefone tel;
    };
typedef struct DataAn Agenda;
int main()
{
    Agenda agenda[100];
    int opc;
    do{
        printf("-------------------------Agenda-------------------------------\n");
        printf("Escolha a opcao para:");
        printf("(1)---------------------------------cadastrar pessoa\n");
        printf("(2)-------------------------buscar cadastro por nome\n");
        printf("(3)----------------------buscar cadastro por por mes\n");
        printf("(4)--------------------buscar cadastro por dia e mes\n");
        printf("(5)----------------------- deletar cadastro por nome\n");
        printf("(6)------------------------imprimir cadastros totais\n");
        printf("(7)-----imprimir cadastros com mes, e-mail, telefone\n");
        printf("(8)----------------------------------------------Sair\n");
        scanf("%d",&opc);

        switch(opc)
        {
          case 1:{
                    for (int i = 0; i < 100; i++){
                        printf(" -----------Preencha os dados abaixo--------------\n");
                        printf("Nome:");
                        scanf("s%",&agenda[i].tel.end.dados.nome);
                        printf("E-mail:");
                        scanf ("%s", &agenda[i].tel.end.dados.email);
                        printf("Imformações pessoais:");
                        scanf ("%s",&agenda[i].tel.end.dados.infPes);
                        printf("-----------------Endereco-----------------------\n");
                        printf("Rua:");
                        scanf("%s",&agenda[i].tel.end.rua);
                        printf("Num:");
                        scanf("%s",&agenda[i].tel.end.num);
                        printf("Complemento:");
                        scanf("%s",&agenda[i].tel.end.complem);
                        printf("Bairro:");
                        scanf("%s",&agenda[i].tel.end.bairro);
                        printf("CEP:");
                        scanf ("%s",&agenda[i].tel.end.CEP);
                        printf("Cidade:");
                        scanf ("%s",&agenda[i].tel.end.cidade);
                        printf("Estado:");
                        scanf ("%s",&agenda[i].tel.end.estado);
                        printf("País:");
                        scanf ("%s",&agenda[i].tel.end.pais);
                        printf("----------Telefone:--------------\n");
                        printf("DDD e Numero:");
                        scanf ("%d %d",&agenda[i].tel.DDD,&agenda[i].tel.numtel);
                        printf("----------Data aniversario:--------------\n");
                        printf("(Dia, Mes, Ano)");
                        scanf ("%d %d %d",&agenda[i].dia,&agenda[i].mes,&agenda[i].ano);
                    }
          }break;
          case 2:{
                    char nome[30];
                    printf("Digite o nome de referencia:\n");
                    scanf("%s",&nome);
                    printf("----------Aniversariantes do mes mes-------------------\n");
                    for(int i=0;i<100;i++)
                    {
                         if(nome==agenda[i].tel.end.dados.nome)
                        {
                            printf(" -----------Preencha os dados abaixo\n--------------");
                            printf("Nome:$s\n",&agenda[i].tel.end.dados.nome);
                            printf("E-mail:$s\n",agenda[i].tel.end.dados.email);
                            printf("Imformações pessoais:%s\n",agenda[i].tel.end.dados.infPes);
                            printf("-----------------Endereço-----------------------\n");
                            printf("Rua:$s\n",agenda[i].tel.end.rua);
                            printf("Numero:$s\n",agenda[i].tel.end.num);
                            printf("Complemento:$s\n",agenda[i].tel.end.complem);
                            printf("Bairro:$s\n",agenda[i].tel.end.bairro);
                            printf("CEP:$s\n",agenda[i].tel.end.CEP);
                            printf("Cidade:$s\n",agenda[i].tel.end.cidade);
                            printf("Estado:$s\n",agenda[i].tel.end.estado);
                            printf("País:$s\n",agenda[i].tel.end.pais);
                            printf("----------Telefone:--------------\n");
                            printf("(%d %d)\n",agenda[i].tel.DDD,agenda[i].tel.numtel);
                            printf("----------Data aniversário:--------------\n");
                            printf("(Dia%d, Mes%d, Ano%d)");
                            scanf ("%d %d %d",&agenda[i].dia,&agenda[i].mes,&agenda[i].ano);
                        }

                    }break;
          }
          case 3:{
                    int mes;
                    printf("Digite o número do mes de referencia:\n");
                    scanf("%d",&mes);
                    printf("----------Aniversáriantes do mes mes--------------\n");
                    for(int i=0;i<100;i++)
                    {
                        if(mes==agenda[i].mes)
                        {

                            printf("Nome:$s\n",&agenda[i].tel.end.dados.nome);
                            printf("E-mail:$s\n",agenda[i].tel.end.dados.email);
                            printf("Imformações pessoais:\n",agenda[i].tel.end.dados.infPes);
                            printf("-----------------Endereço-----------------------\n");
                            printf("Rua:$s\n",agenda[i].tel.end.rua);
                            printf("Numero:$s\n",agenda[i].tel.end.num);
                            printf("Complemento:$s\n",agenda[i].tel.end.complem);
                            printf("Bairro:$s\n",agenda[i].tel.end.bairro);
                            printf("CEP:$s\n",agenda[i].tel.end.CEP);
                            printf("Cidade:$s\n",agenda[i].tel.end.cidade);
                            printf("Estado:$s\n",agenda[i].tel.end.estado);
                            printf("País:$s\n",agenda[i].tel.end.pais);
                            printf("----------Telefone:--------------\n");
                            printf("(%d %d)\n",agenda[i].tel.DDD,agenda[i].tel.numtel);
                            printf("----------Data aniversário:--------------\n");
                            printf("(Dia%d, Mes%d, Ano%d)");
                            scanf ("%d %d %d",&agenda[i].dia,&agenda[i].mes,&agenda[i].ano);
                        }
                    }break;
          }
          case 4:{
                    int mes, dia ;
                    printf("Digite o número do mes e o dia de referencia:\n");
                    scanf("%d %d",&mes, dia);
                    printf("----------Aniversáriantes do dia %d e mes%d\n",dia,mes);
                    for(int i=0;i<100;i++)
                    {
                         if(dia==agenda[i].dia&&mes==agenda[i].mes)
                        {

                            printf("Nome:$s\n",&agenda[i].tel.end.dados.nome);
                            printf("E-mail:$s\n",agenda[i].tel.end.dados.email);
                            printf("Imformações pessoais:\n",agenda[i].tel.end.dados.infPes);
                            printf("-----------------Endereço-----------------------\n");
                            printf("Rua:$s\n",agenda[i].tel.end.rua);
                            printf("Numero:$s\n",agenda[i].tel.end.num);
                            printf("Complemento:$s\n",agenda[i].tel.end.complem);
                            printf("Bairro:$s\n",agenda[i].tel.end.bairro);
                            printf("CEP:$s\n",agenda[i].tel.end.CEP);
                            printf("Cidade:$s\n",agenda[i].tel.end.cidade);
                            printf("Estado:$s\n",agenda[i].tel.end.estado);
                            printf("País:$s\n",agenda[i].tel.end.pais);
                            printf("----------Telefone:--------------\n");
                            printf("(%d %d)\n",agenda[i].tel.DDD,agenda[i].tel.numtel);
                            printf("----------Data aniversário:--------------\n");
                            printf("(Dia%d, Mes%d, Ano%d)");
                            scanf ("%d %d %d",&agenda[i].dia,&agenda[i].mes,&agenda[i].ano);
                        }

                    }
          }break;
          case 5:{
                        char nome[30];
                        printf("Digite o nome de referencia:\n");
                        scanf("%s",&nome);
                        printf("----------Retirando o nomedo do cadastro----------");
                        for(int i=0;i<100;i++)
                        {
                             if(nome==agenda[i].tel.end.dados.nome)
                                {
                                    agenda[i-1] = agenda[i];

                                }

                        }
          }break;
          case 6:{
                    for(int i=0;i<100;i++)
                    {
                            printf("Nome:$s\n",&agenda[i].tel.end.dados.nome);
                            printf("E-mail:$s\n",agenda[i].tel.end.dados.email);
                            printf("Imformações pessoais:\n",agenda[i].tel.end.dados.infPes);
                            printf("-----------------Endereço-----------------------\n");
                            printf("Rua:$s\n",agenda[i].tel.end.rua);
                            printf("Numero:$s\n",agenda[i].tel.end.num);
                            printf("Complemento:$s\n",agenda[i].tel.end.complem);
                            printf("Bairro:$s\n",agenda[i].tel.end.bairro);
                            printf("CEP:$s\n",agenda[i].tel.end.CEP);
                            printf("Cidade:$s\n",agenda[i].tel.end.cidade);
                            printf("Estado:$s\n",agenda[i].tel.end.estado);
                            printf("País:$s\n",agenda[i].tel.end.pais);
                            printf("----------Telefone:--------------\n");
                            printf("(%d %d)\n",agenda[i].tel.DDD,agenda[i].tel.numtel);
                            printf("----------Data aniversário:--------------\n");
                            printf("(Dia%d, Mes%d, Ano%d)");
                            scanf ("%d %d %d",&agenda[i].dia,&agenda[i].mes,&agenda[i].ano);
                    }
          }break;
          case 7:
          {
                    for(int i=0;i<100;i++)
                    {
                            printf("Nome:$s\n",&agenda[i].tel.end.dados.nome);
                            printf("E-mail:$s\n",agenda[i].tel.end.dados.email);
                            printf("----------Telefone:--------------\n");
                            printf("(%d %d)\n",agenda[i].tel.DDD,agenda[i].tel.numtel);

                    }break;
            }
         default:{printf("Opcao  invalida!");}
        }
    }while(opc=='8');
    system("pause");
    return 0;
}


