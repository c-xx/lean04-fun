#include <stdlib.h>
#include <iostream>
using namespace std;

// inline ��������

// ����Ĭ��ֵ
inline void fun(int i=30, int j=20, int k=10);

//��������
inline void fun(double i, double j);

int main(void) {
	// ����Ĭ��ֵ
	fun();
	fun(100);
	fun(100, 200);
	fun(100, 200, 300);

	//��������
	fun(1.1, 2.2); // ���� 
	fun(1, 2);     // ���ú���Ĭ��ֵ
	//fun(1.1, 2); // ����


	system("pause");
	return 0;
}

void fun(int i/* =30 */, int j/* =20 */, int k/* =10 */) {
	cout << i << "," << j << "," << k << endl;
}

void fun(double i, double j) {
	cout << i << "," << j << endl;
}
