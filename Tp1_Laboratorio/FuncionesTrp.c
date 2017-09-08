
double suma(double a, double b)
{
    double rta;

    rta = a + b;

    printf("\nLa suma da: %.2f\n", rta);

    return rta;
}

double resta(double a, double b)
{
    double rta;

    rta= a - b;
    printf("\nLa resta da: %.2f\n", rta);

    return rta;
}

double multiplicacion(double a, double b)
{
    double rta;

    rta = a * b;
    printf("\nLa multiplicacion da: %.2f\n", rta);

    return rta;
}

double division(double a, double b)
{
    double rta;
    rta = a / b;

    if(b==0)
    {
        printf("\nERROR, el numero 2 no puede ser 0, reingrese numero 2: \n");

        }
        else
        {
            printf("\nLa division da: %.2f\n", rta);

        }


    return rta;
}



double factorial(double a)
{
    double rta = 1;

    if(a == 1)
    {
        return 1;
    }
    else

   {
       rta = a * factorial(a - 1);

   }


     return rta;
}
