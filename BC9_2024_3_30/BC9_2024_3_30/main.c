#define _CRT_SECURE_NO_DEPRECATE    
//只有VS编译器需要这个语句，防止有些C关键词使用的时候会报警告
/*
	@author:liang
	time:2024年3月30日14点26分
	题目：BC9  printf的返回值
	题目描述：{KiKi写了一个输出“Hello world!”的程序，
			   BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？}
	题目链接：https://www.nowcoder.com/ta/beginner-programmers-v1
*/

/*输出描述
	包括两行：
	第一行为“Hello world!”
	第二行为printf(“Hello world!”)调用后的返回值。
*/

#include <stdio.h>
int main()
{
	int a = printf("Hello world!\n");
	printf("%d", a);
	return 0;
}