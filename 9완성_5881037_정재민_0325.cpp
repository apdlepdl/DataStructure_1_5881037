#include <iostream>
#include <algorithm>
using namespace std;

/*
1. ���� ���� n�� �Է¹޴´�
2. �Է¹��� ũ�Ⱑ n�� ���� �迭 arr�� �Ҵ�
3. ������ �Է¹޾� arr�� ����
4. arr�� ������������ ���� �� ���
5. �Ҵ�� ���� �޸� ����
*/
int main() {
    int n;

    cout << "������ ������ �Է��ϼ���: ";
    cin >> n;

    int* arr = new int[n];

    cout << n << "���� ������ �Է��ϼ���:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "������������ ���ĵ� ������:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
