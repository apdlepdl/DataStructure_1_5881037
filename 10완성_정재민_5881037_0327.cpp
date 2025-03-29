#include <iostream>
#include <cstdlib>

using namespace std;

#define SIZE 2

void inputMatrix(int* matrix, const char* name);
void printMatrix(int* matrix, const char* name);
void addMatrices(int* matrix1, int* matrix2, int* result);

int main() {

    int* matrix1 = (int*)malloc(SIZE * SIZE * sizeof(int));
    int* matrix2 = (int*)malloc(SIZE * SIZE * sizeof(int));
    int* result = (int*)malloc(SIZE * SIZE * sizeof(int));


    inputMatrix(matrix1, "ù ��° 2x2 ���");
    inputMatrix(matrix2, "�� ��° 2x2 ���");

    addMatrices(matrix1, matrix2, result);

    printMatrix(result, "��� ���� ���");

    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}

void inputMatrix(int* matrix, const char* name) {
    cout << name << " �Է�:" << endl;
    for (int i = 0; i < SIZE * SIZE; i++) {
        cin >> *(matrix + i);
    }
}

void printMatrix(int* matrix, const char* name) {
    cout << name << ":" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << *(matrix + i * SIZE + j) << " ";
        }
        cout << endl;
    }
}

void addMatrices(int* matrix1, int* matrix2, int* result) {
    for (int i = 0; i < SIZE * SIZE; i++) {
        *(result + i) = *(matrix1 + i) + *(matrix2 + i);
    }
}