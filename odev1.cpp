/*
Ömer ALTUNTAŞ
20.02.2020

Bu kod ekrana düz, ters ve hem düz hem ters üçgen bastırır.
Düz üçgeni for ters üçgeni while döngüsü ile yazar.
3 kez hatalı girişte programdan çıkar.

This code prints on the screen straight, inverted, and both straight and inverted triangles.
Prints straight triangle using for loop.
Prints inverted triangle using while loop.
Exit the program 3 times with incorrect entry.
*/

#include <iostream>
#include <conio.h>
using namespace std;


void duzUcgen(int deger);
void tersUcgen(int deger);	
void elmas(int deger);

int main() {

	
	
	int choose,num;

	while (1) {

		
		cout << "\nDuz Ucgen  1" << endl;	//for straight triangle.
		cout << "Ters Ucgen 2" << endl;		//for inverted triangle.
		cout << "Elmas      3" << endl;		//for both
		cout << "Cikis      0" << endl;

		cin >> choose;	//Seçim giriliyor - entering choose.

		if (choose == 0)
			break;

		cout << "sayi giriniz" << endl;	//enter number
		cin >> num;

		system("cls");	//clearing the screen.

		if (choose == 1)
			duzUcgen(num);

		else if (choose == 2)
			tersUcgen(num);

		else if (choose == 3)
			elmas(num);

		else if (choose != 0)
			cout << "Yanlis Giris Yaptiniz" << endl;//incorrect choose.


		
		
	}
	return 0;
}

void duzUcgen(int deger) {

	int cntr = 0;   // 3 giriş hakkını sayacak değişken 

	for (;;) {

		if (deger % 2 == 1 && 3 <= deger && deger <= 15) {	// doğru aralıkta tek sayı girildi mi

			int stars = 1, space = deger / 2;	//yıldızlar ve boşluklar ilklendirildi

			for (int i = 0; i < deger / 2 + 1; i++) { // bu for döngüsü satırları atlayacak


				for (int j = 0; j < space; j++) {	// bu for döngüsü boşlukları yazacak

					cout << " ";

				}

				for (int j = 0; j < stars; j++) {	// bu for yıldızları yazacak

					cout << "*";

				}

				cout << endl;

				stars += 2, space--;//	her satırda yıldız 2 artacağından 
									// yıldızlar 2 arttırıldı ve boşluk 1 azaltıldı
			}
			break;
		}

		else {

			if (++cntr == 3)	// 3 kez yanlış girişte program fonksiyon sonlanıyor
				return;

			cin >> deger;	// yeni değer alınıyor
		}

	}
}

void tersUcgen(int deger) {

	int cntr = 0;	// 3 giriş hakkını sayacak değişken 

	while (1) {	//break görülene kadar dönecek
	
		if (deger % 2 == 1 && 3 <= deger && deger <= 15) {	// doğru aralıkta tek sayı girildi mi

			int stars = deger, space = 0,k=0;	//değişkenler ilklendirildi

			while (k < deger / 2 + 1) {	// satırları atlayacak

				int i = 0, j = 0;	// sayaç değişkenleri
		
				while (i < space) {	//boşlukları yazacak 
						
					cout << " ";
					i++;

				}

				while (j < stars) {	//yıldızları sayacak

					cout << "*";
					j++;

				}

				cout << endl;
				k++;
				stars -= 2, space++ ;	//yıldızlar 2'şer azalacağından yıldızlar 2 azalıyor
			}							//boşluk 1 artırılıyor

			break;	// üçgen bitince fonksiyon sonlanıyor
		}
	
		else {

			if (++cntr == 3)	// 3 kez yanlış girişte fonksiyon sonlanıyor
				return;

			cin >> deger;	// yeni değer alınıyor
		}	
	}
}

void elmas(int deger) {

	duzUcgen(deger);
	tersUcgen(deger);
	return;
}