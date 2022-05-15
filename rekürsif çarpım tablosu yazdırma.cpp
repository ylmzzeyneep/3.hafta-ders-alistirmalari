#include <stdio.h>
void carpim_tablosu(int a){
	int i;
	if(a<=10){
	  for(i=1; i<11; i++)
	  printf("%-3d", a*i);
	  printf("\n");
	  return carpim_tablosu(a + 1);}
    
    else return 1;
}

int main(void){
	int a=1;
	carpim_tablosu(a);
	return 0;
	
}
