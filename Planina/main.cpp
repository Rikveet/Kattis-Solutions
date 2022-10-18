#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int points =2;
    while(n>0){
        points = (points-1)+points;
        n--;
    }
    points = pow(points,2);
    std::cout << points;
    return 0;
}
