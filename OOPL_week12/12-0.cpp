#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;

    fout.open("song.txt");

    if (!fout) {
        cerr << "파일을 열 수 없습니다." << endl;
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