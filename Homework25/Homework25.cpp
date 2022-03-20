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

	// Задание

	OctoberSky.title = "Октябрьское небо";
	OctoberSky.year = 1999;
	OctoberSky.genre = "Драма, семейный";
	OctoberSky.duration = 108;
	OctoberSky.price = 150;

	PrettyWomen.title = "Красотка";
	PrettyWomen.year = 1990;
	PrettyWomen.genre = "Мелодрама, комедия";
	PrettyWomen.duration = 115;
	PrettyWomen.price = 125;

	HomeAlone.title = "Один дома";
	HomeAlone.year = 1990;
	HomeAlone.genre = "Комедия, семейный";
	HomeAlone.duration = 103;
	HomeAlone.price = 115;

	// Задача 1

	cout << "Задача 1.\n";
	showMovie(OctoberSky);
	showMovie(PrettyWomen);
	showMovie(HomeAlone);

	// Задача 2

	cout << "\nЗадача 2.\n";
	expensive(OctoberSky, PrettyWomen, HomeAlone);

	// Задача 3

	cout << "\nЗадача 3.\n";
	int choise;
	cout << "Введите фильм, который вы хотите обновить: " << endl;
	cout << "1. Октябрьское небо;" << endl;
	cout << "2. Красотка;" << endl;
	cout << "3. Один дома." << endl;
	cin >> choise;
	if (choise <= 0 || choise > 3)
		cout << "Ошибка ввода";

	switch (choise) {
	case 1: cout << "Вы выбрали фильм -> " << OctoberSky.title << endl; updateInfo(OctoberSky); showMovie(OctoberSky); break;
	case 2: cout << "Вы выбрали фильм -> " << PrettyWomen.title << endl; updateInfo(PrettyWomen); showMovie(PrettyWomen); break;
	case 3: cout << "Вы выбрали фильм -> " << HomeAlone.title << endl; updateInfo(HomeAlone); showMovie(HomeAlone); break;
	default: break;
	}

	return 0;
}

// Задача 3

void updateInfo(movies &M) {

	int choise;
	cout << "Выберете, какую информацию о фильмы вы хотите обновить: " << endl;
	cout << "1. Название;" << endl;
	cout << "2. Год выхода;" << endl;
	cout << "3. Жанр;" << endl;
	cout << "4. Продолжительность;" << endl;
	cout << "5. Цена за диск." << endl;
	cin >> choise;
	if (choise <= 0 || choise > 5)
		cout << "Ошибка ввода" << endl;

	switch (choise) {
	case 1: cout << "Вы выбрали смену названия. Введите название: "; cin >> M.title; break; return;
	case 2: cout << "Вы выбрали смену года. Введите год: "; cin >> M.year; break; return;
	case 3: cout << "Вы выбрали смену жарна. Введите жанр: "; cin >> M.genre; break; return;
	case 4: cout << "Вы выбрали смену продолжительности. Введите продолжительность: "; cin >> M.duration; break; return;
	case 5: cout << "Вы выбрали смену цены. Введите цену: "; cin >> M.price; break; return;
	default: break; return;
	}
	cout << "\n";
}

// Задча 2

movies expensive(movies M1, movies M2, movies M3) {
	if (M1.price > M2.price && M1.price > M3.price) {
		cout << M1.title << " - самый дорогой фильм" << endl;
		return M1;
	}
	if (M2.price > M1.price && M2.price > M3.price) {
		cout << M2.title << "- самый дорогой фильм" << endl;
		return M2;
	}
	if (M3.price > M1.price && M3.price > M1.price) {
		cout << M3.title << " - самый дорогой фильм" << endl;
		return M3;
	}
}

// Задача 1

void showMovie(movies M) {
	cout << "Название фильма: " << M.title << "\n";
	cout << "Год выхода: " << M.year << " г." << "\n";
	cout << "Жанр: " << M.genre << "\n";
	cout << "Продолжительность: " << M.duration << " мин." << "\n";
	cout << "Цена: " << M.price << " рублей" << "\n\n";
}