#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;

    fout.open("song.txt");

    if (!fout) {
        cerr << "������ �� �� �����ϴ�." << endl;
        return 1;
    }

    int age = 21;
    const char* singer = "kim";
    const char* song = "love";
    fout << age << "\n";
    fout << singer << "\n";
    fout << song << "\n";

    fout.close();
    return 0;
}