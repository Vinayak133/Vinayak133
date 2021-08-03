//accept a number from user & display that numbers factor
#include<stdio.h>
int factors(int iNo)
{
    int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
	}
	
}
int main()
{
	int iValue1=0;

	printf("enter a number\n");
	scanf("%d\n",&iValue1);
	factors(iValue1);
	return 0;
}
