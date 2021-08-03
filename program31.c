//accept a number from user & return its largest digit
#include<stdio.h>
int MinDigit(int iNo)
{
	int iMin=9;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
	}
		if(iMin==0)
		{
			break;
		}
		iNo=iNo/10;
	}
	return iMin;

}
int main()
{
	int iValue=0,iRet=0;
	printf("enter a number\n");
	scanf("%d",&iValue);
	iRet=MinDigit(iValue);
	printf("smallest digit is %d ",iRet);
	return 0;
	
}
