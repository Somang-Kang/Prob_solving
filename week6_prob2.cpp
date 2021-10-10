#include <iostream>
#include <vector>
#include <queue>

#define MAX_ROW_SIZE 8
#define MAX_COL_SIZE 8
#define MAX_EDEGE_SIZE 100
using namespace std;

int arr[MAX_ROW_SIZE+1][MAX_COL_SIZE+1];
int check[MAX_ROW_SIZE+1][MAX_COL_SIZE+1];
queue<pair<int,int>> q;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};


bool is_range(int ny, int nx , int row ,int col){
    return ( 0<= ny && ny < row && 0<= nx && nx < col);
}

void bfs(int row, int col , pair<int,int> start){
    q.push(start);
    check[start.first][start.second] = 1;
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
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
    int row = 5;
    int col = 6;
    pair<int,int> start = {2,2};
    pair<int,int> dest = {4,5};
    bfs(row, col ,start);
    cout <<"start에서 dest까지의 거리는 : " << check[dest.first][dest.second] - 1;
}