//accept a number from user & calculate its factorial
#include<stdio.h>
int Fact(int iNo)
{
	int iCnt=0,iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iMult=iMult*iCnt;
		printf("%d\n",iMult);
	}
	return iMult;
}
int main()
{
	int iValue1=0,iRet=0;
	printf("enter a number\n");
	scanf("%d",&iValue1);
	iRet=Fact(iValue1);
	printf("factorial is %d",iRet);
	return 0;
}
