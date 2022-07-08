#include <stdio.h>
void triangulo();
void rectangulo();
void cuadrado();
void circulo();
int opcion;
float pi = 3.1416;
float base;
float altura;
float radio;
float resultado;
int main()
{
    do
    {
        printf("Por favor, Selecciona una opcion para calcular un area\n");
        printf("1. Triangulo\n");
        printf("2. Rectangulo \n");
        printf("3. Cuadrado\n");
        printf("4. Circulo\n");
        printf("5. Salir\n");
        scanf("%i", &opcion);
        switch (opcion)
        {
        case 1:
            triangulo();
            break;
        case 2:
            rectangulo();
            break;
        case 3:
            cuadrado();
            break;
        case 4:
            circulo();
            break;
        case 5:
            printf("Hasta Luego\n");
            break;
        default:
            printf("opcion no valida, intente de nuevo\n");
            break;
        }
    } while (opcion != 5);
    return 0;
}
triangulo()
{
    printf("introduce la base\t");
    scanf("%f", &base);
    printf("introduce la altura\t");
    scanf("%f", &altura);
    resultado = (base * altura) / 2;
    printf("El area es %f\n\n", resultado);
}
rectangulo()
{
    printf("introduce la base\t");
    scanf("%f", &base);
    printf("introduce la altura\t");
    scanf("%f", &altura);
    resultado = base * altura;
    printf("El area es %f\n\n", resultado);
}
cuadrado()
{
    printf("introduce la base o la altura\t");
    scanf("%f", &base);
    resultado = base * base;
    printf("El area es %f\n\n", resultado);
}
circulo()
{
    printf("introduce el radio\t");
    scanf("%f", &radio);
    resultado = pi * (radio * radio);
    printf("El area es %f\n\n", resultado);
}