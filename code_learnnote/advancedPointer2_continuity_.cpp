#include<stdio.h>

/*
   指针只能加减，不能乘除
   
   指针可以加减的前提条件：
   保证内存空间是连续的
*/ 

//数组可以保证内存空间的连续性 
//数组内储存数据的可能不连续性，
//不会会影响其本身的内存连续性 。 
int main(){
	int arr[]={1,5,92,3,5,2};
	
	int *p1=&arr[0];
	printf("%p\n",p1);
	printf("%d\n",*p1);
	printf("%p\n",p1+1);
	printf("%d\n",*(p1+1));
	
	int *p2=&arr[2];
	printf("%p\n",p2);
	printf("%d\n",*p2);
	
	//问p1，p2间间隔多少步长
	printf("%d\n",p2-p1); //2-0=2,走了两步
	//发现地址相减值= n × sizeof(*p)
	printf("%p\n",p1);
	printf("%p\n",p2);
	
	
	return 0;
}
