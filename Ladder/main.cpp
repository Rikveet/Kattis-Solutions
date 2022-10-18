#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int h,v;
    cin >> h >> v;
    if(v<0||v>89||h<1||h>10000){
        return 0;
    }
    int x = ceil(h/sin((v*3.141592653589793238463/180)));
    cout << x<<endl;
    return 0;
}
