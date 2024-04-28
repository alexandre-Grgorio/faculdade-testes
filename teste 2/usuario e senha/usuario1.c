#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
  char usuario[50], senha[50];
  printf("Digite seu usuário.");
  scanf("%s",usuario);
  printf("Digite sua senha.");
  scanf("%s",senha);
  
  if (strcmp(usuario,"admin")==0 && strcmp(senha, "admin123")== 0) {
    printf("Acesso permitido. Você entrou como Administrador.");
  }
  else if (strcmp(usuario, "usuario1") == 0 && strcmp(senha, "senha123") == 0) {
    printf("Acesso permitido. Você entrou como Usuário - Funcionário Regular.");
  
  }  else if (strcmp(usuario, "visitante") == 0 && strcmp(senha, "visitante123") == 0) {
    printf("Acesso permitido. Você entrou como Convidado.");
  
  }  else {
    printf("Acesso negado. Usuário ou senha inválidos.");  }
  
  return 0;
}