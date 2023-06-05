#include <stdio.h>
#include <stdlib.h>

int main(){
   
   float vet[3];	
   float matriz[3][3];
   float matriz2[3][3];
   float matriz3[3][3];
   int cont = 0;
   
   for(int i = 0; i < 3; i++){
   	printf("entre com o valor do vetor na posicao %d: \n",i);
   	scanf("%f",&vet[i]);
   }
   
   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         printf("entre com o valor da matriz na posicao %d - %d: \n",i,j);
		 scanf("%f",&matriz[i][j]);       	
	  }	
   }
   
   printf("Matriz original \n");
   
   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         printf("valor da matriz na posicao %d - %d: %f \n",i,j,matriz[i][j]);
	  }	
   }
   
   printf("Vetor original \n");
   
   for(int i = 0; i < 3; i++){
   	printf("valor do vetor na posicao %d: %f \n",i,vet[i]);
   }
   
   printf("matriz 2 \n");
   
   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         matriz2[i][j] = matriz[i][j] * vet[j];
         printf("valor da matriz2 na posicao %d - %d: %f \n",i,j,matriz2[i][j]);
         if(matriz2[i][j] > 15){
            cont++;	
		 }
	  }	
   }
   
   printf("matriz 3 \n");
   
   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         matriz3[i][j] = matriz[i][j] * matriz[i][j];
         printf("valor da matriz3 na posicao %d - %d: %f \n",i,j,matriz3[i][j]);
	  }	
   }
   
   printf("valores maiores que 15 na matriz b: %d \n",cont);
   
   
   
   return 0;
   
}
