#include <stdio.h>

int main()
{
	int a, b, c, d, ctr;
	printf("Enter first range: ");
	scanf("%d", &a);
	printf("Enter second range: ");
	scanf("%d", &b);
	
	printf("\nPrime numbers between %d and %d are: ", a, b);
	
	for (c = a; c <= b; c++){
	
     if (c == 1 || c == 0)
     continue;
     
     ctr = 1;
     for (d = 2; d <= c / 2; ++d){
     	if (c % d == 0){
     		ctr = 0;
     		
		 }
	 }
	 if (ctr == 1)
	 printf("\n%d", c);
     
	 }
	 return 0;
}
