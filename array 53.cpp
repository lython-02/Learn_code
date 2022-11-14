#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int a,b,*pa,*pb,m,*pm;
 	pa=&a;
 	pb=&b;
 	pm=&m;
 	printf("Enter A and B");
 	scanf("%d %d", &a,&b);
 	if(*pa > *pb)
 	   *pm = *pa;
 	   else
 	   *pm = *pb;
 		printf("The maximum number is %d",*pm);
 		printf("\n%p",&m);
	 return 0;
 }
