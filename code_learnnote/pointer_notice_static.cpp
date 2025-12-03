#include<stdio.h>

/*
      函数中变量的生命周期跟函数相关。
	  函数结束了，变量也会消失此时在其他函数中，就无法通过指针使用了。
	  如果不想函数中的变量被回收，可以在变量前面加static关键字 。*/
	   
int main(){
	
	//调用method函数，并打印出该函数中的变量a
	int *p=method();
	
	printf("拖点时间\n"); 
	printf("拖点时间\n"); 
	printf("拖点时间\n"); 
	printf("拖点时间\n"); 
	printf("拖点时间\n"); 
	
	printf ("%d\n",*p);
	
	return 0;
	
} 

//定义返回整型指针的函数
int *method(){
	static int a=20;
	return &a;
}
