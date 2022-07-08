#include <stdio.h>
int menu;
void caso_30();
void caso_31();
void seleccionar_mes();
void main()
{
    seleccionar_mes();
    return 0;
}
seleccionar_mes()
{
    do
    {
        printf("Por favor seleccione el mes que desea:\n");
        printf("0. Salir del programa\n");
        printf("1. Enero\n");
        printf("2. Febrero\n");
        printf("3. Marzo\n");
        printf("4. Abril\n");
        printf("5. Mayo\n");
        printf("6. Junio\n");
        printf("7. Julio\n");
        printf("8. Agosto\n");
        printf("9. Septiembre\n");
        printf("10. Octubre\n");
        printf("11. Noviembre\n");
        printf("12. Diciembre\n");
        scanf("%i", &menu);
        switch (menu)
        {
        case 0:
            system("cls");
            printf("Hasta luego!!!\n");
            break;
        case 2:
            system("cls");
            printf("Tiene 28 dias, y cada 4 anios, llega a tener 29\n\n\
n");
            break;
        case 4:
            caso_30();
            break;
        case 6:
            caso_30();
            break;
        case 9:
            caso_30();
            break;
        case 11:
            caso_30();
            break;
        case 1:
            caso_31();
            break;
        case 3:
            caso_31();
            break;
        case 5:
            caso_31();
            break;
        case 7:
            caso_31();
            break;
        case 8:
            caso_31();
            break;
        case 10:
            caso_31();
            break;
        case 12:
            caso_31();
            break;
        default:
            system("cls");
            printf("Opcion no valida, intente de nuevo\n\n\n");
            break;
        }
    } while (menu != 0);
}
caso_31()
{
    system("cls");
    printf("Tiene 31 dias\n\n\n");
}
caso_30()
{
    system("cls");
    printf("Tiene 30 dias\n\n\n");
}