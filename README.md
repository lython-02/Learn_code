#include<stdio.h>
#include<conio.h>
int main()
{
	int x[10][10];
	int r,c,row,col,max;
	printf("Enter row=");scanf("%d",&row);
	printf("Enter col=");scanf("%d",&col);
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
	{
	printf("x[%d][%d]",r,c);
	scanf("%d",x[r][c]);
	}
   }
   printf("\noutput matrix\n");
	for(r=0;r<row;r++)
	{
	for(c=0;c<col;c++)	
	printf("%3d",x[r][c]);
	printf("\n");
}
max=x[0][0]
for(r=0;r<row;r++)
  for(c=0;c<col;c++)
  if(x[r][c]>max)
  max=x[r][c];
  printf("\nmaximum=%d",max);
return 0;
}
