#include <stdio.h>
#define M 10
#define N 5
#define K ((N)+(M))


int main(){

	int A[M] = {1,3,5,6,7,7,8,9,11,12};
	int B[N] = {3,6,7,8,8};
	int C[K] = {0};
	int m = 0, n = 0, k = 0;

	while(m < M && n < N){
		if(A[m] < B[n]){
			C[k] = A[m];
			++k;
			++m;
		}else{
			C[k] = B[n];
			++k;
			++n;
		}
	}

	// skopiuj reszte elementow B
	while(n < N){
		C[k] = B[n];
		++k;
		++n;
	}

	// skopiuj reszte elementow A
	while(m < M){
		C[k] = A[m];
		++k;
		++m;
	}

	//wyswietl
	for(m = 0; m < M; ++m){ printf("%d, ", A[m]);} printf("\n");
	for(n = 0; n < N; ++n){ printf("%d, ", B[n]);} printf("\n");
	for(k = 0; k < K; ++k){ printf("%d, ", C[k]);} printf("\n");

	return 0;
}
