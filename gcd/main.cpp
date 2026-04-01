#include <iostream>

using namespace std;
//origial codes for gcd
int gcd(int a,int b){
  if (b == 0){
        return a;
    }else{
       return gcd(b,a%b);
    }
}

int main()
{
 int x,y;
  cout<<"Enter two numbers: "<<endl;
  cin>>x>>y;

    cout << gcd(x,y)<< endl;
    return 0;
}
