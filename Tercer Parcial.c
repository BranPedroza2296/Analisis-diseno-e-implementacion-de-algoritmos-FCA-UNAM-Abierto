#include <stdio.h>
#define p printf
#define s scanf
void main()
{
    int cant_ven;
    float cant_prec;
    float total;
    do
    {
        p("Por favor introduce la cantidad vendida:\n");
        s("%i", &cant_ven);
        if (cant_ven < 0)
        {
            system("cls");
            p("Error: Cantidad no valida\n");
        }
        if (cant_ven > 0)
        {
            p("Por favor, introduce el precio\n");
            s("%f", &cant_prec);
            if (cant_prec > 0)
            {
                system("cls");
                total = total + cant_prec;
                p("Registro exitoso\n");
            }
            else
            {
                system("cls");
                p("Error: Precio no valido\n");
            }
        }
    } while (cant_ven != 0);
    p("Total, vendido = $%f \n", total);
    return 0;
}