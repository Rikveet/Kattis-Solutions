#include <iostream>
#include <string>
using namespace std;
int dow(int y, int m, int d)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int main() {
    int d,m,y;
    cin >> d >> m;
    y = 2009;
    int i = dow(y, m,d);
    string daysOfWeek[] = {
            "error",
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };
    cout<<daysOfWeek[i]<<endl;
    return 0;
}
