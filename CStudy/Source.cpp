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
	cout << "Twice" << endl;
	cout << "tのアドレス = " << &t << endl;

	t.A *= 2;
	t.B *= 2;
}

/// <summary>
/// テスト用の関数1 ポインタ渡し
/// </summary>
void Twice2(Test* t) {
	cout << "Twice2" << endl;
	cout << "tのアドレス" << t << endl;

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

	cout << "main_tのアドレス = " << &main_t << endl;
	cout << endl;

	Twice(main_t);
	cout << "main_t.A = " << main_t.A << endl;
	cout << "main_t.B = " << main_t.B << endl;
	cout << endl;

	Twice2(&main_t);
	cout << "main_t.A = " << main_t.A << endl;
	cout << "main_t.B = " << main_t.B << endl;
	cout << endl;

	char w;
	cin >> w;
}