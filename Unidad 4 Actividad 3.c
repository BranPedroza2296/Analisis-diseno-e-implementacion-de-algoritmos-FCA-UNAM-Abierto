#include <stdio.h>
void factorial();
int a;
int main()
{
    printf("Por favor, ingresa un numero\n");
    scanf("%i", &a);
    if (a == 0)
    {
        printf("El factorial de %i es 1\n", a);
    }
    else
    {
        int c = a;
        factorial();
        printf("El factorial de %i es %i\n", c, a);
    }
    return 0;
}
factorial()
{
    int b;
    b = a;
    while (b > 1)
    {
        b = b - 1;
        a = a * b;
    }
    return a;
}