/*---------------------------------
Nombre: Ernesto Osvaldo Zavala Flores
codigo: 22226145
Este codigo sirve para ordenar arreglos con la metodologia Fifo y Lifo.
----------------------------------*/
#include <stdio.h>


#define TAM 5

int main() {
    int arreglo[TAM] = {0};
    int menu1, menu2, i, numero, c = 0;

    do {
        system("cls");
        printf("Ingresa una opcion:  1)FIFO  2)LIFO  3)Salir\n");
        if (scanf("%d", &menu1) != 1) {
            printf("No es numero\n");
            break;
        }

        switch (menu1) {
            case 1: // FIFO
                do {
                    system("cls");
                    printf("FIFO:\n1)Encolar  2)Desencolar  3)Mostrar  4)Salir\n");
                    if (scanf("%d", &menu2) != 1) {
                        printf("No es numero\n");
                        break;
                    }
                    switch (menu2) {
                        case 1: 
                            if (c < TAM) {
                                printf("Ingresa un numero: ");
                                scanf("%d", &numero);
                                arreglo[c++] = numero;
                            } else {
                                printf("Cola llena\n");
                            }
                           
                            break;
                        case 2: 
                            if (c > 0) {
                                for (i = 0; i < c - 1; i++) {
                                    arreglo[i] = arreglo[i + 1];
                                }
                                c--;
                                printf("Elemento desencolado\n");
                            } else {
                                printf("Cola vacia\n");
                            }
                        
                            break;
                        case 3: 
                            for (i = 0; i < c; i++) {
                                printf("%d ", arreglo[i]);
                            }
                            printf("\n");
                           
                            break;
                        case 4: 
                            break;
                        default:
                            printf("Operacion no valida\n");
                           
                            break;
                    }
                } while (menu2 != 4);
                break;

            case 2: //LIFO 
                do {
                    system("cls");
                    printf("LIFO:\n1)Apilar  2)Desapilar  3)Mostrar  4)Salir\n");
                    if (scanf("%d", &menu2) != 1) {
                        printf("No es numero\n");
                        break;
                    }
                    switch (menu2) {
                        case 1: 
                            if (c < TAM) {
                                printf("Ingresa un numero: ");
                                scanf("%d", &numero);
                                arreglo[c++] = numero;
                            } else {
                                printf("Pila llena\n");
                            }
                           
                            break;
                        case 2:
                            if (c > 0) {
                                c--;
                                printf("Elemento eliminado: %d\n", arreglo[c]);
                            } else {
                                printf("Pila vacia\n");
                            }
                           
                            break;
                        case 3: 
                            for (i = c - 1; i >= 0; i--) {
                                printf("%d ", arreglo[i]);
                            }
                            printf("\n");
                            
                            break;
                        case 4: 
                            break;
                        default:
                            printf("Operacion no valida\n");
                          
                            break;
                    }
                } while (menu2 != 4);
                break;

            case 3:
                printf("Saliendo...\n");
                break;

            default:
                printf("Operacion no valida\n");
                getch();
                break;
        }
    } while (menu1 != 3);

    return 0;
}
