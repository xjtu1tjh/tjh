#include<stdio.h>
int fun(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fun(n));
	return 0;
}
int fun(int n)
{
	if(n==1) return 0;
	else if(n==2) return 1;
	else
{
	int temp1=0,temp2=1;
	int sum=0;
	for(int i=0;i<n-2;i++)
{
	sum=(i+2)*(temp1+temp2);
	temp1=temp2;
	temp2=sum;
}
	return sum;
}
}
