#include <iostream> 
#include <clocale> 
#include <string>
#include <conio.h>
#include <vector>
#include <cmath> 
#include <stdlib.h>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {
setlocale(LC_ALL, "Turkish");
system("Color 0A");

	//	randmax = rand() % (b�y�ksayi - k���ksayi + 1) + k���ksayi    // +1 ekleme sebebimiz en b�y�k say�y� dahil etmek.
	srand(time(0));

	float kesirlisayilar2[500];
	for (int i = 0; i<500; i++) {
		kesirlisayilar2[i] = (float)rand() / (float)RAND_MAX;
		cout << (i+1) << ". �retilen kesirli say� --> " << kesirlisayilar2[i] << endl; 
	}
	
return 0;
}


