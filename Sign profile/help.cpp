#include <iostream>
#include  <cmath>
using namespace std;

int help() {
    int(x);
    cout<<"Please input number for x: ";
    cin >> x;

    int(l);
    cout<<"Please input number for l: ";
    cin >> l;

    int(e);
    cout<<"Please input number for e: ";
    cin >> e;

    if(x>0) {
        cout<<"(1). Y = "<<pow(x,2)+(sqrt(x))<<endl;
    }
    else if(-10<x<0){
        cout<<"(2). Y = "<<l-pow(e,2)<<endl;
    }
    else if (x<-10){
        cout<<"(3). Y ="<<x+5;
    }
    else{
        cout<<"ERROR non of the statements were met";
    }

    return 0;
}
