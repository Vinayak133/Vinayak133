/* 1 2 3
   * * *
   1 2 3 */
   #include<stdio.h>
   void pattern(unsigned int iRow,unsigned int iCol)
   {
   	int i=0,j=0;
   	for(i=1;i<=iRow;i++)
   	{
   		for(j=1;j<=iCol;j++)
   		{
   			if((i%2)==0)
   			{
   				printf("*\t");
			   }
			   else
			   {
			   	printf("%d\t",j);
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
