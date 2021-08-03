//accept number from user & return its factorial
#include<stdio.h>
int fact(int iNo)
{
	int iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iMult=iMult*iNo;
		iNo--;
			}
			return iMult;
}
int main()
{
	int iValue1=0;
	int iRet=0;
	printf("enter a number\n");
	scanf("%d\n",&iValue1);
	iRet=fact(iValue1);
	printf("factorial is %d\n",iRet);
	return 0;
}
