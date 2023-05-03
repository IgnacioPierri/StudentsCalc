#include <stdio.h>
#include <stdlib.h>



int main ()
{

    /* Declaramos las variables enteras y flotantes  */
    int dni,nota1,nota2,cantAlumProm=0,band=0;
    float acumNotas=0;



    /* Ciclo do-while (hacer, mientras que)  */
    do
    {
        printf("***Ingreso de datos***");
        printf("\n Ingrese el DNI: ");
        scanf("%d",&dni);

    }while(dni==0);



    /* Ciclo while (mientras que, hacer)  */
    while(dni>0)
    {
        band=1;

        /* nota 1*/
        do
        {
            printf("\n Ingrese la nota l(Valor permitido 1-10):");
            scanf("%d",&nota1);

        }while(nota1<1 || nota1>10);


        /* nota 2*/
        do
        {
            printf("\n Ingrese la nota 2(Valor permitido 1-10):");
            scanf("%d",&nota2);

        }while(nota2<1 || nota2>10);



        /* calcula si aprobo o no */
        if (nota1>=7 & nota2>=7)
        {
            acumNotas+=(nota1+nota2)/2.;
            cantAlumProm++;
            printf("El alumno con DNI %d, obtuvo las notas %d y %d, por lo que PROMOCIONA.",dni, nota1, nota2);
        }
        else
            if(nota1>=4 & nota2>=4)
                printf("El alumno con DNI %d, obtuvo las notas %d y %d, por lo que RINDE EXAMEN FINAL.",dni, nota1, nota2);
            else
                printf("El alumno con DNI %d, obtuvo las notas %d y %d, por lo que REPROBO LA MATERIA.",dni, nota1, nota2);

        /* vuelve a pedir datos nuevos */
        do
        {
            printf("\n\n ***Ingreso de datos***");
            printf("\n Ingrese el DNI: ");
            scanf("%d",&dni);
        }while(dni==0);

    }

        if (cantAlumProm!=0)
            printf("\n La nota promedio de los alumnos promocionados es: %f", acumNotas/cantAlumProm);

        if (band==0)
            printf("\n No se han ingresado alumnos");

        getch();

        return 0;

}
