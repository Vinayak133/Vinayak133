//display range
#include<stdio.h>
#define INVALID -1
int RangeSum(unsigned int iStart,unsigned int iEnd)
{
	int iSum=0,iCnt=0;
	if(iStart>=iEnd)
	{
		return INVALID;
		
	}
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		iSum=iSum+iCnt;
		
	}
	return iSum;
}
int main()
{
	unsigned int iValue1=0;
	unsigned int iValue2=0;
	int iRet=0;
	printf("enter starting index\n");
	scanf("%u",&iValue1);
	printf("enter end index\n");
	scanf("%u",&iValue2);
	iRet=RangeSum(iValue1,iValue2);
	if(iRet==INVALID)
	{
		printf("invalid range\n");
		
	}
	else
	{
		printf("addition is %d\n",iRet);
			}
			return 0;
}
