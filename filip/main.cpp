#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int c,d;
    c=a%10;a/=10;
    d=b%10;b/=10;
    while(a>0){
        c *=10;
        c+=a%10;
        a/=10;
    }
    while(b>0){
        d*=10;
        d+=b%10;
        b/=10;
    }
    if(c>d){
        cout<<c;
    }
    else{
        cout<<d;
    }
    return 0;
}
