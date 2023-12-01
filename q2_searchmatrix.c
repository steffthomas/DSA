#include <stdio.h>
int matSearch(int N, int M, int matrix[][M], int x);

int main() {
    int N = 3; 
    int M = 4; 

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int x = 7; 
    if (matSearch(N, M, matrix, x)) {
        printf("%d found in the matrix.\n", x);
    } else {
        printf("%d not found in the matrix.\n", x);
    }

    return 0;
}

int matSearch(int N, int M, int matrix[][M], int x) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matrix[i][j] == x) {
                return 1; 
            }
        }
    }
    return 0; 
}
