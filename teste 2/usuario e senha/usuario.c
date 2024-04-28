#include <stdio.h> // Biblioteca padrão de entrada e saída
#include <string.h> // Biblioteca para manipulação de strings
#include <locale.h> // Biblioteca para configuração de localização
#include <stdlib.h> // Biblioteca para a função system()

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura a localização para Português

    char username[20]; // Variável para armazenar o nome de usuário
    char password[20]; // Variável para armazenar a senha
    int accessLevel = 0; // Variável para controlar o nível de acesso (0: convidado, 1: usuário, 2: administrador)
    int tentativas = 3; // Número máximo de tentativas permitidas

    // Loop para solicitar as credenciais
    while (tentativas > 0) {
        printf("Digite o nome de usuário: ");
        scanf("%s", username);
        printf("Digite a senha: ");
        scanf("%s", password);

        if (strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) {
            accessLevel = 2; // Nível de administrador
            break; // Sai do loop se as credenciais forem corretas
        } else if (strcmp(username, "usuario1") == 0 && strcmp(password, "senha123") == 0) {
            accessLevel = 1; // Nível de usuário regular
            break; // Sai do loop se as credenciais forem corretas
        } else if (strcmp(username, "visitante") == 0 && strcmp(password, "visitante123") == 0) {
            accessLevel = 0; // Nível de convidado
            break; // Sai do loop se as credenciais forem corretas
        } else {
            tentativas--; // Reduz o número de tentativas restantes
            printf("Credenciais inválidas. Tentativas restantes: %d\n", tentativas);
        }
    }

    // Verifica se o acesso foi concedido
    if (tentativas > 0) {
        // Exibe a mensagem apropriada com base no nível de acesso
        switch (accessLevel) {
            case 2:
                printf("Bem-vindo, administrador %s! Acesso concedido total.\n", username);
                break;
            case 1:
                printf("Bem-vindo, usuário regular %s! Acesso concedido limitado.\n", username);
                break;
            case 0:
                printf("Bem-vindo, visitante %s! Acesso extremamente limitado.\n", username);
                break;
            default:
                printf("Credenciais inválidas. Acesso negado.\n");
        }
    } else {
        printf("Número máximo de tentativas excedido. Acesso negado.\n");
        accessLevel = -1; // Define acesso negado
    }
    // Exibe o nível de acesso
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}