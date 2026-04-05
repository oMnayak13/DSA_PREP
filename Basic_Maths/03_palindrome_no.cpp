
#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int t=n;
    int p=0;
    while(n!=0){
       int d=n%10;
       p=p*10+d;
       n=n/10;
    }
    if(t==p){
        cout<<"palind"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    return 0;
}