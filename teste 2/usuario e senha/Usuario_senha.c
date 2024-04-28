#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>




int main(){
 char usuario[100];


 //int tamanho = tamanho1(Admin) / tamanho2(Admin[0]);
 int numb;

 printf("1-Administrador\n");
 printf("2-Funcionario\n");
 printf("3-Visitante\n");

    time_t current_time;

    // Get the current time
    current_time = time(NULL);

    // Print the current time
    printf("Current time is %ld seconds since the Unix epoch.\n", current_time);

 scanf("%d",&numb);

 printf("\n");

 char senha[100];

 if(numb==1){
      
     
     printf("Administrador\n");
     printf("Usuario : ");
     scanf("%s",usuario);

     if(strcmp(usuario,"Admin")==0){
         char certa[50] = "25015640";
         int i=0;
         while( i<3){
         printf("senha: ");
         scanf("%s",senha);
         
         if(strcmp(senha,certa)==0){
             printf("Bem-Vindo");
             return 0;
           }
           
             printf("Senha errada\n");
             i++;
         }
     }else {
         printf("Usuario nao encontrado");
     }
 }else if(numb==2){

     char certa[50]="x25015640";
     
     printf("Funcionario Regular\n");
     printf("Usuario : ");
     scanf("%s",usuario);
     
     if(strcmp(usuario,"funcionario")==0){
         
         int i=0;
         while( i<3){ 
         printf("senha: ");
         scanf("%s",senha);
         
         if(strcmp(senha,certa)==0){
             printf("Bem vindo");
             return 0;
         }
             printf("senha errada\n");
             i++;
             
        }
         
     }else{
         printf("usuario incorreto");
     }
    

 }else if(numb==3){
     printf("Visitante\n");
     printf("Usuario : ");
     scanf("%s",usuario);

 }else{
     printf("Desligando o Sistema\n");
    
 }

 



}
