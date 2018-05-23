#include <cstdio>
#include <iostream>

// 利用する名前空間
using namespace std;

/// <summary>
/// テスト用の構造体
/// </summary>
struct Test {
	double A;
	double B;
};

/// <summary>
/// テスト用の関数1 値渡し
/// </summary>
void Twice(Test t) {
	t.A *= 2;
	t.B *= 2;
}

/// <summary>
/// テスト用の関数1 ポインタ渡し
/// </summary>
void Twice2(Test* t) {
	// 等価のコード

	// (*t).A *= 2;
	// (*t).B *= 2;

	t->A *= 2;
	t->B *= 2;
}

int main(void) {
	cout << "ポインタの動作テスト" << endl;

	Test main_t;
	main_t.A = 10;
	main_t.B = 10;

	Twice(main_t);
	cout << "Twice" << endl;
	cout << "main_t.A = " << main_t.A << endl;
	cout << "main_t.B = " << main_t.B << endl;

	Twice2(&main_t);
	cout << "Twice2" << endl;
	cout << "main_t.A = " << main_t.A << endl;
	cout << "main_t.B = " << main_t.B << endl;

	char w;
	cin >> w;
}