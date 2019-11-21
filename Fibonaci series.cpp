#include<stdio.h>
#include<conio.h>
main()
{
	int n1=0,n2=1,n3,a,r;
	printf("Enter range: ");
	scanf("%d",&r);
	printf("%d %d ",n1,n2);
	for(a=1;a<=r;a++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	getch();
}
