#include <stdio.h>					//#:关键标识符，表示引入头文件
// stdio.h:系统标准输入、输入库对应的头文件。给printf服务
//<>:使用系统库函数。“”：用户自定义库函数。
int main01(void)				//int 函数返回值。  main：函数名。程序唯一入口。必须有且只能有一次。  void：函数调用无需传参。
{					//函数体 起始位置。
	printf("Hello Word!\n");	//将内容写到屏幕上。\n回车换行。
	system("calc");		//调用system函数，实现暂停功能。
	return 0;			//返回当前函数
}