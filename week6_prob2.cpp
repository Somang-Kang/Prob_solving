#include <iostream>
#include <vector>
#include <queue>

#define MAX_ROW_SIZE 8
#define MAX_COL_SIZE 8
#define MAX_EDEGE_SIZE 100
using namespace std;

int arr[1001][1001];
int check[1001][1001];
queue<pair<int,int>> q;

int dx[] = {-1,1,0,0,-1,1,-1,1};
int dy[] = {0,0,-1,1,-1,1,1,-1};


bool is_range(int ny, int nx,int row,int col){
    return ( 0<= ny && ny < row && 0<= nx && nx < col);
}

void is_dangerous(int so_ny,int so_nx,int gum_ny,int gum_nx,int row,int col){

    //소총사->검사방향은 제외시켜주고 위험범위 설정
    for(int i = 0;i<8;i++){
        //범위넘어가는거 처리해주기
        int curx = so_nx;
        int cury = so_ny;
        while(is_range(cury,curx,row,col)) {
            if(curx == gum_nx && cury == gum_ny) break;
                curx = curx + dx[i];
                cury = cury + dy[i];
                arr[curx][cury] = -1;
        }
    }

    //검사방향으로 위험범위 설정
    for(int i = 0;i<8;i++){
        //범위넘어가는거 처리해주기
        int curx = gum_nx;
        int cury = gum_ny;
        if(is_range(cury,curx,row,col) == false) continue;
        curx = curx + dx[i];
        cury = cury + dy[i];
        arr[curx][cury] = -1;

    }
}


void bfs( int row, int col,pair<int,int> start){
    q.push(start);
    check[start.first][start.second] = 1;
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int i = 0; i < 8; i++){
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];
            if(!is_range(ny,nx,row,col)) continue;
            if(check[ny][nx]) continue;
            q.push(make_pair(ny,nx));
            check[ny][nx] = check[cur.first][cur.second] + 1;
        }
    }
}

int main(){

    int tc;
    cin>> tc;
    while(tc--){
        int row,col;
        cin>>row>>col;
        int startx,starty,destx,desty;
        cin>>starty>>startx>>desty>>destx;
        pair<int,int> start = {startx,starty};
        pair<int,int> dest = {destx,desty};
        int so_ny, so_nx,gum_ny,gum_nx;
        cin>>so_ny>>so_nx>>gum_ny>>gum_nx;
        is_dangerous(so_ny,so_nx,gum_ny,gum_nx,row,col);
        bfs(row,col,start);
        cout <<"start에서 dest까지의 거리는 : " << check[dest.first][dest.second] - 1;
    }


}