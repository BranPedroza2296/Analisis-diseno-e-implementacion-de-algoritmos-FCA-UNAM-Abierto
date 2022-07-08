#include <stdio.h>
#include <windows.h>
int a;
void instrucciones();
void imprime();
void main()
{
    instrucciones();
    if (a == 0)
    {
        printf("Finalizada la secuencia, gracias");
    }
    else
    {
        a = a * 2;
        imprime();
    }
    return 0;
}
instrucciones()
{
    printf("Por favor digita un numero para ver la secuencia: ");
    scanf("%i", &a);
    return a;
}
imprime()
{
 printf("Para detener la secuencia ingresa el 0, sino, ingresa cualquier
otro numero \n");
 int b;
 for (int i=0 ;i<25;i++){
        printf("%i \n", a);
        Sleep(35);
 }
 scanf("%i",&b );
 system("cls");
 if(b==0){
        printf("Finalizada la secuencia, gracias");
 }
 else{
        imprime();
 }
}