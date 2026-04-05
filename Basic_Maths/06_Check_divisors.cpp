#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number" << endl;
    cin >> n;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<"The divisors are"<<endl;
            cout<<i<<endl;
        }
    }
    return 0;
}