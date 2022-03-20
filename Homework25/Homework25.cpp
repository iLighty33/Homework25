#include <iostream>

using namespace std;

struct movies {
	string title;
	int year;
	string genre;
	int duration;
	int price;
} OctoberSky, PrettyWomen, HomeAlone;

void showMovie(movies M);
movies expensive(movies M1, movies M2, movies M3);
void updateInfo(movies &M);

int main() {
	setlocale(LC_ALL, "Russian");

	// �������

	OctoberSky.title = "����������� ����";
	OctoberSky.year = 1999;
	OctoberSky.genre = "�����, ��������";
	OctoberSky.duration = 108;
	OctoberSky.price = 150;

	PrettyWomen.title = "��������";
	PrettyWomen.year = 1990;
	PrettyWomen.genre = "���������, �������";
	PrettyWomen.duration = 115;
	PrettyWomen.price = 125;

	HomeAlone.title = "���� ����";
	HomeAlone.year = 1990;
	HomeAlone.genre = "�������, ��������";
	HomeAlone.duration = 103;
	HomeAlone.price = 115;

	// ������ 1

	cout << "������ 1.\n";
	showMovie(OctoberSky);
	showMovie(PrettyWomen);
	showMovie(HomeAlone);

	// ������ 2

	cout << "\n������ 2.\n";
	expensive(OctoberSky, PrettyWomen, HomeAlone);

	// ������ 3

	cout << "\n������ 3.\n";
	int choise;
	cout << "������� �����, ������� �� ������ ��������: " << endl;
	cout << "1. ����������� ����;" << endl;
	cout << "2. ��������;" << endl;
	cout << "3. ���� ����." << endl;
	cin >> choise;
	if (choise <= 0 || choise > 3)
		cout << "������ �����";

	switch (choise) {
	case 1: cout << "�� ������� ����� -> " << OctoberSky.title << endl; updateInfo(OctoberSky); showMovie(OctoberSky); break;
	case 2: cout << "�� ������� ����� -> " << PrettyWomen.title << endl; updateInfo(PrettyWomen); showMovie(PrettyWomen); break;
	case 3: cout << "�� ������� ����� -> " << HomeAlone.title << endl; updateInfo(HomeAlone); showMovie(HomeAlone); break;
	default: break;
	}

	return 0;
}

// ������ 3

void updateInfo(movies &M) {

	int choise;
	cout << "��������, ����� ���������� � ������ �� ������ ��������: " << endl;
	cout << "1. ��������;" << endl;
	cout << "2. ��� ������;" << endl;
	cout << "3. ����;" << endl;
	cout << "4. �����������������;" << endl;
	cout << "5. ���� �� ����." << endl;
	cin >> choise;
	if (choise <= 0 || choise > 5)
		cout << "������ �����" << endl;

	switch (choise) {
	case 1: cout << "�� ������� ����� ��������. ������� ��������: "; cin >> M.title; break; return;
	case 2: cout << "�� ������� ����� ����. ������� ���: "; cin >> M.year; break; return;
	case 3: cout << "�� ������� ����� �����. ������� ����: "; cin >> M.genre; break; return;
	case 4: cout << "�� ������� ����� �����������������. ������� �����������������: "; cin >> M.duration; break; return;
	case 5: cout << "�� ������� ����� ����. ������� ����: "; cin >> M.price; break; return;
	default: break; return;
	}
	cout << "\n";
}

// ����� 2

movies expensive(movies M1, movies M2, movies M3) {
	if (M1.price > M2.price && M1.price > M3.price) {
		cout << M1.title << " - ����� ������� �����" << endl;
		return M1;
	}
	if (M2.price > M1.price && M2.price > M3.price) {
		cout << M2.title << "- ����� ������� �����" << endl;
		return M2;
	}
	if (M3.price > M1.price && M3.price > M1.price) {
		cout << M3.title << " - ����� ������� �����" << endl;
		return M3;
	}
}

// ������ 1

void showMovie(movies M) {
	cout << "�������� ������: " << M.title << "\n";
	cout << "��� ������: " << M.year << " �." << "\n";
	cout << "����: " << M.genre << "\n";
	cout << "�����������������: " << M.duration << " ���." << "\n";
	cout << "����: " << M.price << " ������" << "\n\n";
}