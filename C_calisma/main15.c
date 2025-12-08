#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int i,j=0;
	
	for(i=100;i<200;i++){
		if(i%9==0){
			printf("%d sayisi 9 a tam bolunuyor.\n",i);
			j+=i;
		}else{
			printf("%d sayisi 9 a tam bolunmuyor.\n",i);
		}
	}
	printf("100-200 arasi 9 bolunenlerin toplami = %d",j);
	
}
