#include <iostream>
#include <vector>

using namespace std;

int dfs(vector<vector<int> > &adj,vector<int> &visited,int x,int y){
	visited[x] = 1;
	int reach = 0;
	for(int j=0;j<adj[x].size();j++){
		int nbour = adj[x][j];
		if(nbour == y){
			return 1;
		}
		else{
			if(visited[nbour] != 1){
				reach = dfs(adj,visited,nbour,y);
				if(reach == 1){	
					return 1;
				}
			}
		}

	}

	return 0;


}

int reach(vector<vector<int> > &adj, int x, int y) {
  vector<int> visited(adj.size(),0);
  return dfs(adj,visited,x,y);
}

int main() {
  size_t n, m;
  cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  for (size_t i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    adj[x - 1].push_back(y - 1);
    adj[y - 1].push_back(x - 1);
  }
  int x, y;
  cin >> x >> y;
  cout << reach(adj, x - 1, y - 1);
}
