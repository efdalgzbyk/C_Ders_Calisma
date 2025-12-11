#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void main(){
	
	
	int i,number,adet,sum=0;
	printf("Lutfen girmek istediðinz sayi adetini giriniz\n");
	scanf("%d",&adet);
	printf("Lutfen 1 ve 0 dan oluþan sayýlarý sýrayla (saðdan sola olucak þekilde) giriniz .\n");

	
	for(i=0;i<adet;i++){
		int temp=0;
		scanf("%d\n",&number);
		temp = pow(2,i);
		sum+=temp;	
	}
	printf("\nToplami = %d",sum);
}
