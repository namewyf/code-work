#include <stdio.h>
int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	//����һ����λ�������������������
	scanf("%d",&a);
	b=a%10;
	c=a/10%10;
	d=a/100%10;
	e=a/1000;
	printf("%d��������Ϊ%d",a,b*1000+c*100+d*10+e);
	
	
	
	return 0;
} 
