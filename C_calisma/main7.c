#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int sum=0,n,i;
	
	printf("Lutfen bir sayi giriniz ");
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++){
		sum+=i;
	}
	
	printf("%d",sum);
	
	
}
