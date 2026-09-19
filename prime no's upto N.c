#include <stdio.h>

int main() {
	int n,isprime;
	printf("enter no.");
	scanf("%d",&n);
	printf("the prime upto %d are",n);

	for(int i=2; i<=n; i++) {
		isprime=1;
		for(int j=2; j*j<=i; j++) {
			if(i%j==0) {
				isprime=0;
				break;
			}
		}
		if (isprime==0)
			continue;
		printf("%d \n",i);
	}
}
