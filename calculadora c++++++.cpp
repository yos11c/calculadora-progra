#include <iostream>
main()
{
    int n1, n2, resp;
    int opcion;
        printf ("Calculadora\n");
        printf ("* 1. Suma *\n");
        printf ("* 2. Resta *\n");
        printf ("* 3. Multiplicacion *\n");
        printf ("* 4. Division *\n");

        printf ("¿Que operacion desea realizar?\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf ("Ingrese el primer numero: ");
                scanf("%d, &n1");
                printf ("\nIngrese el segundo numero: ");
                scanf("%d, &n2");
                resp = n1+n2;
                printf("\nResultado= %d", resp);
                break;
            case 2:
                printf ("Ingrese el primer numero: ");
                scanf("%d, &n1");
                printf ("\nIngrese el segundo numero: ");
                scanf("%d, &n2");
                resp = n1-n2;
                printf("\nResultado= %d", resp);
                break;
            case 3:
                printf ("Ingrese el primer numero: ");
                scanf("%d, &n1");
                printf ("\nIngrese el segundo numero: ");
                scanf("%d, &n2");
                resp = n1*n2;
                printf("\nResultado= %d", resp);
                break;
            case 4:
                printf ("Ingrese el primer numero: ");
                scanf("%d, &n1");
                printf ("\nIngrese el segundo numero: ");
                scanf("%d, &n2");
                resp = n1/n2;
                printf("\nResultado= %d", resp);
                break;
            default:
                printf ("No se ha seleccionado una opcion correcta");
                break;

        }
        printf("\n\n");
        system("pause");


}