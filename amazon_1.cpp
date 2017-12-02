#include <iostream>
#include <cstdio>

using namespace std;

int** rotatePictureMethod (int **matrix, int m, int n, int flag) {
	int **ans = (int **) malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++) {
		ans[i] = (int *) malloc(sizeof(int) * m);
	}
	if (flag == 0) {
		for (int i = 0; i < m; i++) {
			for (int j = n - 1; j >= 0; j--) {
				ans[n - j - 1][i] = matrix[i][j];
			}
		}
	} else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				ans[j][m - i - 1] = matrix[i][j];
			}
		}
	}
	return ans;
}

int main()
{
	int a[4][4] = { {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}  };
    int* b[4];
    for (int i = 0; i < 4; i++) {
    	b[i] = a[i];
    }
    int** c = b;
    int** ans = rotatePictureMethod(c,4,4,0);
    for (int i = 0; i < 4; i++) {
    	for (int j = 0; j < 4; j++) {
    		printf("%d ",ans[i][j]);
    	}
    	printf("\n");
    }
	return 0;
}