/* # # # # 
# * * #
# * * #
# # # # */
#include<stdio.h>
void pattern(unsigned int iRow,unsigned int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i=1)||(j=1)||(i==iRow)||(j==iCol))
			{
				printf("#\t");
			}
			else 
			{
				printf("*\t");
			}
		}

		printf("\n");
}
}
int main()
{
	unsigned int iValue1=0,iValue2=0;
	printf("enter number of rows & columns\n");
	scanf("%u%u",&iValue1,&iValue2);
	pattern(iValue1,iValue2);
	return 0;
}
