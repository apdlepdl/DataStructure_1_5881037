#include <iostream>
#include <vector>
using namespace std;
/*1. 정수 N을 입력받는다.

2. 크기가 N+1인 배열 `parray`를 동적으로 할당하고, 모든 값을 0으로 초기화한다.
   - parray[i]가 0이면 i는 소수
   - parray[i]가 1이면 i는 소수가 아님

3. 2부터 N까지 반복하고, i가 소수인지 확인한다.
   - 만약 parray[i]가 0이면 i는 소수

4. i가 소수라면, i의 배수들을 모두 소수가 아님으로 표시한다.
   - j를 i * i로 설정 (i의 배수는 i * i부터 시작)
   - j가 N 이하일 때까지 j를 i만큼 증가시키며, parray[j]를 1로 설정하여 j는 소수가 아님으로 표시

5. 2부터 N까지 반복하면서 parray[i]가 0인 모든 숫자 i를 출력한다.

6. 종료
*/

/*O(N log log N)*/

int main() {
	int* parray;
	int n;

	cout << "정수 n을 입력하세요: ";
	cin >> n;

	parray = new int[n + 1];

	for (int i = 0; i <= n; i++) {
		parray[i] = 0;
	}

	int i, j;

	for (i = 2; i <= n; i++) {
		if (parray[i] == 1)
			continue;
		j = i;
		while ((j += i) <= n) {
			parray[j] = 1;
		}
	}

	for (i = 2; i <= n; i++) {
		if (parray[i] == 0)
			cout << i << endl;
	}

	delete[] parray;
	return 0;
}