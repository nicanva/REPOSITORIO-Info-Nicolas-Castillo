#include <stdio.h>
#define PI 3.14159265
float arearectangulo(float longitud, float altura);
float perimetrorectangulo(float longitud, float altura);
float areacirculo(float radio);
float perimetrocirculo(float radio);
void imprimirresultados(float area, float perimetro, int tipofigura);
int main(int argc, char *argv[]) {
int opcion;
float longitud, altura, radio, area, perimetro;
do {
printf("Ingrese un tipo de figura: 1) Rectangulo. 2) Circulo : ");
scanf("%d", &opcion);
if(opcion != 1 && opcion != 2){
	printf("Opcion Invalida, vuelve a intentar\n");
   }
} while(opcion != 1 && opcion != 2);

if (opcion==1){
	printf("opcion de Rectangulo seleccionada.\n\n");
	printf("Ingrese la longitud del rectangulo:  ");
	scanf("%f", &longitud);
	printf("Ingrese la altura del rectangulo: ");
	scanf("%f", &altura);
	area = arearectangulo(longitud, altura);
	perimetro = perimetrorectangulo(longitud, altura);
} else {
	printf("Opcion del circulo seleccionada.\n\n");
	printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
	area = areacirculo(radio);
	perimetro = perimetrocirculo(radio);
}

imprimirresultados(area, perimetro, opcion);

return 0;
}


float arearectangulo(float longitud, float altura) {
	return longitud * altura;
}

float perimetrorectangulo(float longitud, float altura) {
	return 2 * (longitud + altura);
}

float areacirculo(float radio) {
	return PI * radio * radio;
}

float perimetrocirculo(float radio) {
	return 2 * PI * radio;
}

void imprimirresultados(float area, float perimetro, int tipoFigura) {
	if (tipoFigura == 1) {
		printf("El área del rectángulo es: %.2f\n", area);
		printf("El perímetro del rectángulo es: %.2f\n", perimetro);
	} else {
		printf("El área del círculo es: %.2f\n", area);
		printf("El perímetro del círculo es: %.2f\n", perimetro);
	}
}
	



