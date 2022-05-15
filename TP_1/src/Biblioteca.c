#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

#define BITCOIN 4606954.55

void MenuPrincipal()
{
		setbuf(stdout, NULL);

		int opcion;

		float x=0;

		float y=0;

		float z=0;

		float precioDebitoAerolineas;

		float precioCreditoAerolineas;

		float precioBitAerolineas;

		float precioUnitarioAerolineas;

		float precioDebitoLatam;

		float precioCreditoLatam;

		float precioBitcoinLatam;

		float precioUnitarioLatam;

		float diferencia;

		char volver;

		volver=1;

		do{

			printf("\n MERU PRINCIPAL");

			printf("\n------------ \n");

			printf("1. Ingresar Kilómetros: (Km=%.2f)", x);

			printf("\n2. Ingresar Precio de Vuelos: (Aerolineas= %.2f, Latam %.2f)", y, z);

			printf("\n3. Calculas todos los costos. ");

			printf("\n4. Informar Resultados. ");

			printf("\n5. Carga forzada de datos. ");

			printf("\n6. Salir");

			printf("\n--------------\n");
			fflush(stdin);
			scanf("%d", &opcion);

			switch(opcion)
			{
			case 1:

				x= PedirYValidarNumero("Ingrese Kilometros: ");
				break;

			case 2:
				printf("Ingrese precio de vuelos: \n");
				y=PedirYValidarNumero("Precio de vuelos en Aerolineas: ");
				z=PedirYValidarNumero("Precio de vuelos en Latam: ");
				break;

			case 3:
				if(x==0 && y==0 && z==0)
				{
					printf("Error, no hay o faltan valores en los vuelos para realizar dicha operacion\n");
					system("pause");
				}
				else
				{
					precioDebitoAerolineas=CostoDebitoAerolineas(y);
					precioCreditoAerolineas=CostoCreditoAerolineas(y);
					precioBitAerolineas=CostoBitCoinAerolineas(y);
					precioUnitarioAerolineas=PrecioUnitarioAerolineas(x,y);

					precioDebitoLatam=CostoDebitoLatam(z);
					precioCreditoLatam=CostoCreditoLatam(z);
					precioBitcoinLatam=CostoBitCoinLatam(z);
					precioUnitarioLatam=PrecioUnitarioLatam(x,z);

					printf("Costos Calculados\n");

					system("pause");
				}
				break;

			case 4:
				if(x==0 && y==0 && z==0)
				{
				printf("Error, no hay o faltan valores en los precios para realizar dicha operacion\n");
				system("pause");
				}
				else
				{
					printf("\nPrecio Aerolineas %.2f", y);
					printf("\na) Precio con Tarjeta de Debito: %.2f",precioDebitoAerolineas);
					printf("\nb) Precio con Tarjeta de Credito: %.2f",precioCreditoAerolineas);
					printf("\nc) Precio pagando con bitcoin: %.2f",precioBitAerolineas);
					printf("\nd) Precio Unitario: %2.f\n",precioUnitarioAerolineas);

					printf("\nPrecio Latam %.2f", z);
					printf("\na) Precio con Tarjeta de Debito: %.2f",precioDebitoLatam);
					printf("\nb) Precio con Tarjeta de Credito: %.2f",precioCreditoLatam);
					printf("\nc) Precio pagando con bitcoin: %.2f",precioBitcoinLatam);
					printf("\nd) Precio Unitario: %2.f\n",precioUnitarioLatam);

					system("pause");
				}

				break;

			case 5:
				x=7090;
				y=162965;
				z=159339;
				diferencia=y-z;
				printf("\nKMs ingresados: %.2f km\n",x);

				precioDebitoAerolineas=CostoDebitoAerolineas(y);
				precioCreditoAerolineas=CostoCreditoAerolineas(y);
				precioBitAerolineas=CostoBitCoinAerolineas(y);
				precioUnitarioAerolineas=PrecioUnitarioAerolineas(x,y);

				precioDebitoLatam=CostoDebitoLatam(z);
				precioCreditoLatam=CostoCreditoLatam(z);
				precioBitcoinLatam=CostoBitCoinLatam(z);
				precioUnitarioLatam=PrecioUnitarioLatam(x,z);

				printf("\nPrecio Aerolineas %.2f", y);
				printf("\na) Precio con Tarjeta de Debito: %.2f",precioDebitoAerolineas);
				printf("\nb) Precio con Tarjeta de Credito: %.2f",precioCreditoAerolineas);
				printf("\nc) Precio pagando con bitcoin: %.2f",precioBitAerolineas);
				printf("\nd) Precio Unitario: %2.f\n",precioUnitarioAerolineas);

				printf("\nPrecio Latam %.2f", z);
				printf("\na) Precio con Tarjeta de Debito: %.2f",precioDebitoLatam);
				printf("\nb) Precio con Tarjeta de Credito: %.2f",precioCreditoLatam);
				printf("\nc) Precio pagando con bitcoin: %.2f",precioBitcoinLatam);
				printf("\nd) Precio Unitario: %2.f\n",precioUnitarioLatam);

				printf("\nLa diferencia de precio es: %2.f\n", diferencia);
				break;

			case 6:
				volver=0;
				break;

			default:
				printf("ingrese una opcion valida...");
				printf("\n");
				system("pause");
				break;
			}
		}

		while(volver!=0);

}

float PedirYValidarNumero(char mensaje[])
{
    float numeroIngresado;

    printf("%s", mensaje);
    scanf("%f", &numeroIngresado);

    while(numeroIngresado<1)
    	{
    		printf("Error, ingrese un numero valido: ");
    		scanf("%f", &numeroIngresado);
    	}

    return numeroIngresado;
}


float CostoDebitoAerolineas(float y)
{
	float descuento;
	float precioDescuento;

	descuento= y*0.10;
	precioDescuento=y-descuento;

	return precioDescuento;
}


float CostoCreditoAerolineas(float y)
{
	float aumento;
	float precioAumento;

	aumento= y*0.25;
	precioAumento=y+aumento;

	return precioAumento;
}


float CostoBitCoinAerolineas(float y)
{
	float precioConBitcoin;

	precioConBitcoin= y/BITCOIN;

	return precioConBitcoin;
}

float PrecioUnitarioAerolineas(float x,float y)
{
	float precioUnitario;

	precioUnitario=y/x;

	return precioUnitario;
}


float CostoDebitoLatam(float z)
{
	float descuento;
	float precioDescuento;

	descuento= z*0.10;
	precioDescuento=z-descuento;

	return precioDescuento;
}

float CostoCreditoLatam(float z)
{
	float aumento;
	float precioAumento;

	aumento= z*0.25;
	precioAumento=z + aumento;

	return precioAumento;
}


float CostoBitCoinLatam(float z)
{
	float precioConBitcoin;

	precioConBitcoin= z/BITCOIN;

	return precioConBitcoin;
}

float PrecioUnitarioLatam(float x,float z)
{
	float precioUnitario;

	precioUnitario=z/x;

	return precioUnitario;
}
