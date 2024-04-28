#include<stdio.h>
#include<locale.h>

int main(){
   int stars,tamanho,espaco;
   printf("escolha um tamanho\n");
   scanf("%d",&tamanho);

   for(int i=1;i<=tamanho; i++){
      for(espaco=1;espaco<=tamanho-i;espaco++){
         printf(" ");
      }
      for(stars=1;stars<=i*2-1;stars++){
         printf("*");
      }
      printf("\n");
   }

}