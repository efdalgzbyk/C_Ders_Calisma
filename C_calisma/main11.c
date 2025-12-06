#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int number,i,j,sum;
	
	printf("Lutfen bir satir giriniz.");
	scanf("%d",&number);

	for(i=1;i<number+1;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}		
		if(sum == i){
			printf("mukemmel sayi = %d\n",i);
		}

		
}

	
	
	
}
