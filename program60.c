/* A
  A B 
  A B C
  A B C D */
  #include<stdio.h>
  void pattern(unsigned int iRow,unsigned int iCol)
  {
  	int i=0,j=0;
  	char ch='\0';
  	if(iRow!=iCol)
  	{
  		return ;
  		
	  }
	  for(i=1;i<=iRow;i++)
	  {
	  	for(j=1,ch='A';j<=iCol;j++,ch++)
	  	{
	  		if(i>=j)
	  		{
	  			printf("%c\t",ch);
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
