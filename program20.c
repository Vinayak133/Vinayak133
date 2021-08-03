//accept a number from user & display sum of its digits
#include<stdio.h>
int sumDigits(int iNo)
{
	int iDigit=0;int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
		while(iNo>0)
		{
			iDigit=iNo%10;
			iSum=iSum+iDigit;
			iNo=iNo/10;
	
	}
	return iSum;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	iRet=sumDigits(iValue);
	printf("sum of digits are:%d",iRet);
	return 0;
	
}
