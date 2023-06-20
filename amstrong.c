#include<stdio.h>
int main()
{
	int num,rem,originalnum,result=0;
	printf("Enter the number :");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum!=0)
	{
		rem=originalnum%10;
		result+=rem*rem*rem;
		originalnum=originalnum/10;
	}
	if (result==num)
	printf("%d is a ARMSTRONG NUMBER",num);
	else 
	printf("%d is not a ARMSTRONGNUMBER",num);
	return 0;
}
