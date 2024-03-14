#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    printf("rows & cols (first mat): ");
    scanf("%d %d", &a, &b);
    printf("rows & cols (second mat): ");
    scanf("%d %d", &c, &d);

    int **mat1, **mat2, **mul_mat;

    mat1 = (int **)malloc(a * sizeof(int *));
    for (int i = 0; i < a; i++) {
        mat1[i] = (int *)malloc(b * sizeof(int));
    }

    mat2 = (int **)malloc(c * sizeof(int *));
    for (int i = 0; i < c; i++) {
        mat2[i] = (int *)malloc(d * sizeof(int));
    }

    mul_mat = (int **)malloc(a * sizeof(int *));
    for (int i = 0; i < a; i++) {
        mul_mat[i] = (int *)malloc(d * sizeof(int));
    }

    if (b == c) {
        printf("Elements(lekh bokachoda):\n");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                scanf("%d", (*(mat1 + i) + j));
            }
        }

        printf("Elements(na likhle gere berobo):\n");
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < d; j++) {
                scanf("%d", (*(mat2 + i) + j));
            }
        }

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                *(*(mul_mat + i) + j) = 0;
                for (int k = 0; k < c; k++) {
                    *(*(mul_mat + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));
                }
            }
        }
        printf("Multiplication of the matrix: \n");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                printf("%d\t", *(*(mul_mat + i) + j));
            }
            printf("\n");
        }
    } else {
        printf("!Multiplication can't be done.");
    }

    for (int i = 0; i < a; i++) {
        free(mat1[i]);
        free(mul_mat[i]);
    }
    for (int i = 0; i < c; i++) {
        free(mat2[i]);
    }
    free(mat1);
    free(mat2);
    free(mul_mat);

    return 0;
}