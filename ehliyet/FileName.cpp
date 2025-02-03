#include <iostream>
#include <fstream> // Dosya i�lemleri i�in gerekli

using namespace std;

int main() {
    int age;

    // Kullan�c�dan ya� bilgisini al
    cout << "Yasinizi giriniz: ";
    cin >> age;

    // Dosyaya yazmak i�in dosya a�ma
    ofstream outputFile("output.txt");

    // Ya� kontrol� ve ��kt�
    if (age >= 18) {
        cout << "Ehliyet alabilirsiniz!" << endl;
        outputFile << "Ehliyet alabilirsiniz!" << endl;
    }
    else {
        cout << "Ehliyet alamazs�n�z!" << endl;
        outputFile << "Ehliyet alamazs�n�z!" << endl;
    }

    // Dosya kapatma
    outputFile.close();

    return 0;
}
