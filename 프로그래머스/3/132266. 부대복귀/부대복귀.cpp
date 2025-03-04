#include <string>
#include <vector>
#include <queue>
#define MAX 100002
using namespace std;

vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination) {   
     vector<vector<int>> adj(n + 1);
    vector<int> dist(n + 1, -1);
    for (const auto& road : roads) {
        adj[road[0]].push_back(road[1]);
        adj[road[1]].push_back(road[0]);
    }
    queue<int> q;
    q.push(destination);
    dist[destination] = 0;
    
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        
        for (int next : adj[cur]) {
            if (dist[next] == -1) { // 방문하지 않은 경우
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }
    
    vector<int> answer;
    for (int src : sources) {
        answer.push_back(dist[src]);
    }
    
    return answer;
}