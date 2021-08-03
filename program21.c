//accept a number from user & display sum of its digits
#include<stdio.h>
int SumDigits(int iNo)
{
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iSum=iSum+(iNo%10);
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("enter a number\n");
	scanf("%d",&iValue);
	iRet=SumDigits(iValue);
	printf("sum is :%d",iRet);
	return 0;
}
