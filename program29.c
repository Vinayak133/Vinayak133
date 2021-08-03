//accept a number from user & return its largest digit
#include<stdio.h>
int MaxDigit(int iNo)
{
	int iMax=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
	}
	return iMax;
}
int main()
{
	int iValue=0,iRet=0;
	printf("enter a number\n");
	scanf("%d",&iValue);
	iRet=MaxDigit(iValue);
	printf("largest digitis %d ",iRet);
	return 0;
	
}
