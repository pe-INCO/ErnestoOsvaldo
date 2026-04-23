/*----------------------------------------------

Nombre: Ernesto Osvaldo Zavala Flores
Codigo:222261452
Descripcion:Crear un banco con las opciones de  mostrar saldo,depositar,retirar y salir mostrando el saldo actual.

---------------------------------------------------*/

#include<stdio.h>

int main(){
    int saldo = 5000,opcion,deposito,retiro;
    
    do{
    printf("=======================================\n");
    printf("   BIENVENiDO AL BANCO\n");
    printf(" 1.Consultar saldo \n 2.Depositar dinero \n 3.Retirar dinero \n 4.Salir\n");
    printf("=======================================\n");
    printf("   ¿Que deseas realizar hoy?\n");
    scanf("%d",&opcion);
    while (opcion<1 || opcion>4 ){
        printf("Operacion no valida. Recuerda que debe ser una opcion del 1 al 4: \n");
                          scanf(" %d", &opcion);
                        }
    switch(opcion){
                   case 1:
                        printf("Tu saldo actual es de: %d pesos\n",saldo);
                        break;
                        
                   case 2:
                         printf("Cuanto quieres depositar?: \n");
                         scanf("%d",&deposito);
                         
                         while (deposito < 100 || deposito % 100 != 0 || deposito > 20000){
                          printf("Operacion no valida. Recuerda que debe ser minimo  100 multiplos de 100 y menos de 20000 pesos: \n");
                          scanf(" %d", &deposito);
                        }
                        printf("Tu deposito a sido ralizado con exito tu saldo actual es: %d\n",saldo+deposito);
                        break;
                  case 3:
                       printf("Cuanto deseas retirar?: \n");
                       scanf("%d",&retiro);
                       while (retiro < 50 || retiro % 50 != 0 || retiro > 5000){
                          printf("Operacion no valida. Recuerda que debe ser minimo 50 multiplos de 50 y maximo de 5000 pesos: \n");
                          scanf(" %d", &retiro);
                        }
                        printf("Tu saldo actual es de %d\n",saldo-retiro);
                       break;
                       
                  case 4:
                       printf("======================================= \nTu saldo actual es de %d \nGracias por usar nuestro banco\n=======================================",saldo);
                       break;                    
    }
    
    }while(opcion !=4);
    
   
    

    getch();
    return 0 ;
    }
