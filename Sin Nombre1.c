#include<stdio.h>

int main(){
	
	int numeros[] = {69, 49, 59, 50, 96, 10, 36, 51};
	int i , j, aux, min, comp;
	
	
	for(i=0;i<8;i++){        //j<n  donde n sería el número de elementos
		min = i;
		for(j=i+1 ; j<8 ; j++){   //j<n  donde n sería el número de elementos
		    comp ++;
			if(numeros[j] < numeros[min]){
				min = j;
				
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	

	for(i=0;i<=7;i++){   //i<n-1  donde n sería el número de elementos
		
		printf("%d ", numeros[i]);
		
	
	}
	
    printf("\n\n");
    printf("Comparaciones %i\n\n", comp);
    
    return 0;
    }
    
