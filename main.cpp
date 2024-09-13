#include "iostream"
using namespace std;

union lihua{
    int age;
};

int main(){

    union lihua li;
    int i = li.age = 2;
    cout<<i<<endl;
}