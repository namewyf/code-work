#include <stdio.h>
//����һ��Ӣ����ĸ���ֱ������ǰ��һ���ͺ���һ��Ӣ����ĸ����Ҫ��ʹ��getchar��putchar����ʵ�����������
int main(){
	char ch = getchar();
	printf("ǰ����ĸΪ");
	putchar(ch-1);
	printf("\n������ĸΪ");
	putchar(ch+1);
	
	
	return 0;
}


 
