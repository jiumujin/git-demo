#include<stdio.h>

int main(){
    int a=10;
    //指针：数据类型（与指向函数类型一致）*变量名
    int *p=&a;
    printf("Value of a: %d\n", a);
    //利用指针存储/修改数据
    *p=20;
    printf("New value of a: %d\n", a);
    //输出指针变量存储的地址
    printf("Address of a: %p\n", (void*)&a);

    return 0;
}