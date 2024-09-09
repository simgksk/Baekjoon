#include<iostream>
#include<queue>

using namespace std;

string board[101];
int row, col;
int visited[101][101];

queue<pair<int, int>>que; // pair: �� �ڷḦ �� ������ ������.
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
	que.push({ x, y });
	visited[x][y] = 1;
	while (!que.empty())
	{
		int x = que.front().first; //�� ��ǥ
		int y = que.front().second; //�� ��ǥ
		que.pop();
		for (int i = 0; i < 4; i++) //�����¿�
		{
			int nx = x + dx[i];
			int ny = y + dy[i]; // row �������, col ��������

			if (nx < 0 || nx >= row || ny < 0 || ny >= col) continue;
			if (board[nx][ny] == '1' && visited[nx][ny] == 0)
			{
				que.push({ nx, ny });
				visited[nx][ny] = visited[x][y] + 1;
			}
		}
	}
}
int main()
{
	cin >> row >> col; // ������� // �������� 
	for (int i = 0; i < row; i++)
	{
		cin >> board[i];
	}
	BFS(0, 0);
	cout << visited[row - 1][col - 1];
}