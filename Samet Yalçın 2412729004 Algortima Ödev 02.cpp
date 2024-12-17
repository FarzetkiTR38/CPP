#include <iostream> 
#include <clocale> 
#include <string>
#include <conio.h>
#include <vector>
#include <cmath> 
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {
setlocale(LC_ALL, "Turkish");
system("Color 0A");

	//	randmax = rand() % (büyüksayi - küçüksayi + 1) + küçüksayi    // +1 ekleme sebebimiz en büyük sayýyý dahil etmek.
	srand(time(0));

	int matrisA[3][3];
	int matrisB[3][3];
	int matristoplami[3][3];
	int matriscarpimi[3][3];
	int determinantA;
	
	for (int i= 0; i<3; i++) {
		for (int j = 0; j< 3 ; j++) {
			cout << "A matrisinin " << i+1 << j+1 << " elemanýný belirtiniz = ";
			cin >> matrisA[i][j];
		}
	}
	
	for (int i= 0; i<3; i++) {
		for (int j = 0; j< 3 ; j++) {
			cout << "B matrisinin " << i+1 << j+1 << " elemanýný belirtiniz = ";
			cin >> matrisB[i][j];
		}
	}
	
	for (int i = 0; i<3; i++) {
		for (int j = 0; j< 3 ; j++) {
			matristoplami[i][j] = matrisA[i][j] + matrisB[i][j];
		}
	}


	// matris çarpýmýný for ile yapmaya beynim yetmedi :d manuel yapýyorum fakat öðrenince for ile yaparým.
    matriscarpimi[0][0] = matrisA[0][0] * matrisB[0][0] + matrisA[0][1] * matrisB[1][0] + matrisA[0][2] * matrisB[2][0];
    matriscarpimi[0][1] = matrisA[0][0] * matrisB[0][1] + matrisA[0][1] * matrisB[1][1] + matrisA[0][2] * matrisB[2][1];
    matriscarpimi[0][2] = matrisA[0][0] * matrisB[0][2] + matrisA[0][1] * matrisB[1][2] + matrisA[0][2] * matrisB[2][2];
    matriscarpimi[1][0] = matrisA[1][0] * matrisB[0][0] + matrisA[1][1] * matrisB[1][0] + matrisA[1][2] * matrisB[2][0];
    matriscarpimi[1][1] = matrisA[1][0] * matrisB[0][1] + matrisA[1][1] * matrisB[1][1] + matrisA[1][2] * matrisB[2][1];
    matriscarpimi[1][2] = matrisA[1][0] * matrisB[0][2] + matrisA[1][1] * matrisB[1][2] + matrisA[1][2] * matrisB[2][2];
    matriscarpimi[2][0] = matrisA[2][0] * matrisB[0][0] + matrisA[2][1] * matrisB[1][0] + matrisA[2][2] * matrisB[2][0];
    matriscarpimi[2][1] = matrisA[2][0] * matrisB[0][1] + matrisA[2][1] * matrisB[1][1] + matrisA[2][2] * matrisB[2][1];
    matriscarpimi[2][2] = matrisA[2][0] * matrisB[0][2] + matrisA[2][1] * matrisB[1][2] + matrisA[2][2] * matrisB[2][2];

	// öðrendim buna gerek kalmadý :9 //

	// dedim ama kod yanlýþ öhöm 


//  for (int i = 0; i<3; i++) {
//    	for (int j = 0; j < 0; j++) {
//    		for (int k = 0; k < 0 ; k++){
//    			matriscarpimi[i][j] += matrisA[i][k] * matrisB[k][j];
//			}
//		}
//	}
 
 	// bunu bu þekilde for ile yapmam gerekiyor normalde ama yapamadýðým için normal yaptým sonucu deðiþtirmiyor ^^

	determinantA = ((matrisA[0][0] * matrisA[1][1] * matrisA[2][2]) + (matrisA[1][0] * matrisA[2][1] * matrisA[0][2]) + (matrisA[2][0] * matrisA[0][1] * matrisA[1][2])) - ((matrisA[0][2] * matrisA[1][1] * matrisA[2][0]) + (matrisA[1][2] * matrisA[2][1] * matrisA[0][0]) + (matrisA[2][2] * matrisA[0][1] * matrisA[1][0]));
 
 	// bunun da böyle olmamasý gerek ama aritmetik bir þekilde artmadýðý için beynim yetmedi döngüyle yapmaya.
 
	cout << "Oluþturduðunuz A matrisi = " << endl;
	for (int i= 0; i<3; i++) {
		for (int j = 0; j< 3 ; j++) {
			cout << setw(3) << matrisA[i][j];
		}
		cout << endl;
	}
	
	cout << "Oluþturduðunuz B matrisi = " << endl;
	for (int i= 0; i<3; i++) {
		for (int j = 0; j< 3 ; j++) {
			cout << setw(3) << matrisB[i][j];
		}
		cout << endl;
	}
	
	cout << "C = A + B = " << endl;
	for (int i= 0; i<3; i++) {
		for (int j = 0; j< 3 ; j++) {
			cout << setw(3) << matristoplami[i][j];   //setw kullanmayýnca çap oluyor matrisler .. yoksa sevmem kullanmayý
		}
		cout << endl;
	}
	
	cout << "C = A x B = " << endl;
	for (int i= 0; i<3; i++) {
		for (int j = 0; j< 3 ; j++) {
			cout << setw(5) << matriscarpimi[i][j];   
		}
		cout << endl;
	}
	
	cout << "A matrisinin determinantý = " << determinantA << endl;

return 0;
}


