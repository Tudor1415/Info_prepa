#include <stdio.h>

int is_prime_slow(int a){
	for(int i=2; i<a; ++i){
		if(a%i == 0){
			 return 0;
		}
	}
	return 1;
}

int main(){
	int a, prime;
	printf("Enter a number: ");
	scanf("%d", &a);
	prime = is_prime_slow(a);
	if(prime == 0){printf("The number is not prime! \n");}
	else{printf("The number is prime! \n");}
}
