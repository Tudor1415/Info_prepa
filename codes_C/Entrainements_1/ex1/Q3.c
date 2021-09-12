#include <stdio.h>

int mirror(int a){
	int mirror=0, i=0;
	while(a>0){
		mirror = mirror*10+ a%10;
		a = (a-a%10)/10;
	}
	return mirror;
}

int main(){
	int a;
	printf("Enter a number to mirror: ");
	scanf("%d", &a);
	a = mirror(a);
	printf("%d \n", a);
}
