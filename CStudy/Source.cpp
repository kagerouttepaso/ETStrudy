#include <cstdio>
#include <iostream>

// ���p���閼�O���
using namespace std;

/// <summary>
/// �e�X�g�p�̍\����
/// </summary>
struct Test {
	double A;
	double B;
};

/// <summary>
/// �e�X�g�p�̊֐�1 �l�n��
/// </summary>
void Twice(Test t) {
	cout << "Twice" << endl;
	cout << "t�̃A�h���X = " << &t << endl;

	t.A *= 2;
	t.B *= 2;
}

/// <summary>
/// �e�X�g�p�̊֐�1 �|�C���^�n��
/// </summary>
void Twice2(Test* t) {
	cout << "Twice2" << endl;
	cout << "t�̃A�h���X" << t << endl;

	// �����̃R�[�h

	// (*t).A *= 2;
	// (*t).B *= 2;

	t->A *= 2;
	t->B *= 2;
}

int main(void) {
	cout << "�|�C���^�̓���e�X�g" << endl;

	Test main_t;
	main_t.A = 10;
	main_t.B = 10;

	cout << "main_t�̃A�h���X = " << &main_t << endl;
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