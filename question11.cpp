#include <stdio.h>
int main ()
{
	int a=0;
	scanf("%d",&a);
	printf("个位=%d\n十位=%d\n百位=%d\n千位=%d",a%10,a%100/10,a/100%10,a/1000);
	return 0;
	
}
