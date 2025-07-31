#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "cin.getline() 함수로 라인을 읽습니다." << endl;
    cout << "exit를 입력하면 루프가 끝납니다." << endl;
    int no = 1; // 라인 번호
    while (true) {
        cout << "라인 " << no << " >> ";
        getline(cin, line); // 한 줄 전체를 읽음
        if (line == "exit")
            break;
        cout << "echo --> ";
        cout << line << endl; // 읽은 라인을 화면에 출력
        no++; // 라인 번호 증가
    }
}

/// 11-4를 string 클래스를 이용한 코드로 변경하라는데 이거 맞음?