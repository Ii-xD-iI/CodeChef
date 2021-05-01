using namespace std;
#include "bits/stdc++.h"
#define elif else if

int N,M;
const int MAXN = 1e3+7;
vector<int> dx{0,0,-1,1}, dy{-1,1,0,0};
pair<int,int> Mouse{-1,-1}, Dosa{-1,-1};
vector<vector<char>> Maze(MAXN,vector<char>(MAXN));
vector<vector<int>> visited(MAXN,vector<int>(MAXN));
vector<vector<int>> Prev(MAXN,vector<int>(MAXN,7));
vector<int> back{};
// string path = "RLUD";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	//# -> blocked
	//. -> empty
	cin>>N>>M;
	for(int i {};i<N;++i) {
		for(int j{};j<M;++j) {
			cin>>Maze[i][j];
			if(Maze[i][j] == 'D') Dosa = {i,j};
			elif(Maze[i][j] == 'M') Mouse = {i,j};
		}
	}

	// cout << Dosa.first << Dosa.second << ' ' << Mouse.first << Mouse.second;

	queue<pair<int,int>> bfs;
	
	bfs.push(Mouse);
	visited[Mouse.first][Mouse.second] = true;
	Prev[Mouse.first][Mouse.second] = 5;

	while( (not bfs.empty()) and (not visited[Dosa.first][Dosa.second])) {
		pair<int,int> Curr = bfs.front();

		for(int i{};i<4;++i) {
			
			int x = (Curr.first + dx[i]);
			int y = (Curr.second + dy[i]);
			
			if(x < 0) x = N-1;
			if(y < 0) y = M-1;

			pair<int,int> Adj = { ( x %(N)) , ( y %(M) ) };//circular iteration [0 based by default]

			if(Adj.first < 0 or Adj.first >= N or Adj.second < 0 or Adj.second >= M) continue;
			
			if(visited[Adj.first][Adj.second]) continue;
			
			elif(Maze[Adj.first][Adj.second] == '#') {continue;visited[Adj.first][Adj.second] = 6;}

			visited[Adj.first][Adj.second] = 1;
			Prev[Adj.first][Adj.second] = i;

			bfs.push(Adj);
			// "RLUD" <-- came from[1 based indexing]	
			// if(visited[Dosa.first][Dosa.second]) {ye = true;break;}
		
		}
		
		bfs.pop();
	}

	if(not visited[Dosa.first][Dosa.second]) {cout << "NO\n";return 0;}


	// for(int i {};i<N;++i) {
	// 	for(int j{};j<M;++j) {
	// 		cout << Prev[i][j] << ' ';
	// 	}
	// 	cout << '\n';
	// }
	// cout << '\n';
	
	pair<int,int> p{Dosa.first, Dosa.second};
	// cout << '(' << 	p.first << ',' << p.second << ")\n"; 
	while(Maze[p.first][p.second] != 'M') {
		
		if(Prev[p.first][p.second] == 0) {
			p.second++;
			if(p.second >= M) {p.second = 0;}
			Maze[p.first][p.second] = 'x';
		}
		
		elif(Prev[p.first][p.second] == 1) {
			p.second--;	
			if(p.second < 0) {p.second = M-1;}
			Maze[p.first][p.second] = 'x';
		}

		elif(Prev[p.first][p.second] == 2) {
			p.first++;
			if(p.first >=N) {p.first = 0;}
			Maze[p.first][p.second] = 'x';
		}

		elif(Prev[p.first][p.second] == 3) {
			p.first--;
			if(p.first < 0) {p.first =  N-1;}
			Maze[p.first][p.second] = 'x';
		}
		if(Prev[p.first][p.second] == 5) {break;}
		// else {cout << '(' << 	p.first << ',' << p.second << ")\n";break;}
		// cout << '(' << 	p.first << ',' << p.second << ")\n"; 
	}
	Maze[Mouse.first][Mouse.second] = 'M';
	cout << "YES\n";	
	for(int i {};i<N;++i) {
		for(int j{};j<M;++j) {
			cout << Maze[i][j];
		}
		cout << '\n';
	}
	
	return 0;
}
