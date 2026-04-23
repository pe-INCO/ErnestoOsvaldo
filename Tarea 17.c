#include <stdio.h>

int main() {
    int arreglo_original[11] = {67, 22, 11, 33, 55, 77, 876, 543234, 1, 111, -1};
    int arreglo[11], opcion, i, j, temp;
    int n = sizeof(arreglo_original)/sizeof(arreglo_original[0]);
    
    do {
        for (i = 0; i < n; i++) {
            arreglo[i] = arreglo_original[i];
        }

        printf("\nValores originales:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arreglo[i]);
        }
        printf("\n");

        printf("\nMenu:\n");
        printf("1) Metodo burbuja\n");
        printf("2) Metodo quick sort\n");
        printf("3) Metodo insertion sort\n");
        printf("4) Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                for (i = 0; i < n-1; i++) {
                    for (j = 0; j < n-i-1; j++) {
                        if (arreglo[j] > arreglo[j+1]) {
                            temp = arreglo[j];
                            arreglo[j] = arreglo[j+1];
                            arreglo[j+1] = temp;
                        }
                    }
                }
                printf("\nOrdenado con burbuja:\n");
                for (i = 0; i < n; i++) printf("%d ", arreglo[i]);
                printf("\n");
                break;

            case 2: { 
                int stack[50], top = -1;
                int low = 0, high = n-1;
                stack[++top] = low;
                stack[++top] = high;

                while (top >= 0) {
                    high = stack[top--];
                    low = stack[top--];
                    int pivot = arreglo[high];
                    int left = low, right = high-1;

                    while (left <= right) {
                        while (left <= right && arreglo[left] < pivot) left++;
                        while (left <= right && arreglo[right] > pivot) right--;
                        if (left <= right) {
                            temp = arreglo[left];
                            arreglo[left] = arreglo[right];
                            arreglo[right] = temp;
                            left++; 
                            right--;
                        }
                    }
                    temp = arreglo[left];
                    arreglo[left] = arreglo[high];
                    arreglo[high] = temp;

                    if (low < left-1) {
                        stack[++top] = low;
                        stack[++top] = left-1;
                    }
                    if (left+1 < high) {
                        stack[++top] = left+1;
                        stack[++top] = high;
                    }
                }

                printf("\nOrdenado con quicksort:\n");
                for (i = 0; i < n; i++) printf("%d ", arreglo[i]);
                printf("\n");
                break;
            }

            case 3: 
                for (i = 1; i < n; i++) {
                    temp = arreglo[i];
                    j = i - 1;
                    while (j >= 0 && arreglo[j] > temp) {
                        arreglo[j+1] = arreglo[j];
                        j--;
                    }
                    arreglo[j+1] = temp;
                }
                printf("\nOrdenado con insertion sort:\n");
                for (i = 0; i < n; i++) printf("%d ", arreglo[i]);
                printf("\n");
                break;

            case 4:
                printf("\nEste es el fin del programa.\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }
    } while(opcion != 4);
    
    getch();
    return 0;
}
