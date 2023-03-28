/*
Laboratório 06 - Recursividade
Solução elaborada por: Anderson André Pereira Eleutério
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// iterativo = com laço
//recursivo = chamando função

//Questão 1:
int somatoriorecursivo(int a, int b){
	if(b>0){
		return a + somatoriorecursivo(a, b - 1);
	}
	else{
		return 0;
	}
}

//Questão 2:
int fatorial(int fat){
	
	int aux;
	int ddd;
	aux = 1;
	ddd = 1;
	
	for(int i = 0; i < fat; i++){
		ddd = aux * ddd;
		aux = aux + 1;
	}
	
	return (ddd);
}

//Questão 3:
int fatorialrecursivo(int a){
	if(a<=1){
		return 1;
	}
	else{
		return (a*fatorialrecursivo(a-1));
	}
}

//Questão 4:
int soman(int a){
	if(a == 1){
		return 1;
	}
	else{
		return (a + soman(a - 1));
	}
}

int main(){
	
	//Questão 1:
	printf("7 * 6 = %d", somatoriorecursivo(7, 6));
	printf("\n8 * 12 = %d", somatoriorecursivo(8, 12));
	printf("\n16 * 16 = %d", somatoriorecursivo(16, 16));
	printf("\n3 * 7 = %d", somatoriorecursivo(3, 7));
	
	//Questão 2:
	printf("\n5! = %d", fatorial(5));
	
	//Questão 3:
	printf("\n5! = %d", fatorialrecursivo(5));
	
	//Questão 4:
	printf("\nSoma de 1 até 10 = %d", soman(10));
	
}

