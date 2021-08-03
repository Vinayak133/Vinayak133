//accept a number from user & check whether its perfect or not
#include<stdio.h>
#include<stdbool.h>
bool  checkPerfect(int iNo)
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
	if(iSum==iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue=0;
	bool bRet;
	printf("enter a number\n");
	scanf("%d",&iValue);
	bRet=checkPerfect(iValue);
	if(bRet==true)
	{
		printf("%d is the perfect number",iValue);
		
	}
	else
	{
		printf("%d is not perfect number",iValue);
	}
	return 0;
}
