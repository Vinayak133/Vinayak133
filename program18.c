//accept a number from user & mcheck whether its prime or not
#include<stdio.h>
#include<stdbool.h>
int Prime(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=2;iCnt<=iNo/2;iCnt++)
	{
		if((iCnt%iNo)==0)
		{
			break;
		}
		if(iCnt==(iNo/2)+1){
			return true;
		}
		else
		{
			return false;
		}
	}
}
int main()
{
	int iValue=0;
	bool bRet;
	printf("enter number\n");
	scanf("%d",&iValue);
	bRet=Prime(iValue);
	if(bRet==true)
	{
		printf("%d is prime number",iValue);
	}
	else
	{
		printf("%d is not prime number",iValue);
	}
	return 0;
	}
