#include <iostream>
using namespace std;
int main() {
    
    int n1;
    cout<<"enter a first no"<<endl;
    cin>>n1;
    int n2;
    cout<<"enter secong no"<<endl;
    cin>>n2;
    int r=n1%n2;
    int a=n2;
    int b=r;
    if(b==0){
        cout<<"GCD"<<a<<endl;
    }
    else{
        cout<<"NOT a GCD"<<endl;
    }
    return 0;
}