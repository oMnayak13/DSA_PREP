#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number" << endl;
    cin >> n;

    int t = n;
    int arm = 0;

    while(n != 0){
        int a = n % 10;
        arm = arm + a*a*a;
        n = n / 10;
    }

    if(arm == t){
        cout << "armstrong" << endl;
    }
    else{
        cout << "not" << endl;
    }

    return 0;
}