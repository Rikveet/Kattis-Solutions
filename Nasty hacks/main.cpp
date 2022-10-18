#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    int r[n],e[n],c[n];
    for(int i=0; i<n; i++){
        cin >> r[i] >> e[i] >> c[i];
    }
    for(int i=0;i<n;i++){
        if((e[i]-c[i])>r[i]){
            cout << "advertise" << endl;
        }else if((e[i]-c[i])<r[i]){
            cout << "do not advertise" << endl;
        }else{
            cout << "does not matter" << endl;
        }
    }
    return 0;
}
