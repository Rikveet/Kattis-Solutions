#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    int f[n];
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    int lastDigit;
    int multiplier;
    for(int i=0;i<n;i++){
        lastDigit =1;
        multiplier = f[i];
        while(multiplier>0&&lastDigit>0){
            lastDigit = lastDigit*multiplier;
            multiplier-=1;
            lastDigit%=10;
        }
        cout<< lastDigit<< endl;
    }
    return 0;
}
