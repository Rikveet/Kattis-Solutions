#include <iostream>
#include <math.h>
using namespace std;
string prev(string x){
    if(x=="+"){
        return "-";
    }
    return  "+";
}
int main() {
    double c0,c1,c2,c3;
    double y,yprev;
    string out,prev_;
    cin >> c0 >> c1 >> c2 >> c3;
    while (!(c0==0 && c1==0 && c2==0 && c3==0)){
        if (c3 <=0){
            out = "+";
            prev_="+";
        }
        else{
            out = "-";
            prev_="-";
        }
        yprev=(c0+(c1*(-100))+(c2*pow(-100,2))+(c3*pow(-100,3)));
        for ( int i = -99; i <= 100; i++){
            y = (c0+(c1*(i))+(c2*pow(i,2))+(c3*pow(i,3)));
            if (yprev<0 && y>=0||yprev>=0 && y<0){
                prev_=prev(prev_);
                out+=prev_;
            }
            yprev = y;
        }
        cout << out << endl;
        cin >> c0 >> c1 >> c2 >> c3;
    }
    return 0;
}
