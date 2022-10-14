#include <stdio.h> 
int main()
{
	int a;
	int b;
	int c;
	scanf("a=%d b=%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d b=%d",a,b);
	
}
