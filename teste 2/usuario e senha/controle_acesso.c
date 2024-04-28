#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//função que verifica o usuario e senha do cargo ADMINISTRADOR
int AdminNames(char *usuario,char *senhac){
   if(strcmp(usuario,"alexandre")==0 && strcmp(senhac,"alert2580")==0){
      return 1;
   }else if(strcmp(usuario,"admin")==0 && strcmp(senhac,"admin123")==0){
      return 1;

   }else{
      return 0;
   }
}

// função que verifica nome e senha de FUNCIONARIOS
int funcionarioNames(char funcionario[][20],char *usuario,int numb,char *senha){
   for(int i= 0;i<numb;i++){
      
      if(strcmp(funcionario[i],usuario)==0){
           
           if(strcmp(usuario,"funcionario")==0 && strcmp(senha,"usuario123")==0){
              return 1;
           }else if(strcmp(usuario,"thainan")==0 && strcmp(senha,"alert123")==0){
              return 1;
           }else if(strcmp(usuario,"fabio")==0 && strcmp(senha,"usuario123")==0){
             return 1;
           }else if(strcmp(usuario,"Oswaldo")==0 && strcmp(senha,"funcionario123")==0){
             return 1;
           }else{
             return 0;
           }

      }
   }
   return 0;
 }
// função que verifica nome do VISITANTE
int visitantesNames(char usuarios[100],char visitante[][20]){
   for(int i=0; i<10; i++){
      if(strcmp(usuarios,visitante[i])==0){
         return 1;
      }    
   }
   return 0;
}



int main(){
//array com os nomes dos funcionarios
 char funcionario[][20]= {"funcionario","thainan","fabio","oswaldo"};
 //array com os nome dosvisitantes
 char visitante[][20]= {"visitante","visitante1","visitante2"};

 while(1){
 char numb[50];
  system("cls");
 printf("=======================================================\n");
 printf("                Digite Seu cargo\n\n");
 printf("                Admin\n");
 printf("                Funcionario\n");
 printf("                Visitante\n");
 printf("                \n");
 printf("                Desligar \n");
 
 printf("=======================================================\n");

 scanf("%s",numb);

 printf("\n");
// essa parte faz o processamento dos dados dos Admin
 if(strcasecmp(numb,"Admin")==0){ 
     char usuario[100],senhaAle[50];
     printf("Administrador\n");  
     printf("Usuario : ");     //recebe o nome a ser verificado
     scanf("%s",usuario);      //recebe e armazena o valor
     printf("senha: ");        //recebe a senha para ser verificado
     scanf("%s",senhaAle);     //recebe e armazena a senha 

     //O if chama a função e verfifica se os usuarios e senha são iguais
     if(AdminNames(usuario,senhaAle)){
       system("cls");
       printf("seja Bem-vindo admin %s\n\n",usuario);
       printf("\n");
       printf("Configuacoes avancadas\n");
       printf("Configuacoes de Exibicao\n");
       printf("Navegador\n\n");
       system("pause");    
     }else{
        printf("Usuario ou senha invalido\n\n"); // se não forem iguais o else e ativado para dizer que algo esta errado 
        system("pause");
     }
// essa parte faz o processamento dos dados dos FUNCIONARIOS
 }else if(strcasecmp(numb,"Funcionario")==0){
    char usuarios[100],senha[50];

    printf("Funcionario Regular\n");
    printf("Usuario : ");              //recebe o nome a ser verificado
    scanf("%s",usuarios);              //armazena o nome 
    printf("senha: ");                 //recebe o senha a ser verificado
    scanf("%s",senha);                 //armazena senha 

    //O if chama a função e verfifica se os usuarios e senha são iguais
    if(funcionarioNames(funcionario,usuarios,10,senha)){

       system("cls");
       printf("seja bem vindo Funcionario %s\n\n",usuarios);
       printf("\n");
       printf("Configuacoes de Exibicao\n");
       printf("Navegador\n\n");
       system("pause");

      }else{
       printf("Usuario ou senha invalido\n\n"); // se não forem iguais o else e ativado para dizer que algo esta errado 
       system("pause");
      }

 // essa parte faz o processamento dos dados dos VISITANTES
 }else if(strcasecmp(numb,"visitante")==0){

    char usuarios[100], senha[50];

    printf("Visitante\n");
    printf("Usuario : ");              //recebe o nome a ser verificado
    scanf("%s",usuarios);              //recebe o nome a ser verificado
    printf("Senha: ");                 //recebe o nome a ser verificado 
    scanf("%s",senha);                 //recebe o nome a ser verificado

    //O if chama a função e verfifica se os usuarios e senha são iguais
    if(visitantesNames(usuarios,visitante) && strcmp(senha,"visitante123")==0){
        system("cls");
        printf("seja bem vindo %s\n\n",usuarios);
        printf("\n");
        printf("Navegador\n\n");
        system("pause");
    }else{
      printf("Usuario ou senha invalido\n\n"); // se não forem iguais o else e ativado para dizer que algo esta errado 
      system("pause");
    }    
 }else{
    printf("Desligando o Sistema\n");
    return 0;
  }
 }
}