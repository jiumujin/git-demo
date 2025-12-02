#include<stdio.h>

int main(){
    int a=10;
    //指针：数据类型（与指向函数类型一致）*变量名
    //    赋值已分配空间的内存地址
    int *p=&a;
    printf("Value of a: %d\n", a);
    //利用指针存储/修改数据
    *p=20;
    printf("New value of *p: %d\n", *p);
    printf("New value of a: %d\n", a);
    //输出指针变量存储的地址
    printf("Address of a: %p\n", (void*)&a);

    //注意：指针后跟随赋值只能是变量，找到的数值是原变量地址
    //     若赋值为数值，则会认定为地址，而非数值本身。
    //     int *q=100; //错误示范

    return 0;
}