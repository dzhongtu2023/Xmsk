#include "iostream"
using namespace std;

int ex(int& a,int& b){
    int  tmp=a;
    a=b;
    b=tmp;
}

int main(){
    int a=10;
    int b=20;
    ex(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
}