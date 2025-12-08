#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int i,j;
	
	for(i=100;i<200;i++){
		if(i%9==0){
			printf("%d sayisi 9 a tam bolunuyor.\n",i);
		}else{
			printf("%d sayisi 9 a tam bolunmuyor.\n",i);
		}
	}
	
}
