//https://github.com/nicanva/REPOSITORIO-Info-Nicolas-Castillo
#include <stdio.h>
#define TAM 5
int main(int argc, char *argv[]) {
	int codigos[TAM];
	float precios[TAM];
	
	float mayorprecio, menorprecio;
	int codigomayor, codigomenor;
	
	printf("Ingrese 5 productos, se solicitará el código y precio: \n");
	
	for(int i = 0; i < TAM; i++) {
		do {
			printf("Ingrese el código de barras (1-999999999): \n");
			scanf("%d", &codigos[i]);
			if 
				(codigos[i] < 1 || codigos[i] > 999999999){
				printf("Error. El código de barras debe estar entre 1 y 999999999\n\n");
				
			}
		} while(codigos[i] < 1 || codigos[i] > 999999999);
		
		do {
			printf("Ingrese el precio:  \n");
			scanf("%f", &precios[i]);
			if (precios[i] < 0) {
				printf("Error. los precios no pueden ser negativos\n\n");
			}
		} while(precios[i] < 0);
	}
	printf("codigo   precio\n");
	for(int i = 0; i < TAM; i++) {
		printf("%9d %10.2f\n", codigos[i], precios[i]);
	}

		mayorprecio = precios[0];
		menorprecio = precios[0];
		codigomayor = codigos[0];
		codigomenor = codigos[0];
		for(int i = 0; i < TAM; i++){
			if (precios[i] > mayorprecio) {
				mayorprecio = precios[i];
				codigomayor = codigos[i];
			}
			if (precios[i] < menorprecio) {
				menorprecio = precios[i];
				codigomenor = codigos[i];
			}
		}
		printf("Más caro: [%d] %.2f\n", codigomayor, mayorprecio);
		printf("Mas barato; [%d] %.2f\n", codigomenor, menorprecio);
	
	return 0;
}


