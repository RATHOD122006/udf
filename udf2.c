#include<stdio.h>
void num(int s){
	if(s%3==0&&s%5==0){
		printf("The given number is divisible by both 3 and 5");
	}else{
		printf("Not divisible");
	}
}
void main(){
	
	int a;
	scanf("%d",&a);
	num(a);
}