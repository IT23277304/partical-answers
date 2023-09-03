#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,alpha;
	printf("enter a value for b");
	scanf("%f",b);
	printf("enter a value for c");
	scanf("%f",c);
	printf("enter the angel of alpha in degrees");
	a = sqrt(pow(b,2) + pow(c,2)- 2 * b * c * cos(alpha * PI /180.0));
	printf("the value of a is %2f",a);
	return 0;
	
	
	
	
	
	
	
}
