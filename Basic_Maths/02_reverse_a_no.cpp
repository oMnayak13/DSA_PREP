#include <iostream>

using namespace std;

int main()
{
   int n;
   int rev=0;
   cout<<"enter a no"<<endl;
   cin>>n;
   while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
   }
   cout<<rev<<endl;
    return 0;
}
