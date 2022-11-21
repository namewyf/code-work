#include <stdio.h>
//输入一个英文字母，分别输出其前面一个和后面一个英文字母。（要求使用scanf和printf函数实现输入输出）
int main(){
	char a,b,c;
	
	scanf("%c",&a);
	b=a+1;
	c=a-1;
	printf("前面字母为%c\n后面字母为%c",c,b);
	
	
	
	return 0;
}
 
