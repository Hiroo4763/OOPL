#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 사용자 정보를 저장하고 관리하는 클래스
class User {
private:
    string ID;   // 사용자 아이디
    string PW;   // 사용자 비밀번호
    string name; // 사용자 이름
    string birth; // 사용자 생년월일
public:
    void Input_ID(const string& id) { // 아이디 입력 함수
        ID = id;
    }
    void Input_PW(const string& pw) { // 비밀번호 입력 함수, 원본 데이터 변경 안 할거니까 참조형 + const
        PW = pw;
    }
    void Input_Name(const string& n) { // 이름 입력 함수
        name = n;
    }
    void Input_Birth(const string& b) { // 생년월일 입력 함수
        birth = b;
    }
    string get_ID() const { // 아이디 반환 함수
        return ID;
    }
    string get_PW() const { // 비밀번호 반환 함수
        return PW;
    }
    string get_Name() const { // 이름 반환 함수
        return name;
    }
    string get_Birth() const { // 생년월일 반환 함수
        return birth;
    }
    virtual void Show_Info() const { // 사용자 정보를 화면에 출력하는 함수
        cout << "이름: " << name << ", 생년월일: " << birth << endl;
    }
};

// 데이터베이스 클래스 (회원정보 관리)
class Data_Base : public User {
protected:
    static vector<User> accounts; //// 사용자 계정을 저장하는 벡터, static 7주차 29p 참조(LINK 2001 에러), vector 11주차 24~27p 참조
public:
    Data_Base() { // 생성자: 초기 데이터 설정
        if (accounts.empty()) {//계정을 담는 벡터가 비어있으면 -> 중복 방지
            User def_user; // def_user 객체 생성
            def_user.Input_ID("hanbat");
            def_user.Input_PW("h@n123");
            def_user.Input_Name("테스트");
            def_user.Input_Birth("20030820");
            accounts.push_back(def_user); //기본 계정 추가 단계

            User admin;
            admin.Input_ID("admin");
            admin.Input_PW("admin");
            admin.Input_Name("관리자");
            admin.Input_Birth("0000000");
            accounts.push_back(admin);
        }
    }

    // 새로운 사용자 추가 함수
    bool Add_User(const User& new_user) {
        for (const User& account : accounts) { //벡터 안에 있는 객체 순회
            if (account.get_ID() == new_user.get_ID())
                return false; // 이미 등록된 아이디일 경우 false 반환
        }
        accounts.push_back(new_user); // 새로운 사용자 추가
        return true;
    }

    virtual bool Correct_User(const string& id, const string& pw) { // 사용자 아이디와 비밀번호 확인 함수
        for (const User& account : accounts) // 모든 사용자 계정 확인
            if (account.get_ID() == id && account.get_PW() == pw)
                return true; // 아이디와 비밀번호가 일치하면 true 반환
		return false; // 일치하는 계정이 없으면 false 반환
    }

    int Get_User_Index(const string& id) { //ID 찾기(동일 아이디 확인 절차)
        for (int i = 0; i < accounts.size(); i++)
            if (accounts[i].get_ID() == id)
                return i;
        return -1; // 아이디가 없으면 -1 반환
    }

    virtual void RLS() = 0; //Register and Login System

	static void Show_All_Accounts() { //모든 계정 정보 출력 함수
		for (const User& u : accounts) { //벡터 안에 있는 객체 순회
            cout << "ID: " << u.get_ID() << ", ";
            u.Show_Info();
        }
    }

	
};

vector<User> Data_Base::accounts;  //정적 할당

// 관리 시스템 클래스 (사용자 정보 수정 및 관리)
class Manage_System : public Data_Base {
private:
    int user_info; //벡터 인덱스 받을 변수
public:
    Manage_System(int idn) { // 생성자: 사용자 정보 인덱스 전달
        user_info = idn;
    }

