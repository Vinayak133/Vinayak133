//accept a number from use r& check whether its palindrome or not
#include<stdio.h>
#include<stdbool.h>
bool Palindrome(int iNo)
{
	int iDigit=0;
	int iRev=0;
	int iTemp=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iTemp=iNo;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	if(iRev==iTemp)
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
	printf("enter number\n");
	scanf("%%d",&iValue);
	bRet=Palindrome(iValue);
	if(bRet==true)
	{
		printf("its palindrome\n");
		
	}
	else
	{
		printf("its  not palindrome ");
			}
			return 0;
}







