#include <stdio.h>
//输入一个英文字母，分别输出其前面一个和后面一个英文字母。（要求使用getchar和putchar函数实现输入输出）
int main(){
	char ch = getchar();
	printf("前面字母为");
	putchar(ch-1);
	printf("\n后面字母为");
	putchar(ch+1);
	
	
	return 0;
}


 
