#include <iostream>
#include <deque>

using namespace std;
struct pos{
    int i;
    int j;
};
int getIndex(char p){
    switch (p) {
        case 'a':return 0;
        case 'b':return 1;
        case 'c':return 2;
        case 'd':return 3;
        case 'e':return 4;
        case 'f':return 5;
        case 'g':return 6;
        case 'h':return 7;
        default:return -1;
    }
}
int main() {
    char s[] = {'a','b','c','d','e','f','g','h'};
    char p;
    int I;
    int J;
    int n;
    cin >> n;
    for(int i =0;i<n;i++){// number of test cases.
        deque<pos> possible;
        int max_=0;
        cin >> p;
        J = getIndex(p);
        cin>> I;
        for(int A = 0;A<8;A++){ // testing all positions on the board.
            for(int B=0;B<8;B++){
                deque<pos> q;
                int board[8][8]={0};
                board[A][B] = 1;
                pos start{A,B};
                q.push_back(start);
                while (!q.empty()){
                    pos current = q.front();
                    int a = current.i;
                    int b = current.j;
                    q.pop_front();
                    if (a == I-1 && b == J){
                        if(max_ < board[a][b]){
                           max_ = board[a][b];
                           possible.clear();
                           possible.push_back(pos{A,B});
                        }
                        else if(max_ == board[a][b]){
                            possible.push_back(pos{A,B});
                        }
                        q.clear();
                    }
                    else{
                        if (a-1>=0 and b-2>=0 && board[a-1][b-2]==0){//lower left close
                            board[a-1][b-2]= board[a][b]+1;
                            pos child{a-1,b-2};
                            q.push_back(child);
                        }
                        if (a-2>=0 and b-1>=0 && board[a-2][b-1]==0){ // lower left far
                            board[a-2][b-1]= board[a][b]+1;
                            pos child{a-2,b-1};
                            q.push_back(child);
                        }
                        if (a-1>=0 and b+2<8 && board[a-1][b+2]==0){// upper left close
                            board[a-1][b+2]= board[a][b]+1;
                            pos child{a-1,b+2};
                            q.push_back(child);
                        }
                        if (a-2>=0 and b+1<8 && board[a-2][b+1]==0){//upper left far
                            board[a-2][b+1]= board[a][b]+1;
                            pos child{a-2,b+1};
                            q.push_back(child);
                        }
                        if (a+1<8 and b-2>=0 && board[a+1][b-2]==0){//lower right close
                            board[a+1][b-2]= board[a][b]+1;
                            pos child{a+1,b-2};
                            q.push_back(child);
                        }
                        if (a+2<8 and b-1>=0 && board[a+2][b-1]==0){//lower right far
                            board[a+2][b-1]= board[a][b]+1;
                            pos child{a+2,b-1};
                            q.push_back(child);
                        }
                        if (a+1<8 and b+2<8 && board[a+1][b+2]==0){//upper right close
                            board[a+1][b+2]= board[a][b]+1;
                            pos child{a+1,b+2};
                            q.push_back(child);
                        }
                        if (a+2<8 and b+1<8 && board[a+2][b+1]==0){//upper right far
                            board[a+2][b+1]= board[a][b]+1;
                            pos child{a+2,b+1};
                            q.push_back(child);
                        }
                    }
                }

            }

        }
        cout<<max_-1<<" ";
        int sorted[8][8]={0};
        while(!possible.empty()){
            sorted[possible.front().i][possible.front().j] = 1;
            possible.pop_front();
        }
        for(int m =7;m>=0;m--){
            for(int l=0;l<8;l++){
                if (sorted[m][l]==1){
                    cout<<s[l]<<m+1<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}