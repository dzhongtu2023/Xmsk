#include "iostream"
using namespace std;

union lihua{
    int age;
};

int main(){

    union lihua li;
    int i = li.age = 56;
    cout<<i<<endl;
}