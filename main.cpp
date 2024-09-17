#include "iostream"

using namespace std;

int main() {
//    //利用二级指针修改一级指针地址
//    int a=10;
//    int b=20;
//    int* p=&a;
//    int** pp=&p;
//    *pp=&b;
//    cout<<&a<<endl;//0xf71d3ff674
//    cout<<&b<<endl;//0xf71d3ff670
//    cout<<p<<endl;//0xf71d3ff670
//
//    //利用二级指针修改一级指针地址
//    cout<<**pp<<endl;//20

    //定义方式
    int arr[] = {1, 2, 3};
//    int *pa = arr;
//    int *pb = &arr[0];
//    int (*pc)[] = &arr;
//
//    //遍历方式
//    cout << pa[0] << endl;//1
//    cout << *(pa+1)<< endl;//2
//    cout << *(pb+1)<< endl;//2
//    cout << (*pc)[2] << endl;//3

    int *pa = arr+3;
    cout<<*pa<<endl;
}