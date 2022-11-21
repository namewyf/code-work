#include <stdio.h>
int main(){
	//从键盘依次输入平时、期中和期末成绩（均为整数）
	//，输出总评成绩（保留2位小数）。平时占15%，期中占25%，期末占60%。
	
	int a=0;
	int b=0;
	int c=0;
	double d=0;
	scanf("%d%d%d",&a,&b,&c);
	
	d=a*0.15+b*0.25+c*0.6;
	printf("%.2f",d);
	return 0;
} 
