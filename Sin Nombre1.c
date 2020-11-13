#include<stdio.h>

int main(){
	
	int numeros[] = {1,0,2,20,30,50};
	int i,j,aux,min;
	
	//Algoritmo del Ordenamiento por Selección
	for(i=0;i<6;i++){
		min = i;
		for(j=i+1;j<6;j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	
printf("Orden ascendente");
	for(i=0;i<=5;i++){
		
		printf("%d"), numeros[i];
	
	}
	
    
    return 0;
    }
    
