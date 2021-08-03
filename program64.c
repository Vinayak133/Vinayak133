/* * * * * 
   * * *
   * *
   *   */
   #include<stdio.h>
   void pattern(unsigned int iRow,unsigned int iCol)
   {
   	int i=0,j=0;
   	if(iRow!=iCol)
   	{
   		return;
	   }
	   for(i=iRow;i>=1;i--)
	   {
	   	for(j=1;j<=iCol;j++)
	   	{
	   		if(i<=j)
	   		{
	   			printf("*\t");
			   }
			   else
			   {
			   	printf("\t");
			   }
		   }
		   printf("\n");
	   }
   }
   int main()
  {
  	unsigned int iValue1,iValue2=0;
  	printf("enter number of rows & columbns\n");
  	scanf("%u%u",&iValue1,&iValue2);
  	pattern(iValue1,iValue2);
  	return 0;
  }
