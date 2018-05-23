#include <cstdio>
#include <iostream>

using namespace std;

struct Test {
	double A;
	double B;
};

void Twice(Test t) {
	t.A *= 2;
	t.B *= 2;
}

void Twice2(Test* t) {
	// (*t).A *= 2;
	// (*t).B *= 2;

	t->A *= 2;
	t->B *= 2;
}

struct Vector2
{
	double X;
	double Y;
};

// 戻り値 ステータス
// 計算結果 ポインタで結果を格納するインスタンスを指定する
int Method(int In1, int In2, int* result) { return 0; }

int main(void) {
	printf("Hello world\n");

	Test main_t;
	main_t.A = 10;
	main_t.B = 10;

	Twice(main_t);
	cout << "main_t.A = " << main_t.A << endl;
	cout << "main_t.B = " << main_t.B << endl;

	Twice2(&main_t);
	cout << "main_t.A = " << main_t.A << endl;
	cout << "main_t.B = " << main_t.B << endl;

	int a;
	cin >> a;
}