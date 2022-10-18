#include <iostream>
using namespace std;
int main() {
    int i =0;
    cin >> i;
    if(i<0||i>20){
        return 0;
    }
    int storage[i];
    for(int j=0; j<i;j++){
        cin >> storage[j];
        if(storage[j]<-10||storage[j]>10){
            return 0;
        }
    }
    for(int j=0; j<i;j++){
        if(storage[j]%2==0){
            cout << storage[j] << " is even"<< endl;
        }else{
            cout << storage[j] << " is odd"<< endl;
        }
    }
    return 0;
}
