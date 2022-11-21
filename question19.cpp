#include <stdio.h>
int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	//输入一个四位整数，输出其逆序数。
	scanf("%d",&a);
	b=a%10;
	c=a/10%10;
	d=a/100%10;
	e=a/1000;
	printf("%d的逆序数为%d",a,b*1000+c*100+d*10+e);
	
	
	
	return 0;
} 
