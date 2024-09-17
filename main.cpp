#include "iostream"
#include "math.h"
#include "time.h"

using namespace std;

void arrx(int arr[]) {
    cout << sizeof(arr) / sizeof(int) << endl;
    cout << arr << endl;
};

int fun(int a) {
    int c = a * a;
    return c;
}


int main() {
    double d = pow(2, 3);
    double sqrt1 = sqrt(9);
    double ceil1 = ceil(9.8);
    double floor1 = floor(12.7);
    int abs1 = abs(-13);
    time_t time1 = time(NULL);

//    int arr[3][3]{
//            {1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}
//    };
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout << arr[i][j];
//        }
//    }

//    int arr1[3]={1,2,3};
//    int arr2[4]={1,2,3,4};
//    int arr3[5]={1,2,3,4,5};
//    int* arr[3]={arr1,arr2,arr3};
//
//    int len1=sizeof (arr1)/sizeof (int);
//    int len2=sizeof (arr2)/sizeof (int);
//    int len3=sizeof (arr3)/sizeof (int);
//
//    int lenArr[3]={len1,len2,len3};
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < lenArr[i]; ++j) {
//            cout<<arr[i][j];
//        }
//        cout<<endl;
//    }

//    int arr[3][3]{
//            {1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}
//    };
//
//    int (*p)[3] = arr;
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout << *(*p + j);
//        }
//        cout << endl;
//        p++;
//    }

    int arr1[3] = {1, 2, 3};
    int arr2[4] = {2, 3, 4};
    int arr3[5] = {3, 4, 5};
    int *arr[3] = {arr1, arr2, arr3};
    int **p = arr;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << *(*p + j);
        }
        cout << endl;
        p++;
    }

//    int arr[]={1,2,3};
//    cout<<arr[1200]<<endl;
//    cout<<&arr<<endl;
//    cout<<&arr[0]<<endl;
//    cout<<sizeof (arr)/sizeof (int)<<endl;
//    arrx(arr);

//    int *p=&arr;
//    cout<<*(&arr)<<endl;
//    cout<<*p<<endl;
//    cout<<p<<endl;
//    for (int i = 0; i < 3; ++i) {
//        cout<<*p++<<endl;
//        p++;
//    }

//    cout<<arr+1<<endl;
//    cout<<&arr+1;

//    int a = 10;
//    int* const pa = &a;//指针常量 地址不变,值可变
//    int const* pb = &a;//常量指针 值不变,地址可变
//    cout<<*pa<<endl;
//    cout<<pa<<endl;
//    cout<<*pb<<endl;
//    cout<<pb<<endl;
//    cout<<"--------------------"<<endl;
//    int b = 20;
//    pa=&b;
//    *pa=b;
//    pb=&b;
//    *pb=b;
//    cout<<pa<<endl;
//    cout<<*pa<<endl;
//    cout<<pb<<endl;
//    cout<<*pb<<endl;

//    int arr[] = {1, 2, 3};
//    int* pa=arr;
//    for (int i = 0; i <3; ++i) {
//        cout<<*pa++<<endl;
//    }

//    int (*parr)[] = &arr;//数组指针
//    for (int i = 0; i < 3; ++i) {
//        cout << (*parr)[i] << endl;
//    }

//    int a = 1;
//    int b = 2;
//    int c = 3;
//    int *arr[] = {&a, &b, &c};//指针数组
//    for (int i = 0; i < 3; ++i) {
//        cout << *arr[i] << endl;
//    }


//    int(*pa)(int) =NULL;
//    pa=fun;

//    int arr[]={1,2,3};
//    int (*p)[]=&arr;
//    for (int i = 0; i < 3; ++i) {
//        cout<<(*p)[i]<<endl;
//    }
//    int (*parr)[]=&arr;

//    int a = 10;
//    int c = 20;
//    int &b = a;
//    b = c;
//    cout << a << endl;
//    cout << b << endl;
}