    virtual void RLS() { // 관리 페이지 인터페이스
        int choice;
        do {
            cout << "\n|---|관리 페이지 입니다|---|\n";
            cout << "1: 아이디 변경\n2: 비밀번호 변경\n3: 내 정보 보기\n4: 로그아웃\n";
            cout << "선택: ";
            cin >> choice;
            switch (choice) {
            case 1:
                Change_ID();
                break;
            case 2:
                Change_PW();
                break;
            case 3:
                Show_Info();
                break;
            case 4:
                cout << "로그아웃 되었습니다.\n";
                break;
            default:
                cout << "잘못된 선택입니다.\n";
            }
        } while (choice != 4);
    }

	void admin_page() { // 관리자 페이지 인터페이스
        int choice;
        do {
            cout << "\n|---|관리자 페이지|---|\n";
            cout << "1: 전체 계정 보기\n2: 로그아웃\n";
            cout << "선택: ";
            cin >> choice;
            switch (choice) {
            case 1:
                Show_All_Accounts();
                break;
            case 2:
                cout << "로그아웃 되었습니다.\n";
                break;
            default:
                cout << "잘못된 선택입니다.\n";
            }
        } while (choice != 2);
    }


	void Change_ID() { // 아이디 변경 함수
        string new_id;
        cout << "새로운 아이디를 입력해주세요: ";
        cin >> new_id;
        for (const User& account : accounts)
            if (account.get_ID() == new_id) {
                cout << "이미 사용 중인 아이디입니다.\n";
                return;
            }
        accounts[user_info].Input_ID(new_id);
        cout << "아이디 변경이 완료되었습니다.\n";
    }

	void Change_PW() { // 비밀번호 변경 함수
        string new_pw;
        cout << "새로운 비밀번호를 입력해주세요: ";
        cin >> new_pw;
        accounts[user_info].Input_PW(new_pw);
        cout << "비밀번호 변경이 완료되었습니다.\n";
    }

	void Show_Info() { // 사용자 정보 출력 함수
        cout << "아이디: " << accounts[user_info].get_ID() << endl;
        accounts[user_info].Show_Info();
    }
};

// 로그인 시스템 클래스
class Login_System : public Data_Base {
public:
    virtual void RLS() {
        string id, pw;
        cout << "\n[로그인]\n아이디: ";
        cin >> id;
        cout << "비밀번호: ";
        cin >> pw;

        if (Correct_User(id, pw)) {
            cout << "로그인 되었습니다.\n";
            int idn = Get_User_Index(id);
            Manage_System ms(idn);
            // 관리자 계정인지 확인하여, 관리자 페이지로 이동
            if (id == "admin") {
                ms.admin_page();  // 관리자 계정일 때 관리자 페이지로 이동
            }
            else {
                ms.RLS();  // 일반 사용자의 경우 사용자 관리 페이지로 이동
            }
        }
        else {
            cout << "로그인 실패: 아이디 또는 비밀번호가 올바르지 않습니다.\n";
        }
    }
};

// 회원가입 시스템 클래스
class Registration_System : public Data_Base {
public:
    virtual void RLS() {
        string id, pw, name, birth;
        cout << "\n[회원가입]\n아이디: ";
        cin >> id;

        for (const User& account : accounts) {
            if (account.get_ID() == id) {
                cout << "이미 등록된 아이디입니다!\n";
                return;
            }
        }

        cout << "비밀번호: ";
        cin >> pw;
        cout << "이름: ";
        cin >> name;
        cout << "생년월일 (8자리): ";
        cin >> birth;

        User new_user;
        new_user.Input_ID(id);
        new_user.Input_PW(pw);
        new_user.Input_Name(name);
        new_user.Input_Birth(birth);

        if (Add_User(new_user)) {
            cout << "회원가입이 완료되었습니다.\n";
        }
        else {
            cout << "회원가입 실패.\n";
        }
    }
};

int main() {
    while (true) {
        Data_Base* db;
        int choice;
        cout << "\n=== 메인 메뉴 ===\n";
        cout << "1: 회원가입\n2: 로그인\n3: 종료\n";
        cout << "선택: ";
        cin >> choice;

        if (choice == 1) {
            db = new Registration_System();
        }
        else if (choice == 2) {
            db = new Login_System();
        }
        else if (choice == 3) {
            cout << "프로그램 종료.\n";
            break;
        }
        else {
            cout << "잘못된 입력입니다.\n";
            continue;
        }

        db->RLS();
        delete db;
    }

    return 0;
}
