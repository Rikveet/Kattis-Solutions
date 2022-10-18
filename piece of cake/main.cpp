#include <iostream>
using namespace std;
int main() {
    int v;
    int h;
    int n;
    cin >> n >> h >> v;
    if(2<=n && n<=10000 && 0<h && h<n && 0<v && v<n){
        if((n-v)>v){
            v = n-v;
        }
        if((n-h)>h){
            h= n-h;
        }
        cout << 4*v*h;
    }
    return 0;
}
