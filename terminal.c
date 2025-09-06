#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct{
    char nome[100];
    char telefone[11];    
}Contato;


int main(void){

    char comando[100];
    char nomeAgenda[50];

    int a;
    int comandoExit;
    int comandoAgenda;
    int escolhaAgenda;

    FILE *arquivo;
    Contato agenda[100];

    while (1){
        printf("mySystem>");
        scanf("%99s", comando);

        comandoExit = strcmp("exit", comando);
        if(!comandoExit){
            printf("\nSaindo!\n\n");
            exit (0);
        }

        comandoAgenda = strcmp("agenda", comando);
        if(!comandoAgenda){
            int escolhaValida = 0;
            do{
                printf("O que deseja fazer na agenda??\n\t1)Criar uma agenda e editar\n\t2)Editar uma agenda ja existente\n\t3)Sair\n");            
                scanf("%d", &escolhaAgenda);
            
                    switch(escolhaAgenda){
                        case 1:
                            escolhaValida = 1;
                            printf("Qual o nome da agenda??\n");
                            scanf("%49s", nomeAgenda);
                            arquivo = fopen("dasda.txt","r");        
                        break;

                        /*
                        case '2:
                            escolhaValida = 1;
                            printf("Saindo da agenda");
                        break;
                        */

                        case 3:
                            printf("Saindo da agenda\n\n");
                            escolhaValida = 1;
                        break;

                default:
                            printf("Digite um valor valido oh sua mula!\n\n");
                }
            }while(escolhaValida == 0);

            printf("Teste");
            scanf("%d");
            for (int i=0; i<100; i++){
                printf("DNADASDNAD");


                //asdad
                //_ADDRESSOFsa
              //  srandsd
            }
        }
    }
}

