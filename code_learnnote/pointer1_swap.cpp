#include<stdio.h>

int swap(int *p1,int *p2);
 
int main(){
	int a,b;
	a=10,b=20;
	
	printf("交换前：a=%d，b=%d\n",a,b);
	//传递变量a地址和变量b地址，不是a，b的值 
	swap(&a,&b);
	printf("交换后：a=%d，b=%d\n",a,b);
}

//地址交换，相当于门牌号互换
int swap(int *p1,int *p2){
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
	
} 