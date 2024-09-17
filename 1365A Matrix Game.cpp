#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, t, i, j;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int mat[51][51];
        int count=0;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cin>>mat[i][j];
            }
        }
        int empRow = 0, empCol = 0;
		for(int i = 0; i < n; ++i){
			int cnt = 0;
			for(int j = 0; j < m; ++j) if(mat[i][j] == 0) ++cnt;
			if(cnt == m) ++empRow;
		}
		for(int i = 0; i < m; ++i){
			int cnt = 0;
			for(int j = 0; j < n; ++j) if(mat[j][i] == 0) ++cnt;
			if(cnt == n) ++empCol;
		}
		int ans = min(empCol, empRow);
		if(ans & 1) cout << "Ashish\n";
		else cout << "Vivek\n";
    }
}
