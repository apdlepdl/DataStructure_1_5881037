#include <iostream>
using namespace std;
/*
1. 2×2 정적 배열(a, b, sum)을 선언한다.
2. 첫 번째 행렬을 입력받는다.
3. 두 번째 행렬을 입력받는다.
4. 같은 위치의 정수끼리 더하여 새로운 행렬(sum)에 저장한다.
5. 행렬 합(sum)을 출력한다.
*/
int main() {
    int a[2][2], b[2][2], sum[2][2];

    cout << "첫 번째 2×2 행렬 입력:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    cout << "두 번째 2×2 행렬 입력:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "행렬 덧셈 결과:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}