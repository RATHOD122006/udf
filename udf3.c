#include<stdio.h>
void num(int s){
	if(s%3==0&&s%5==0){
		printf("Divisible by both 3 and 5");
	}else{
		printf("the given number is not Divisible by both 3 and 5");
	}
}
main(){
	
	int a;
	scanf("%d",&a);
	num(a);
}