#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int i,N;
	
	printf("Bir n sayýsý giriniz.");
	scanf("%d",&N);
	
	for(i=1;i<N+1;i++){
		if(i==2){
			printf("2\n");
		}		
		if(i%2==1){

			printf("%d\n",i);
		}
	}
	
	
	
}
