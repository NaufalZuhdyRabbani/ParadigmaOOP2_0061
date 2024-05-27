#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};

int main() {
	remoteLampu lampuRumah;

	lampuRumah, setSaklarNo(0, "Lampu Teras Rumah");
	lampuRumah, setSaklarNo(1, "Lampu Ruang Tamu");
	lampuRumah, setSaklarNo(2, "Lampu Kamar Tidur");
	lampuRumah, setSaklarNo(3, "Lampu Dapur");

	cout << lampuRumah.getsaklarNo(0, "Lampu Teras Rumah");
	cout << lampuRumah.getsaklarNo(1, "Lampu Ruang Tamu");
	cout << lampuRumah.getsaklarNo(2, "Lampu Kamar Tidur");
	cout << lampuRumah.getsaklarNo(3, "Lampu Dapur");

	return 0;

}