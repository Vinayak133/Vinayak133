//accept a number from user & display it in reverse order
#include<stdio.h>
int Reverse(int iNo)
{
	int iDigit=0;int iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(;iNo>0;iNo=iNo/10)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
	}
	return iRev;
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
