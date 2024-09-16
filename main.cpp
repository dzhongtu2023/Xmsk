#include "iostream"

using namespace std;

int ex(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int fun(int a) {
    int b = 10;
    int c = a * b;
    return c;
}

int main() {
//    int a = 10;
//    int b = 20;
//    int arr[] = {1, 2, 3};
//    ex(a,b);
//    cout<<a<<endl;
//    cout<<b<<endl;
//    int* pa=&a;
//    int (*parr)[]=&arr;
//    int* pbrr[]={arr};
//    cout<<(*parr)[0]<<endl;
//    cout<<pbrr[0][0]<<endl;
//    int (*p)[] = &arr;
//    cout << p << endl;

////    指针指向的地址不可变，指针指向的值不可变
//    int a = 10;
//    int b=20;
//    int const * const pa=&a;
//    cout << *pa << endl;//*pa=10
////    *pa=b;//错误
////    pa=&b;//错误


////定义方式
//    int arr[] = {1, 2, 3};
//    int *pa = arr;
//    int (*pb)[] = &arr;
////遍历方式
//    cout << pa[0] << endl;
//    cout << (*pb)[2] << endl;


    int (*p)(int) = NULL;
    p = fun;
    cout << fun(10) << endl;
    cout << p(10) << endl;

}