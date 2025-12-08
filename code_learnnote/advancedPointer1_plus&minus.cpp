#include<stdio.h>

/*
    指针的类型：
	    数据类型*变量名=内存地址
		（如：int*p=0x001）
		0x001是数据的内存开始第一个头地址
		int可说明从第一个地址往后延申多少个字节代表这整个数据
		
		所以，指针中数据类型的作用：
		      获取字节数据的个数
*/ 

/*
    指针的运算：
  - 指针的"步长” = sizeof(指针所指向的数据类型)
  - 指针加法：p + n 表示从 p 的地址向后移动 n 个元素，
    指针减法：p + n 表示从 p 的地址向前移动 n 个元素，
              实际字节偏移 = n × sizeof(*p)
  - 常见类型的 sizeof（以典型 64 位系统为例）：
        char        : 1 字节
        short       : 2 字节
        int         : 4 字节
        long        : 8 字节（Linux/macOS 64位），4 字节（Windows 64位）
        long long   : 8 字节
    实际大小应使用 sizeof() 确认，不可硬性假设。
*/ 
		 
//指针加法 
int main(){
	int a=0;
	int *p=&a;
	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",p+2);
	printf("%p\n",p-1);
	printf("%p\n",p-2);
	
	
	return 0;
}