#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int i,number;
	double sum=0.0;
	printf("Lutfen bir n sayisi giriniz.");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		printf("1/%d + ",i);
		sum += 1/i;
	}
	printf(" = %0.2f ",sum);
	
}

