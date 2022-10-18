#include <iostream>
#include <stack>
#include <vector>

using namespace std;
struct point{
    int i,j;
};

bool search( int r,  int c,vector<vector<int>> &mainmap, vector<vector<int>> &map_,int type,point p, const int r2,const int c2){
    stack <point> s;
    int i,j;
    s.push(p);
    while(!s.empty()){
        p = s.top();
        s.pop();
        i =p.i;
        j = p.j;
        map_[i][j]=1;
        if (i == r2 and j == c2){
            return true;
        }
        if (i+1<r and map_[i+1][j]!=1 and mainmap[i+1][j]==type){
            point v = {i+1,j};
            s.push(v);
        }
        if (i-1>=0 and map_[i-1][j]!=1 and mainmap[i-1][j]==type){
            point v = {i-1,j};
            s.push(v);
        }
        if(j+1<c and map_[i][j+1]!=1 and mainmap[i][j+1]==type){
            point v = {i,j+1};
            s.push(v);
        }
        if (j-1>=0 and map_[i][j-1]!=1 and mainmap[i][j-1]==type){
            point v = {i,j-1};
            s.push(v);
        }
    }
    return false;
}

int main() {
    int r,c,n,r1,c1,r2,c2;
    cin >> r >> c;
    vector<vector<int>> map_(r);
    vector<vector<int>> bmap_(r);
    vector<vector<int>> dmap_(r);
    cin.clear();
    string input;
    for(int i=0;i<r;i++){
        cin >> input;
        map_[i] = vector<int>(c);
        bmap_[i] = vector<int>(c);
        dmap_[i]=vector<int>(c);
        for (int j = 0; j < c; ++j) {
            map_[i][j] = input.at(j)-'0';
            bmap_[i][j]=0;
            dmap_[i][j]=0;
        }
    }
    cin.clear();
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>r1>>c1>>r2>>c2;
        cin.clear();
        point p = {r1-1,c1-1};
        if (map_[r1-1][c1-1]==0 && map_[r2-1][c2-1]==0 && search(r,c,map_,bmap_,0,p,r2-1,c2-1)){
            cout<<"binary"<<endl;
        }
        else if(map_[r1-1][c1-1]==1 && map_[r2-1][c2-1]==1  && search(r,c,map_,dmap_,1,p,r2-1,c2-1)){
            cout<<"decimal"<<endl;
        }else{
            cout<<"neither"<<endl;
        }
    }
    return 0;
}
