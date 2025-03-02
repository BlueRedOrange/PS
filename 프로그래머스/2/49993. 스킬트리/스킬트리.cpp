#include <string>
#include <vector>
#include <string.h>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer=0;
    int length = skill.length();
    for(int i=0;i<skill_trees.size();i++){
        int cnt=0;
        bool flag=true;
        for(int j=0;j<skill_trees[i].length();j++){
            if(skill_trees[i][j]==skill[cnt]){
                cnt++;
            }
            else{
                for(int k=cnt;k<length;k++){
                    if(skill_trees[i][j]==skill[k]){
                        flag=false;
                        break;
                    }
                }
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            answer++;
        }
    }
    return answer;
}