//accept a number from user & display addition of its factors
#include<stdio.h>
int factorsum(int iNo)
{
	int iCnt=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
					}
	}
	return iSum;
}
int main()
{
	int iValue=0,iRet=0;
	printf("enter numbar\n");
	scanf("%d",&iValue);
	iRet=factorsum(iValue);
	printf("addition of factors is %d",iRet);
   return 0;
}
