#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
float num1;
float num2;
int opcion,si;

//calculadora


main()


{

 mensaje();

			printf("\n BIENVENIDOS A LA CALCULADORA REALIZADA POR EL SR. MARIANO...!!");
			printf("\n\n QUE LO DISFRUTEN!!");
			printf("\n\n");
			system("pause");

		do
				{
					printf("\n	Ingrese primer  numero  : ");
					scanf("%f",&num1);
					printf("\n	Ingrese segundo numero  : ");
					scanf("%f",&num2);

			printf("\n\n");
			printf("QUE OPERACION MATEMATICA BASICA DESEAS RALIZAR?\n\n");
			printf("OPCION 1: SUMA\n");
			printf("OPCION 2: RESTA\n");
			printf("OPCION 3: MULTIPLICACION\n");
			printf("OPCION 4: DIVISION\n");
			printf("\nElija opcion y pulse enter: ");
			scanf("%d",&opcion);
			printf("\t\n\n");



		switch(opcion)
		{
		case 1:	printf("\nEl resultado es %.2f", suma(num1, num2));
		break;
		case 2: printf("\nEl resultado es %.2f", resta(num1, num2));
		break;
		case 3:  printf("\nEl resultado es %.2f", multiplicacion(num1, num2));
		break;
		case 4 :printf("\nEl resultado es %.2f", division(num1, num2));


		break;
		default:			printf("\n\n .OPCION INGRESADA INVALIDA.\n\n");
	}
	printf("\n\n Desea realizar otra operacion?: \n");
	printf ("\n Marque: 1 para ''SI'' ");
	printf ("\n Marque: 2 para ''NO'' \n\n ");
	printf("\nElija opcion y pulse enter: ");
	scanf("%d",&si);


	}while(si!=2);
	printf("\n ADIOS!!");
	printf("\t\t\n\n");
	system("pause");
	return 0;
}
