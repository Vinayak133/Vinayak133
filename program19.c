//accept a number from user & display digits of it in reverse order
#include<stdio.h>
int DisplayDigits(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	DisplayDigits(iValue);
	return 0;
}
