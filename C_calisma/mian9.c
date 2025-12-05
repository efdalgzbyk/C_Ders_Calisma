#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int sayi,i,sum=0;
	
	printf("Lutfen bir sayi giriniz.");
	scanf("%d",&sayi);

	
	for(i=1;i<sayi;i++){
		if(sayi%i==0){
			sum+=i;
		}
	}
	
	if(sum == sayi){
		printf("This is perfect number.");
	}else{
		printf("This is not perfect number.");
	}
	
	
	
}
