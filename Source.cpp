#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int tmp;
	ofstream fout;
	ifstream fin;
	string work;
	string buff;
	cout << "______________________________________Добро пожаловать в File Explorer!______________________________________" << endl;
	while (true) {
		cout << "Чтобы считать файл в буффер нажмите '1'" << endl << "Чтобы создать файл в папке проекта нажмите '2'"<<endl;
		cin >> tmp;
		switch (tmp) {
		case 1:
			cout << "Введите полный путь до файла:   "<<endl;
			cin >> work;
			fin.open(work);
			if (!fin.is_open()) {
				cout << "Ошибка открытия файла!"<<endl;
				break;
			}
			while (fin >> buff);
			cout << "Файл успешно считан в буффер!"<<endl;
			break;
		case 2:
			cout << "Введите название файла:   ";
			cin >> work;
			fout.open(work);
			fout.close();
			cout << "Успешно!"<<endl;
			break;



		}

	}
}