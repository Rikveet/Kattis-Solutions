#include <iostream>
#include <sstream>

using namespace std;
int main() {
    int n;
    while(true){
        cin>>n;
        int sum;
        for(int i=1;i<n;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        if(sum==n){
            cout<<n<<" perfect"<<endl;
        }
        else if(n-sum<=2){
            cout<<n<<" almost perfect"<<endl;
        }
        else{
            cout<<n<<" not perfect"<<endl;
        }
        if(!cin.eof()){
            cout<<"found EOF";
            break;
        }
    }
    return 0;
}
