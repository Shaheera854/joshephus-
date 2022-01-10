#include<stdio.h>
void main()
{
	int n,k=2;
	printf("Enter a value");
	scanf("%d",&n);         
	while(k*2<n)
    {
    	k*=2;
	}
	printf("Last man left behind is:%d",(n-k)*2+1);
}