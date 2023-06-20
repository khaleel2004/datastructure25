#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int i,sum=0;
	int length=sizeof(a)/sizeof(a[0]);
	for(i=0;i<length;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of the elements in an array is :%d",sum);
	return 0;
}
