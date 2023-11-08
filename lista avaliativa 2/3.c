#include <stdio.h>
#include <string.h>

int main() {
    int matrixX[4][4];
    int matrixY[4][4];
    int result[4][4];
    char operation[5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrixX[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrixY[i][j]);
        }
    }

    scanf("%s", operation);

    if (strcmp(operation, "soma") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result[i][j] = matrixX[i][j] + matrixY[i][j];
            }
        }
    } else if (strcmp(operation, "sub") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result[i][j] = matrixX[i][j] - matrixY[i][j];
            }
        }
    } else if (strcmp(operation, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    result[i][j] += matrixX[i][k] * matrixY[k][j];
                }
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%*d", +4, result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
