#include <stdio.h>

int main() {
    char op[10];

    printf("Enter an option: ");
    scanf("%s", op);

    switch (op[0]) {
        case 'a':
            printf("You entered option A.\n");
            break;
        case 'b':
            printf("You entered option B.\n");
            break;
        case 'c':
            printf("You entered option C.\n");
            break;
        default:
            printf("Invalid option.\n");
    }

    return 0;
}