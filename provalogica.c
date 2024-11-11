#include <stdio.h>
 struct Contato {
    char nome[100];
    int numero;
 };

int main(){
 int opcao = -1;
 int opcao2 = -1;

 struct Contato agenda [50];

 while(opcao!=0){
 
         printf("aperte 0 para sair do loop\n");
          printf("aperte 1 para ligar para a policia\n");
           printf("aperte 2 para ligar para o samu\n");
            printf("aperte 3 para ligar para o bombeiro\n");
             scanf("%d",&opcao);
             
              if (opcao == 1){
                 while(opcao!=0){
         printf("aperte 0 para voltar para o menu principal\n");
          printf("aperte 1 para imprimir a lista de contaros\n");
           printf("aperte 2 para criar um novo contato\n");
            printf("aperte 3 para ligar para o bombeiro\n");
             scanf("%d",&opcao);

                   printf("ligando para a policia\n");
                     printf("aperte 0 para desligar a ligação\n");
                      scanf("%d",&opcao2);
              }else if (opcao ==2){
                    printf("escreva seu nome completo:");
                    scanf("")
                    printf("lugando para o samu\n");
                    printf("aperte 0 para desligar a ligação\n");
                    scanf("%d",&opcao2);
              }else if (opcao == 3){
                  printf("ligando para o bombeiro\n");
                   printf("aperte 0 para desligar a ligação\n");
                   scanf("%d",&opcao2);
              }
}
 return 0;
}