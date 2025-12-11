#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int i,number;
	
	printf("Lutfen sayi giriniz.");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		printf("%d == %d \n",i,i%2);
	}
	for(i=1;i<=number;i++){
		printf("%d",i%2);
	}	
		
}
