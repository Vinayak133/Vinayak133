//accept a number from user & return its reverse order
#include<stdio.h>
int Reverse(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iCnt=(iCnt*10)+iDigit;
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue=0,iRet=0;
	printf("enter a number\n");
	scanf("%d",&iValue);
	iRet=Reverse(iValue);
	printf("digits in reverse are %d ",iRet);
	return 0;
	
}
