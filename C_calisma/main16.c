#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int i=0,j=0,number=0,count=1;
	printf("Lutfen bir sayi giriniz.");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		for(j=1;j<=i;j++){
			printf("%d ",count);
			count++;
		}	
		printf("\n");
	}
}
