#include "iostream"
#include "math.h"
#include "time.h"
using namespace std;

int main(){
    double d = pow(2, 3);
    double sqrt1 = sqrt(9);
    double ceil1 = ceil(9.8);
    double floor1 = floor(12.7);
    int abs1 = abs(-13);
    time_t time1 = time(NULL);

//    int arr[3][3]{
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//    };
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout<<arr[i][j];
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
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//    };
//
//    int (*p)[3]=arr;
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout<<*(*p+j);
//        }
//        cout<<endl;
//        p++;
//    }

//    int arr1[3]={1,2,3};
//    int arr2[4]={2,3,4};
//    int arr3[5]={3,4,5};
//    int* arr[3]={arr1,arr2,arr3};
//    int **p=arr;
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout<<*(*p+j);
//        }
//        cout << endl;
//        p++;
//    }

    int arr[]={1};
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0];

}