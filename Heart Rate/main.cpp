#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    double b[n],p[n];
    for (int i=0;i<n;i++){
        cin >> b[i] >> p[i];
    }
    for(int i=0;i<n;i++){
        cout<< fixed << ((60-(60/b[i]))*b[i])/p[i]<<" "<<(60*b[i])/p[i]<<" "<<((60+(60/b[i]))*b[i])/p[i]<<endl;
    }
    return 0;
}
