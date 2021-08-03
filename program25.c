//accept a number from user & display frequency of digits
#include<stdio.h>
int frequency(int iNo,int i)
{
	int iCnt=0;

	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if((i<0)||(i>9))
	{
		printf("invalid digits \n");
		return 0;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==i)
		
		{
		iCnt++;
				}
iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	printf("enter a number\n");
	scanf("%d",&iValue1);
	printf("enter the digits that you want to search\n");
	scanf("%d",&iValue2);
	iRet=frequency(iValue1,iValue2);
	printf("frequncy of digits are %d \n",iRet);
	return 0;
	
}
