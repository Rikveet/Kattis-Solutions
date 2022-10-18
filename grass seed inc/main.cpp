#include <iostream>
using namespace std;
int main() {
    double cost;
    int n;
    double amount,l,w;
    cin >> cost;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> w >> l;
        amount += w*l*cost;
    }
    cout <<fixed<< amount;
    return 0;
}
