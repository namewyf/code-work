#include <stdio.h>
int main ()
{
	int a=0;
	scanf("%d",&a);
	printf("��λ=%d\nʮλ=%d\n��λ=%d\nǧλ=%d",a%10,a%100/10,a/100%10,a/1000);
	return 0;
	
}
