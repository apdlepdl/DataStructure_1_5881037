#include <iostream>
#include <vector>
using namespace std;
/*1. ���� N�� �Է¹޴´�.

2. ũ�Ⱑ N+1�� �迭 `parray`�� �������� �Ҵ��ϰ�, ��� ���� 0���� �ʱ�ȭ�Ѵ�.
   - parray[i]�� 0�̸� i�� �Ҽ�
   - parray[i]�� 1�̸� i�� �Ҽ��� �ƴ�

3. 2���� N���� �ݺ��ϰ�, i�� �Ҽ����� Ȯ���Ѵ�.
   - ���� parray[i]�� 0�̸� i�� �Ҽ�

4. i�� �Ҽ����, i�� ������� ��� �Ҽ��� �ƴ����� ǥ���Ѵ�.
   - j�� i * i�� ���� (i�� ����� i * i���� ����)
   - j�� N ������ ������ j�� i��ŭ ������Ű��, parray[j]�� 1�� �����Ͽ� j�� �Ҽ��� �ƴ����� ǥ��

5. 2���� N���� �ݺ��ϸ鼭 parray[i]�� 0�� ��� ���� i�� ����Ѵ�.

6. ����
*/

/*O(N log log N)*/

int main() {
	int* parray;
	int n;

	cout << "���� n�� �Է��ϼ���: ";
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