#include<stdlib.h>
#include<stdio.h>
#include <math.h>
void main(){
	
	int kalan,temp,sayi,sum=0,uslu,i=1,j,sayi1;
	
	printf("Lutfen bir sayi giriniz.");
	scanf("%d",&sayi);
	temp = sayi;
	sayi1=temp;
	
	for(i=1;10<sayi;i++){
		sayi/=10;	
	}
	
	i+1;
	printf("basamak sayýsý = %d\n",i); // basamak sayýsý doðru çalýþýyormu diye kontrol ediliyor.
	
	for(j=1;j<i+1;j++){
		kalan = temp%10;
		temp/=10;
		uslu = pow(kalan,i);
		sum +=uslu;
		
	}
	sum +=pow(temp,i);
	
	if(sum == temp){
	
		printf("sum =%d armstrong sayidir.",sum);	
	}
	else{
	
		printf("sum = %d  armstong sayi deðildir.",sum );
	}
}	
