#include <stdio.h>
int op;
float producto;
float impuesto;
float resultado;
void menu();
void iva();
int main()
{
    printf("Por favor indica tu zona:\n");
    menu();
    iva();
    printf("Precio del producto sin el IVA: %f\n", resultado);
    return 0;
}
menu()
{
    printf("1) Frontera norte del pais\n");
    printf("2) Resto del pais\n");
    scanf("%i", &op);
    if (op == 1)
    {
        return op;
    }
    else
    {
        if (op == 2)
        {
            return op;
        }
        else
        {
            printf("op no valida, intente de nuevo\n\n");
            menu();
        }
    }
}
iva()
{
    if (op == 1)
    {
        printf("Escriba por favor el precio del producto: ");
        scanf("%f", &producto);
        impuesto = producto * 0.08;
        resultado = producto - impuesto;
        return resultado;
    }
    else
    {
        printf("Escriba por favor el precio del producto: ");
        scanf("%f", &producto);
        impuesto = producto * 0.16;
        resultado = producto - impuesto;
        return resultado;
    }
}
