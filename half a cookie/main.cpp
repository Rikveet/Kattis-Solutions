#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double r, x, y,rValid,totalarea,area;
    cin>> r>> x >>y ;
    rValid = sqrt(pow(x,2)+pow(y,2));
    if (rValid>r){
        cout <<" miss";
        return 0;
    }
    totalarea = M_PI*r*r;
    r = r-rValid;
    area = M_PI*r*r/2;
    cout << totalarea - area << " "<< area;
    return 0;
}
