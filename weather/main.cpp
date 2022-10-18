#include <iostream>
using namespace std;
int main() {
    int n;
    int days=0;
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
        if(array[i]<0){
            days++;
        }
    }
    cout<<days;
    return 0;
}
