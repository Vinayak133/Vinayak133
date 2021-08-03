//accept two numbers from user & calculate power
#include<stdio.h>
int power(int no1,int no2)
{
	int iCnt=0;
	int iMult=1;
	if(no1<0)
	{
		no1=-no1;
	}
	if(no2<0)
	{
		no2=-no2;
	}
	for(iCnt=1;iCnt<=no2;iCnt++)
	{
		iMult=iMult*no1;
	}
	return iMult;
}
int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	printf("enter two numbers\n");
	scanf("%d%d",&iValue1,&iValue2);
    iRet=power(iValue1,iValue2);
    printf("power is %d",iRet);
  return 0;
}
