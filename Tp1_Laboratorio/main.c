#include <stdio.h>
#include <stdlib.h>
#include "FuncionesTrp.h"



int main()
{

    double n1 = 0;
    double n2 = 0;
    char seguir = 's';
    int opcion, ban=0, ban2=0;
    double x;

    //system("color 5f");
    system("color 1E");

    printf("BIENVENIDO A CALCULATOR 3.5\n\n");
    system("pause");
    system("cls");





    while(seguir == 's')
    {

        if(ban == 0)
        {
            printf("Ingresar el numero 1: ", n1);
            scanf("%lf", &n1);
            printf("\n(N1: %.2f)\n", n1);
            ban=1;
        }

        if(ban2 == 0)
        {
            printf("\nIngresar el numero 2: ", n2);
            scanf("%lf", &n2);
            printf("\n(N2: %.2f)\n\n", n2);
            ban2=1;
        }

        system("cls");


        printf("         CALCULATOR 3.5\n\n");
        printf("1.Ingresar numero 1 (N1: %.2f)\n", n1);
        printf("2.Ingresar numero 2 (N2: %.2f)\n", n2);
        printf("3.Sumar\n");
        printf("4.Restar\n");
        printf("5.Multiplicar\n");
        printf("6.Dividir\n");
        printf("7.Factorizar\n");
        printf("8.Realizar todas las operaciones\n");
        printf("9.Salir\n");

        printf("\nElija una opcion: ");
        scanf("%d", &opcion);


    while(opcion<1 || opcion>9)
    {
        printf("\nError elija una opcion entre 1-7: ");
        scanf("%d", &opcion);
    }

    switch(opcion)
    {

        case 1:

        printf("Ingrese numero 1: ");
        scanf("%lf", &n1);

        ban = 1;
        break;

        case 2:

        printf("Ingrese numero 2: ");
        scanf("%lf", &n2);

        ban2 = 1;
        break;

        case 3:

          if(ban==1 && ban2==1)
          {
             suma(n1,n2);
             }
          else
          {
              printf("Error, ingrese los numeros para realizar la suma\n");
          }

          break;

        case 4:
          if(ban==1 && ban2==1)
          {
            resta(n1,n2);
            }
            else
          {
              printf("Error, ingrese los numeros para realizar la resta\n");
          }

          break;

        case 5:
            if(ban==1 && ban2==1)
          {
             multiplicacion(n1, n2);
             }
          else
          {
              printf("Error, ingrese los numeros para realizar la multiplicacion\n");
          }


          break;

        case 6:

         if(ban==1 && ban2==1)
          {
              division(n1, n2);
              }
          else
          {
              printf("Error, ingrese los numeros para realizar la division\n");
          }


          break;

        case 7:

            if(n1> 170 || n1<=0 )
            {
                printf("ERROR en la factorizacion el numero debe ser mayor a 0 y menor a 171\n");
                break;
            }
          printf("El factorial se realiza con el PRIMER numero\n");
          if(ban==1)
          {

              x = factorial(n1);
             printf("La factorizacion de %.2f da: %.2f\n", n1, x);
          }
          else
          {
              printf("Error ingrese el numero 1 para realizar la factorizacion\n");
          }
          break;

        case 8:

          if(ban==1 && ban2==1)
          {
          suma(n1, n2);

          resta(n1, n2);

          multiplicacion(n1, n2);

          division(n1, n2);

          if(n1> 170 )
            {
                printf("ERROR en la factorizacion el numero debe ser positivo y menor a 171\n");
                break;
            }

            x=factorial(n1);

          printf("\nLa factorizacion de %.2lf es: %.2lf\n", n1, x);

          }
          else
          {
              printf("Error ingrese los numeros para realizar las operaciones\n");
          }


          break;

        case 9:
          seguir = 'n';
          printf("\n\n         HASTA LUEGO!!!\n\n\n");
          break;

            }
            system("\npause");
            system("cls");

}



}




