#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int op;
    printf("===============================================\n ");
    printf("Responda as perguntas\n ");
    printf("Aperte 1 para proseguir com as perguntas\n");
    printf("===============================================\n ");
    printf("\n");
    scanf("%d",&op);

    //casa 1
    char sim[50];
    char Si[10] = ("sim");

    

  switch(op){

    case 1 :
    printf("\no 5 e maior que 4 ? \n");
    scanf("%s",sim);
    if(strcmp(sim,Si)==0){
        printf("voce acertou");
    }else{
        printf("vc errou");
    }

    break;


  }

}