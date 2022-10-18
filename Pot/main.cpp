#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum =0;
    int input =0;
    int ex = 1;
    if(n>10|| n<1){
        return 0;
    }
    for( int i=0; i<n;i++) {
        cin >> input;
        ex = input % 10;
        input /= 10;
        if (input < 0 || input > 9999) {
            return 0;
        }
        sum += pow(input, ex);
        if(sum >1000000000){
            return 0;
        }
    }
    cout << sum;
    return 0;
}
