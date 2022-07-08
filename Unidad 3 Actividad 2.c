#include <stdio.h>
int a;
void ingresar_opcion();
void mostrar_opcion();
int main()
{
    ingresar_opcion();
    scanf("%i", &a);
    mostrar_opcion(a);
    return 0;
}
ingresar_opcion(){
printf("Hola, vamos a aprender un poco de colores, por favor selecciona la o
pcion que gustes\nRecuerda solamente ingresar el numero de la opcion\n\n");
printf("1. Morado \n2. Cafe \n3. Rojo \n4. Ambar \n5. Naranja \n6. Beige \n7
. Amarillo \n8. Laguna \n9. Verde \n10. Jade \n11. Azul \n12. Rosa \n\n");
}
mostrar_opcion(a)
{
    if (a == 3 || a == 7 || a == 11)
    {
        printf("El color es primario\n");
    }
    else
    {
        if (a == 1 || a == 5 || a == 9)
        {
            printf("El color es secundario\n");
        }
        else
            printf("El color es terciario\n");
    }
}