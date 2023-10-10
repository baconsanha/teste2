#include <stdio.h>
#include <math.h>

//Funcao que calcula a distancia
float calculaDistancia (int x1, int y1, int x2, int y2){
	return sqrt( pow(x2-x1,2) + pow(y2-y1,2));
}
//main
int main(){
	//Definicao de variaveis
	int x1, y1, x2, y2;
	float distancia;
	//Leitura das coordenadas dos pontos
	printf("Informe as coordenadas para imprimir o primeiro ponto: ");
	scanf("%i %i", &x1, &y1);
	printf("Informe as coordenadas para o segundo ponto: ");
	scanf("%i %i", &x2, &y2);
	
	//Calculo da distancia entre os pontos
	distancia = calculaDistancia(x1, y2, x2, y2);
	
	//Mostra o resultado
	printf("Distancia: %f", distancia);
}