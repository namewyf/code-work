#include <stdio.h> 
int main()
{
	int a;
	int b;
	int c;
	int d;
	scanf("a=%d b=%d c=%d",&a,&b,&c);
	d=c;
	c=b;
	b=a;
	a=d;
	printf("a=%d b=%d c=%d",a,b,c);
}
