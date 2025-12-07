#include <stdlib.h>
#include <stdio.h>

void main(){
	
    int number=0, number1=0, temp=0, kalan=0, ters=0;
	
	printf("Lutfen bir sayi giriniz.");
	scanf("%d",&number);
	number1 = number;
	temp=number1;
	
	while(temp>0){
		kalan = temp%10;
		ters = ters *10+kalan;
		temp/=10;
	}
	
	if(number1== ters){
		printf("%d bu sayi palindrom sayidir.",number1);
	}
	
}
