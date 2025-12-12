#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main(){
	
	int i,j,number,uslu;
	int faktoriyel=1;
	int sum=0;
	
	
	printf("Lutfen bir sayi giriniz.");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		uslu = 0;
		uslu = pow(number,i);
		for(j=1;j<i;j++){
			faktoriyel = 1;
			faktoriyel *=j;
		}
		sum += uslu /j;
	
	}
	
	printf("toplam = %d",sum);
	
	
	
	
	
	
	
	
	
}
