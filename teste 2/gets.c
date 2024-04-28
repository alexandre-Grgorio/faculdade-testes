#include<stdio.h>

int main(){
    char nome3[50];
    char sobrenome3[255];

    printf("seu nome ?");

    gets(nome3);

    printf("sseu sobrenome");

    gets(sobrenome3);

    printf("%s %s",nome3, sobrenome3);

    return 0;
}