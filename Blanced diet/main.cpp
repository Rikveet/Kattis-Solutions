#include <iostream>
#include <c++/4.8.3/stack>

using namespace std;

struct points{
    int l;
    int h;
};

int main() {
    int n;
    cin>>n;
    while (n > 0){
        int cans[n];
        for (int i =0;i<n;i++){
            cin>>cans[i];
        }
        stack <points> s;
        points index{0,n-1};
        s.push(index);
        bool iflag = false;
        bool jflag = false;
        int pivot,i,j;
        while (true){
            pivot = s.top().l;
            i = pivot;
            j = s.top().h;
            if ( i == j && j == pivot){
                break;
            }
            cout<< pivot << " "<< i << " "<< j<<endl;
            while ( i < j ){
                if(!iflag) {
                    i = i + 1;
                }
                if (!jflag){
                    j=j-1;
                }
                if (i<j && cans[i]>pivot && !iflag){
                    iflag = true;
                }
                if(j>i && cans[j]<pivot && !jflag){
                    jflag = true;
                }
                if(iflag &&  jflag){
                    int temp  = cans[i];
                    cans[i] = cans[j];
                    cans[j] = temp;
                    iflag = false; jflag = false;
                }
            }
            int temp  = cans[i];
            cans[i] = cans[j];
            cans[j] = temp;
            iflag = false; jflag = false;
            points indexl{s.top().l,j};
            points indexj{i,s.top().h};
            s.pop();
            s.push(indexl);
            s.push(indexj);
        }
        for (int k =0;k<n;k++){
            cout<<cans[k]<<" ";
        }
        cin >> n;
    }
    return 0;
}
