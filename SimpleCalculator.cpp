
#include <iostream>
#include<math.h>
#include<windows.h>
using namespace std;

double toplama(double a, double b) {
	return a + b;
}

double cıkarma(double a, double b) {
	return a - b;
}

double carpma(double a, double b) {
	return a * b;
}

double bolme(double a, double b) {
	return a / b;
}

int main() {
	setlocale(LC_ALL, "Turkish");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

	int islem;
	double num1, num2;


	cout << "SIMPLE CALCULATOR" << endl << endl;
	while (true) {
		cout << "Lütfen yapmak istediğiniz işlemi seçiniz: " << endl;
		cout << "[1] Toplama " << endl;
		cout << "[2] Çıkarma " << endl;
		cout << "[3] Çarpma " << endl;
		cout << "[4] Bölme " << endl;
		cout << "[5] Üslü İfade" << endl;
		cout << "[6] Karekök Alma" << endl;
		cout << "[0] Çıkış" << endl;
		cout << endl;
		cin >> islem;

		if (islem == 1) {
			cout << "Toplama işlemi seçtiniz." << endl;
			cout << "Lütfen toplamak istediğiniz 2 sayıyı girin: " << endl;;
			cin >> num1;
			cin >> num2;
			cout << "Girdiğiniz sayılar: " << num1 << "," << num2 << endl;
			cout << "Sonuç: " << toplama(num1, num2) << endl << endl;
		}
		else if (islem == 2) {
			cout << "Çıkarma işlemi seçtiniz." << endl;
			cout << "Lütfen çıkarmak istediğiniz 2 sayıyı girin: " << endl;
			cin >> num1;
			cin >> num2;
			cout << "Girdiğiniz sayılar: " << num1 << "," << num2 << endl;
			cout << "Sonuç: " << cıkarma(num1, num2) << endl << endl;
		}
		else if (islem == 3) {
			cout << "Çarpma işlemini seçtiniz." << endl;
			cout << "Lütfen çarpmak istedğiniz 2 sayıyı girin: " << endl;
			cin >> num1;
			cin >> num2;
			cout << "Girdiğiniz sayılar: " << num1 << "," << num2 << endl;
			cout << "Sonuç: " << carpma(num1, num2) << endl << endl;
		}
		else if (islem == 4) {
			cout << "Bölme işlemini seçtiniz" << endl;
			cout << "Lütfen bölmek istediğiniz 2 sayıyı girin: " << endl;
			cin >> num1;
			cin >> num2;
			cout << "Girdiğiniz sayılar: " << num1 << "," << num2 << endl;
			if (num2 == 0) {
				cout << "Sıfıra Bölünemez!" << endl << endl;
			}
			else {
				cout << "Sonuç: " << bolme(num1, num2) << endl << endl;
			}

		}
		else if (islem == 5) {
			double uslu;
			cout << "Üs alma işlemi seçtiniz." << endl;
			cout << "Lütfen taban girin: " << endl;
			cin >> num1;
			cout << "Lütfen üs girin: " << endl;
			cin >> num2;
			uslu = pow(num1, num2);
			cout << "Sonuç: " << uslu << endl << endl;
		}
		else if (islem == 6) {
			double karekok;
			cout << "Karekök işlemi seçtiniz." << endl;
			cout << "Lütfen karekök almak istediğiniz sayıyı girin: " << endl;
			cin >> num1;
			if (num1 < 0) {
				cout << "Negatif Sayıların Karekökü Alınamaz!" << endl << endl;
			}
			else {
				karekok = sqrt(num1);
				cout << "Sonuç: " << karekok << endl << endl;
			}

		}
		else if (islem == 0) {
			cout << "Hesap Makinesi Kapatılıyor..." << endl;
			break;
		}
		else {
			cout << "Geçersiz giriş yaptınız. Lütfen 0-6 arasında bir sayı girin." << endl << endl;
		}
	}

}
