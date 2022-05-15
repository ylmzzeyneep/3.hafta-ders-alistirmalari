#include <stdio.h>
int fib(int a){
	if(a==0 || a==1)
	return a;
	return fib(a-1) + fib(a-2);
} 

int main(){
	int a, i;
	printf("bir sayi giriniz:");
	scanf("%d", &a);
	
	for(i=1; i<=a; i++){
	   printf("%d\n", fib(i));}
	   return 0;
}
