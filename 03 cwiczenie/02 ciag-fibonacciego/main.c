#include <stdio.h>

int main(){
	int a = 0;
	int b = 1;
	int c;

	for(int i = 0; i < 20; ++i){
		printf("%d ", a);
		c = a+b;
		a = b;
		b = c;
	}
	printf("\n");

	return 0;
}
