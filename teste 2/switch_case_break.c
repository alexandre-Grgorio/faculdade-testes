#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int op;
    int varLoop= 1;

    setlocale(LC_ALL, "Portuguese_Brazil");
    while(varLoop==1){

      system("cls");

    printf("==========================================\n");
    printf("escolha um numero nas op��o abaixo\n");
    printf("1- para somar\n");
    printf("2- para multiplicar\n");
    printf("3- nome sobrenome\n");
    printf("4- Divis�o\n");
    printf("5- sair do menu\n");
    printf("==========================================\n");
    scanf("%d",&op);

 switch(op){
   //case 1
   int a,b,vf;
   //case 2
   int s1,s2,sf;
   //case 3
   char nome[50];
   char sobrenome[51];
   //case 4
   double n1,n2;
   double n3;
   //final


    case 1 :
    
    puts("Escolha o numero da primeira soma");
    scanf("%d",&a);
    puts("Digite o segundo numero");
    scanf("%d",&b);
    vf= a+b;
    printf("seu numero �: %d\n",vf);

    system("pause");
    break;

    case 2:  

    puts("Digite o numero a multiplicar");
    scanf("%d",&s1);
    puts("Digite o segundo numero");
    scanf("%d",&s2);
    sf=s1*s2;
    printf("%dx%d=%d\n",s1,s2,sf);

    system("pause");

    break;

    case 3:

    puts("digite seu nome");
    scanf("%s",nome);
    puts("digite seu sobrenome");
    scanf("%s",sobrenome);

    printf("%s %s\n",nome,sobrenome);

    system("pause");

    break;

    case 4:
    
    puts("digite o numero a ser Dividido\n");
    scanf("%lf",&n1);
    puts("Digite o segundo numero");
    scanf("%lf",&n2);
    n3=n1/n2;
    printf("%.2f\n",n3);

    system("pause");
    break;

    default:

    varLoop=0;

    printf("encerrando a variavel");
    
 }   
}
 return 0;
}