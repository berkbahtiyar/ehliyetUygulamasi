#include <iostream>
#include <fstream> // Dosya iþlemleri için gerekli

using namespace std;

int main() {
    int age;

    // Kullanýcýdan yaþ bilgisini al
    cout << "Yasinizi giriniz: ";
    cin >> age;

    // Dosyaya yazmak için dosya açma
    ofstream outputFile("output.txt");

    // Yaþ kontrolü ve çýktý
    if (age >= 18) {
        cout << "Ehliyet alabilirsiniz!" << endl;
        outputFile << "Ehliyet alabilirsiniz!" << endl;
    }
    else {
        cout << "Ehliyet alamazsýnýz!" << endl;
        outputFile << "Ehliyet alamazsýnýz!" << endl;
    }

    // Dosya kapatma
    outputFile.close();

    return 0;
}
