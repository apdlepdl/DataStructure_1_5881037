#include <iostream>
using namespace std;
/*
1. 2��2 ���� �迭(a, b, sum)�� �����Ѵ�.
2. ù ��° ����� �Է¹޴´�.
3. �� ��° ����� �Է¹޴´�.
4. ���� ��ġ�� �������� ���Ͽ� ���ο� ���(sum)�� �����Ѵ�.
5. ��� ��(sum)�� ����Ѵ�.
*/
int main() {
    int a[2][2], b[2][2], sum[2][2];

    cout << "ù ��° 2��2 ��� �Է�:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    cout << "�� ��° 2��2 ��� �Է�:\n";
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

    cout << "��� ���� ���:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}