#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n ;
    double data[n][2];
    double result=0;
    for(int i=0;i<n;i++){
        cin >>data[i][0]>>data[i][1];
        if(data[i][0]>1||data[i][0]<=0){
            break;
        }
        if(data[i][1]>100||data[i][1]<=0){
            break;
        }
        result += data[i][0]*data[i][1];
    }
    cout << result << endl;
    return 0;
}
