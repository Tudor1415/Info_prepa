#include <stdio.h>

int puis(int x, int n){
	int res = 1;
	for(int i=0; i<=n; ++i){
 		res = res*x;
	}
	return res;
}

int main(){
	int x,n,p;
	printf("Enter x and n in the following format: x;n ");
	scanf("%d;%d", &x, &n);
	p = puis(x,n);
	printf("%d^%d = %d \n", x,n,p); 
}

