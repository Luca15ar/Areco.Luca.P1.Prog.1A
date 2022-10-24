/*
 ============================================================================
 Name        : 22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int aplicarDescuento(int precio,int porcentaje, float* descuentoPrecio);
int contarCaracteres(char caracteres[], char caracterContar);

int main(void)
{
	setbuf(stdout, NULL);

	float precioDescuento;

	aplicarDescuento(1000, 5, &precioDescuento);

	printf("El precio con descuento es %.2f\n\n", precioDescuento);

	contarCaracteres("a",'a');

	return EXIT_SUCCESS;
}

int aplicarDescuento(int precio, int porcentaje, float* descuentoPrecio)
{
	int todoBien = 0;
	int descuento;

	if(descuentoPrecio != NULL)
	{
		descuento = (precio * porcentaje) / 100;

		*descuentoPrecio = precio - descuento;

		todoBien = 1;
	}

	return todoBien;
}

int contarCaracteres(char caracteres[], char caracterContar)
{
	int todoBien = 0;
	int contadorCaracter = 0;

	if(caracteres != NULL)
	{
		for(int i = 0; i < 10; i++)
		{
			if(caracteres[i] == caracterContar)
			{
				contadorCaracter++;
			}
			else
			{
				break;
			}
		}
				printf("Hay %d %c.\n\n", contadorCaracter, caracterContar);
	}

	return todoBien;
}
