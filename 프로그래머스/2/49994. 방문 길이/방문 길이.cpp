#include <string>
using namespace std;

int check[11][11][4];
int solution(string dirs) {
    int answer = 0;
    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            for(int k=0;k<4;k++){
                check[i][j][k]=-1;
            }
        }
    }
    int length=dirs.length();
    int curr_row=5;
    int curr_col=5;
    for(int i=0;i<length;i++){
        int tmp_col=0;
        int tmp_row=0;
        if(dirs[i]=='L'){
            tmp_col--;
        }
        else if(dirs[i]=='R'){
            tmp_col++;
        }
        else if(dirs[i]=='U'){
            tmp_row--;
        }
        else if(dirs[i]=='D'){
            tmp_row++;
        }
        if(curr_row+tmp_row<=10 && curr_row+tmp_row>=0 && curr_col+tmp_col<=10 && curr_col+tmp_col>=0){
            int new_row=curr_row+tmp_row;
            int new_col=curr_col+tmp_col;
            if(tmp_row==1){
                if(check[new_row][new_col][2]==-1){
                    if(check[new_row-1][new_col][0]==-1){
                        check[new_row][new_col][2]=1;
                        answer++;
                    }
                }
                curr_row=new_row;
                curr_col=new_col;
            }
            else if(tmp_row==-1){
                if(check[new_row][new_col][0]==-1){
                    if(check[new_row+1][new_col][2]==-1){
                        check[new_row][new_col][0]=1;
                        answer++;
                    }
                }
                curr_row=new_row;
                curr_col=new_col;
            }
            else if(tmp_col==1){
                if(check[new_row][new_col][3]==-1){
                    if(check[new_row][new_col-1][1]==-1){
                        check[new_row][new_col][3]=1;
                        answer++;
                    }
                }
                curr_row=new_row;
                curr_col=new_col;
            }
            else if(tmp_col==-1){
                if(check[new_row][new_col][1]==-1){
                    if(check[new_row][new_col+1][3]==-1){
                        check[new_row][new_col][1]=1;
                        answer++;
                    }
                }
                curr_row=new_row;
                curr_col=new_col;
            }
        }
        
        
    }
    return answer;
}