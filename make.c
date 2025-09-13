

#include<stdio.h>
int main(){
	int n,i;
	unsigned long long factorial=1;
	printf("Enter the positive number:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
		factorial*=i;
	printf("Factorial is %d=%llu\n",n,
	factorial);
	return 0;
}
