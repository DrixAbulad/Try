#include <stdio.h>
int main()
{
	int one, two, three;
	int c1=1;
	int c2=1;
	int c3=1;
	printf("Enter your lottery first digits: ");
	scanf("%d", &one);
	printf("Enter your lottery second digits: ");
	scanf("%d", &two);
	printf("Enter your lottery third digits: ");
	scanf("%d", &three);
	
	if(one==c1 && two==c2 && three==c3)
	{
		printf("You Win! 10,000");
	}
	else if(one==c2 && two==c3 && three==c1 || one==c3 && two==c1 && three==c2)
	{
		printf("Please Try Again");
	}
	else if(one==c1 || one==c2 || one==c3 || two==c1 || two==c2 || two==c3 || three==c1 || three==c2 || three==c3 )
	{
		printf("Please Try Again");
	}
	else
	{
		printf("You Lose");
	}
	return 0;
}
