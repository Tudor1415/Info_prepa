#include <stdio.h>

long fibo(long  n, long i, long f_n, long f_n1){
	if(i < n){
		if(i>0){
			float f_n1_tmp = f_n1;
			float f_n_tmp = f_n;
			float ratio = f_n1_tmp/f_n_tmp;
			printf("%f %ld %ld \n", ratio, f_n1, f_n);
		}
		fibo(n, i+1, f_n1, f_n1+f_n);
	}
	else
		return f_n1;
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int f;
	f = fibo(n, 0, 0,1);
	printf("The fibo number is: %d \n", f);
}
