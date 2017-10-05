#include <stdio.h>

int main(){
	unsigned long long n;
	long long sum = 0;
	scanf ("%llu", &n);
	
	if (n % 2 == 0){
		sum += ((n / 2) * ((n / 2) + 1));
		sum -= ((n/2) * (n/2));
	}
	else{
		sum += (((n - 1) / 2) * (((n - 1) / 2) + 1));
		sum -= (((n + 1) / 2) * ((n + 1) / 2));
	}
	
	printf ("%lld\n", sum);
	
	return 0;
}
