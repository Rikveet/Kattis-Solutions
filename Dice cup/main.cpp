#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int prob[m+n+1];
    for(int i=1;i<(m+n+1);i++){
        prob[i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
           prob[i+j]+=1;
        }
    }
    int max = 1;
    for(int i=1;i<(n+m+1);i++){
        if(prob[i]>prob[max]){
            max = i;
        }
    }
   for(int i=1;i<(n+m+1);i++){
       if(prob[i]==prob[max]){
           cout<< i << endl;
       }
   }
    return 0;
}
