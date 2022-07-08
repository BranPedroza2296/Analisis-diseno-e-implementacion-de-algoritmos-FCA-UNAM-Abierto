#include <stdio.h>
void transferencia_pagos();
void nueva_operacion();
void menu();
void transferencia();
void contrasena();
void pagos();
int main()
{
    menu();
    return 0;
}
menu()
{
    int opcion;
    do
    {
 printf("Bienvenido, por favor selecciona la opcion que deseas realiz
ar:\n");
 printf("1) Transfenrencia de dinero\n");
 printf("2) Cambiar contrasena\n");
 printf("3) Realizar algun pago\n");
 printf("4) Salir\n");
 scanf("%i",&opcion);
 system("cls");
 switch(opcion){
        case 1:
            transferencia();
            break;
        case 2:
            contrasena();
            break;
        case 3:
            pagos();
            break;
        case 4:
            printf("Hasta luego\n\n");
            exit(0);
            break;
        default:
            printf("Opcion no valida, por favor intente de nuevo \n\n");
 }
    } while (opcion != 4);
}
nueva_operacion()
{
    int otra_operacion;
    printf("Desea hacer otra operacion?\n");
    printf("Si, ingrese el numero 1\n");
    printf("No, ingrese el numero 0\n");
    scanf("%i", &otra_operacion);
    if (otra_operacion == 1)
    {
        system("cls");
        menu();
    }
    else
    {
        system("cls");
        printf("Hatsa luego\n\n\n");
        exit(0);
    }
}
transferencia_pagos()
{
    char referencia[10];
    printf("Ingresa los 10 digitos del numero de referencia: ");
    scanf("%s", &referencia);
    if (strlen(referencia) == 10)
    {
        system("cls");
        printf("Ingresa la cantidad a depositar: ");
        float cantidad;
        scanf("%f", &cantidad);
        if (cantidad <= 10000)
        {
            system("cls");
            printf("Se ha pagado %f\n", cantidad);
            printf("Al numero de referencia %s\n", referencia);
            printf("Pago realizado con exito\n\n");
            nueva_operacion();
        }
        else
        {
            system("cls");
 printf("Lo sentimos, el monto no puede ser superior a 5000, inte
nte de nuevo\n");
 transferencia_pagos();
        }
    }
    else
    {
        system("cls");
        printf("Numero de referencia no valido, intente de nuevo\n");
        transferencia_pagos();
    }
}
transferencia()
{
    char tarjeta[16];
    printf("Ingresa los 16 digitos de la tarjeta: ");
    scanf("%s", &tarjeta);
    if (strlen(tarjeta) == 16)
    {
        system("cls");
        printf("Ingresa la cantidad a depositar: ");
        float cantidad;
        scanf("%f", &cantidad);
        if (cantidad <= 5000)
        {
            system("cls");
            printf("Se han transferido %f\n", cantidad);
            printf("A la cuenta %s\n", tarjeta);
            printf("Transferencia realizada con exito\n\n");
            nueva_operacion();
        }
        else
        {
            system("cls");
 printf("Lo sentimos, el monto no puede ser superior a 5000, inte
nte de nuevo\n");
 transferencia();
        }
    }
    else
    {
        system("cls");
        printf("Tarjeta no valida, intente de nuevo\n");
        transferencia();
    }
}
contrasena()
{
    char contra[4];
    char contra_nueva[4];
    printf("Ingresa la contrasena actual: ");
    scanf("%s", &contra);
    printf("Ingresa la nueva contrasena: ");
    scanf("%s", &contra_nueva);
    if (strlen(contra_nueva) != 4)
    {
        system("cls");
        printf("Contrasena nueva no permitida, intente de nuevo\n");
        contrasena();
    }
    else
    {
        if (strcmp(contra, contra_nueva))
        {
            system("cls");
            printf("Contrasena modificada con exito\n\n");
            nueva_operacion();
        }
        else
        {
            system("cls");
            printf("La contrasena nueva debe ser diferente a la actual\n");
            printf("Intente de nuevo\n");
            contrasena();
        }
    }
}
pagos()
{
    int opcion_pagos;
    do
    {
        printf("Indica el servicio que deseas pagar:\n");
        printf("1) Agua\n");
        printf("2) Luz\n");
        printf("3) Telefono\n");
        scanf("%i", &opcion_pagos);
        system("cls");
        switch (opcion_pagos)
        {
        case 1:
            transferencia_pagos();
            break;
        case 2:
            transferencia_pagos();
            break;
        case 3:
            transferencia_pagos();
            break;
        default:
            printf("Opcion no valida, por favor intente de nuevo \n");
        }
    } while (opcion_pagos);
}