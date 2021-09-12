#include <stdio.h>

int fact(int n){
	int fact = 1;
	for(int i=1; i<n+1; ++i){
		fact = fact*i;
	}
	return fact;
}


int main(){
	int n, f;
	printf("Entrez un nombre: ");
	scanf("%d: ", &n);
	f = fact(n);
	printf("!%d = %d \n", n, f);
}
