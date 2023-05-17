#include <iostream>
using namespace std;

class angka
{
private:
	int* arr;
	int panjang;
public:
	angka(int);  //constructor
	~angka();    //destructor
	void cetakData();
	void isiData();
};

//Definisi Member Function
angka::angka(int i) //constructor
{
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() { //destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //constructor dipanggil
	angka* ptrBelajarcpp = new angka(5); //constructor dipanggil
	delete ptrBelajarcpp; //Destructor dipanggil

	return 0;
} //destructor dipanggil

