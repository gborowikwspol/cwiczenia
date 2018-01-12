#include <stdio.h>
#define N 10

void zamien(int *el1, int *el2){
	int pom;

	pom = *el1;
	*el1 = *el2;
	*el2 = pom;
}

int main(){
	int tab[N] = {4, 6, 3, 2, 7, 9, 8, 8, 1, 1};

	//wyswietl tablice
	for(int x = 0; x < N; ++x){ printf("%d, ", tab[x]);}
	printf("\n");

	//posortuj
	for(int i = N - 1; i >= 0; --i){
		for(int j = 1; j <= i; ++j){
			if(tab[j-1] < tab[j]){
				zamien(&tab[j-1], &tab[j]);
			}
		}
	}

	//wyswietl tablice
	for(int x = 0; x < N; ++x){ printf("%d, ", tab[x]);}
	printf("\n");

	return 0;
}
