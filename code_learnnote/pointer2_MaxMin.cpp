#include<stdio.h>

	/*
	    指针的作用二：
	        函数返回多个值
	    练习：
		    定义一个函数，求数组最大值和最小值，并进行返回
	*/ 

void get_Max_min(int arr[],int len,int *Max,int *Min);

int main(){
	
	int len;
	printf("请输入数据个数：");
	scanf("%d",&len);
	
	int arr[len]={0};
	
	printf("请输入数据："); 
	for (int i=0;i<len;i++){
		scanf ("%d",&arr[i]);
	}
	
	int Max=arr[0];
	int Min=arr[0];
	
	get_Max_min(arr,len,&Max,&Min);
	
	printf("最大值是：%d\n",Max);
	printf("最小值是：%d\n",Min);
	
	return 0;
}


// Max本身：存储地址 
//*Max：解引用操作，是Max里所储存地址所指向的数据
 
void get_Max_min(int arr[],int len,int *Max,int *Min){
	
	*Max=arr[0];
	
	for (int i=1;i<len;i++){
		if (arr[i]>*Max){
			*Max=arr[i];
	    }	
	}
	
	*Min=arr[0];
	
	for (int i=1;i<len;i++){
		if (arr[i]<*Min){
			*Min=arr[i];
	    }		
	}
		
} 