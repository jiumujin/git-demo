#include<stdio.h>

/*
    函数的作用3：
	    函数的结果与计算状态分开
	练习：
	    定义一个函数，将两数相除，获取余数
	
*/
 
int getReminder(int a,int b,int *res);
 
int main(){
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	
	int res=0;
	
	int flag=getReminder(a,b,&res);
	
	if(!flag){
		printf("获取到的余数为：%d",res);
	}else{
		printf("错误！余数不为0");
	} 
	
	return 0;
}

int getReminder(int a,int b,int *res){
	//除数不为0
	if(b==0){
		return 1;
	} 
	*res=a%b;
	return 0;
}