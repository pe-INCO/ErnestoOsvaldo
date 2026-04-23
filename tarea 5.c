#include <stdio.h>


int main() {
    float n1, n2;
    char menu;

    printf("Ingresa un numero: ");
    if (scanf("%f", &n1) == 1) {

        printf("¿Que operacion quieres realizar? (+ - * /): ");
        scanf(" %c", &menu);

        printf("Ingresa otro numero: ");
        if (scanf("%f", &n2) == 1) {

            switch (menu) {
                case '+':
                    system("cls");
                    printf("%.2f + %.2f = %.2f\n", n1, n2, n1+n2);
                    break;
                case '-':
                    system("cls");
                    printf("%.2f - %.2f = %.2f\n", n1, n2, n1-n2);
                    break;
                case '*':
                    system("cls");
                    printf("%.2f * %.2f = %.2f\n", n1, n2, n1*n2);
                    break;
                case '/':
                    system("cls");
                    if (n2 == 0) {
                        printf("Error: division entre cero no permitida\n");
                    } else {
                        printf("%.2f / %.2f = %.2f\n", n1, n2, n1/n2);
                    }
                    break;
                default:
                    system("cls");
                    printf("Operacion no valida\n");
                    break;
            }

        } else {
            printf("No es numero\n");
        }

    } else {
        printf("No es numero\n");
    }
    
    getch ();
    return 0;
}
