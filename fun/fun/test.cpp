#include <stdlib.h>
#include <iostream>
using namespace std;

// inline 内联函数

// 函数默认值
inline void fun(int i=30, int j=20, int k=10);

//函数重载
inline void fun(double i, double j);

int main(void) {
	// 函数默认值
	fun();
	fun(100);
	fun(100, 200);
	fun(100, 200, 300);

	//函数重载
	fun(1.1, 2.2); // 重载 
	fun(1, 2);     // 调用函数默认值
	//fun(1.1, 2); // 报错


	system("pause");
	return 0;
}

void fun(int i/* =30 */, int j/* =20 */, int k/* =10 */) {
	cout << i << "," << j << "," << k << endl;
}

void fun(double i, double j) {
	cout << i << "," << j << endl;
}
