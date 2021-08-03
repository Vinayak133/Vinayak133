//accept a number from user & display its even digit
#include<stdio.h>
int EvenDigits(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		return 1;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
	}



int main()
{
	int iValue=0;
	int iRet=0;
	printf("enter a number\n");
	scanf("%d",&iValue);
	iRet=EvenDigits(iValue);
	printf("even digits are :%d\n",iRet);
	return 0;
}
