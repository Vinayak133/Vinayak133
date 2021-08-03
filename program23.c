//accept a number from user & display its even digits
#include<stdio.h>
int EvenDigits(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	while(iNo>0)
	{
		if(((iNo%10)%2)==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
	
}
int main()
{
	int iValue=0,iRet=0;
	printf("enter number\n");
	scanf("%d",& iValue);
	iRet=EvenDigits(iValue);
	printf("even digits are:%d",iRet);
	return 0;
}
