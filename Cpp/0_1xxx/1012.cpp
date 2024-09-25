#include<iostream>
using namespace std;
int testcase, row, col, num, x, y;
int board[51][51];
int visited[51][51];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };
void DFS(int y, int x)
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || ny < 0 || nx >= row || ny >= col) continue;
		if (visited[ny][nx] == 0 && board[ny][nx] == 1)
		{
			DFS(ny, nx);
		}
	}
	return;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> testcase;
	while (testcase--)
	{
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);
		int cnt = 0;
		cin >> row >> col >> num;
		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;
			board[y][x] = 1;
		}

		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				if (board[i][j] == 1 && !visited[i][j])
				{
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}