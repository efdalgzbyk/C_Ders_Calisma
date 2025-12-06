#include<stdlib.h>
#include<stdio.h>


void main(){
	
	int number,i,j,k,sum=0,kalan,temp,number1; // burada sum deðerine 0 vermediðimizde sum da fazladan toplama iþlemi yaptýðý görülmektedir ide den kaynaklý olabilir ama yinede sum ý 0 yapmak garanti bir önlemdir. 
	
	printf("Lutfen bir sayi giriniz.");
	scanf("%d",&number);
	temp=number;
	number1=number;
	
	for(i=1;10<=number;i++){
		number/=10;
	}
	
	printf("Basamak sayisi = %d\n",i);
	
	for(j=1;j<=i;j++){
		int bas=1;
		kalan = temp%10;
		for(k=1;k<=kalan;k++){
			bas *=k;
			printf("bas = %d\n",bas);
		}
		sum +=bas;
		temp/=10;
	}
	
	printf("Sum= %d\n",sum);
	
	if(sum == number1){
		printf("Bu sayi strong sayidir = %d ",number1);
	}else{
		printf("Bu sayi strong sayi degildir.");
	}
}
