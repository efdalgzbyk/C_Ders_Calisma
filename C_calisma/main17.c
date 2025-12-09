#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void main(){
	
	int number,i=1,j,row,sum=1,count=1;
	
	printf("Lutfen bir sayi giriniz.");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){

		printf("%d +",count);
		for(j=1;j<=i;j++){
			row= pow(10,j);		
		}
		count+=row;		
	}
	
	
	
	
}
