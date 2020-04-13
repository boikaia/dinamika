#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int key, i, j, n, m, kol,a,b,k;
	
	cin >> n >> m;
	
	vector <vector <long>> A(n, vector <long>(m));

	A[0][0] = 1;
	i = j = 0;
	kol = 2;
	key = 0;
	while(1)
	{
		a = i; b = j;
		for (k = 1; k < kol; k++)
		{
			if (i + 2 < n && j + 1 < m) A[i + 2][j + 1] += A[i][j];
			if (i + 1 < n && j + 2 < m) A[i + 1][j + 2] += A[i][j];
			i--;
			j++;
			if (i == (n - 1) && j == (m - 1)) { key = 1; break; }
		}
		kol++;
		i = a + 2;
		j = b + 1;
		if (key || (i >= n && j >= m)) break;

	}
	if (key) cout << A[n - 1][m - 1];
	else cout << "0";


    return 0;
}
