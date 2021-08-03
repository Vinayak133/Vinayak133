 //accept n numbers from user & display that numbers
 #include<stdio.h>
 #include<stdlib.h>
 void display(int Arr[],int iSize)
 {
 	int i=0;
 	printf("elements from array aare\n");
 	for(i=0;i<iSize;i++)
 	{
 		printf("%d\n",Arr[i]);
		 	 }
 }
 int main()
 {
 	int *arr=NULL;
 	int iLength=0,i=0;
 	printf("enter the number of elements\n");
 	scanf("%d",&iLength);
 	arr=(int*)malloc(iLength*sizeof(int));
 	printf("enter the elements\n");
 	for(i=0;i<iLength;i++)
 	{
 		scanf("%d",&arr[i]);
 		display(arr,iLength);
 		free(arr);
 		return 0;
	 }
 }
