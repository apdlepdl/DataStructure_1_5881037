#include <iostream>
#include <algorithm>
using namespace std;

/*
1. 정수 개수 n을 입력받는다
2. 입력받은 크기가 n인 동적 배열 arr을 할당
3. 정수를 입력받아 arr에 저장
4. arr을 오름차순으로 정렬 및 출력
5. 할당된 동적 메모리 해제
*/
int main() {
    int n;

    cout << "정수의 개수를 입력하세요: ";
    cin >> n;

    int* arr = new int[n];

    cout << n << "개의 정수를 입력하세요:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "오름차순으로 정렬된 정수들:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
