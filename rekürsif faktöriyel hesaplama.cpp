#include <stdio.h>
int faktoriyel(int a){
	if(a == 1)
	return 1;
	return a * faktoriyel (a-1) ;
}

int main(){
	int a;
	printf("bir sayi giriniz:");
	scanf("%d", &a);
	
	printf("%d", faktoriyel(a));
	return 0;
}
