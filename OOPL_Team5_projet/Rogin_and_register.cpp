#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ����� ������ �����ϰ� �����ϴ� Ŭ����
class User {
private:
    string ID;   // ����� ���̵�
    string PW;   // ����� ��й�ȣ
    string name; // ����� �̸�
    string birth; // ����� �������
public:
    void Input_ID(const string& id) { // ���̵� �Է� �Լ�
        ID = id;
    }
    void Input_PW(const string& pw) { // ��й�ȣ �Է� �Լ�, ���� ������ ���� �� �ҰŴϱ� ������ + const
        PW = pw;
    }
    void Input_Name(const string& n) { // �̸� �Է� �Լ�
        name = n;
    }
    void Input_Birth(const string& b) { // ������� �Է� �Լ�
        birth = b;
    }
    string get_ID() const { // ���̵� ��ȯ �Լ�
        return ID;
    }
    string get_PW() const { // ��й�ȣ ��ȯ �Լ�
        return PW;
    }
    string get_Name() const { // �̸� ��ȯ �Լ�
        return name;
    }
    string get_Birth() const { // ������� ��ȯ �Լ�
        return birth;
    }
    virtual void Show_Info() const { // ����� ������ ȭ�鿡 ����ϴ� �Լ�
        cout << "�̸�: " << name << ", �������: " << birth << endl;
    }
};

// �����ͺ��̽� Ŭ���� (ȸ������ ����)
class Data_Base : public User {
protected:
    static vector<User> accounts; //// ����� ������ �����ϴ� ����, static 7���� 29p ����(LINK 2001 ����), vector 11���� 24~27p ����
public:
    Data_Base() { // ������: �ʱ� ������ ����
        if (accounts.empty()) {//������ ��� ���Ͱ� ��������� -> �ߺ� ����
            User def_user; // def_user ��ü ����
            def_user.Input_ID("hanbat");
            def_user.Input_PW("h@n123");
            def_user.Input_Name("�׽�Ʈ");
            def_user.Input_Birth("20030820");
            accounts.push_back(def_user); //�⺻ ���� �߰� �ܰ�

            User admin;
            admin.Input_ID("admin");
            admin.Input_PW("admin");
            admin.Input_Name("������");
            admin.Input_Birth("0000000");
            accounts.push_back(admin);
        }
    }

    // ���ο� ����� �߰� �Լ�
    bool Add_User(const User& new_user) {
        for (const User& account : accounts) { //���� �ȿ� �ִ� ��ü ��ȸ
            if (account.get_ID() == new_user.get_ID())
                return false; // �̹� ��ϵ� ���̵��� ��� false ��ȯ
        }
        accounts.push_back(new_user); // ���ο� ����� �߰�
        return true;
    }

    virtual bool Correct_User(const string& id, const string& pw) { // ����� ���̵�� ��й�ȣ Ȯ�� �Լ�
        for (const User& account : accounts) // ��� ����� ���� Ȯ��
            if (account.get_ID() == id && account.get_PW() == pw)
                return true; // ���̵�� ��й�ȣ�� ��ġ�ϸ� true ��ȯ
		return false; // ��ġ�ϴ� ������ ������ false ��ȯ
    }

    int Get_User_Index(const string& id) { //ID ã��(���� ���̵� Ȯ�� ����)
        for (int i = 0; i < accounts.size(); i++)
            if (accounts[i].get_ID() == id)
                return i;
        return -1; // ���̵� ������ -1 ��ȯ
    }

    virtual void RLS() = 0; //Register and Login System

	static void Show_All_Accounts() { //��� ���� ���� ��� �Լ�
		for (const User& u : accounts) { //���� �ȿ� �ִ� ��ü ��ȸ
            cout << "ID: " << u.get_ID() << ", ";
            u.Show_Info();
        }
    }

	
};

vector<User> Data_Base::accounts;  //���� �Ҵ�

// ���� �ý��� Ŭ���� (����� ���� ���� �� ����)
class Manage_System : public Data_Base {
private:
    int user_info; //���� �ε��� ���� ����
public:
    Manage_System(int idn) { // ������: ����� ���� �ε��� ����
        user_info = idn;
    }

    virtual void RLS() { // ���� ������ �������̽�
        int choice;
        do {
            cout << "\n|---|���� ������ �Դϴ�|---|\n";
            cout << "1: ���̵� ����\n2: ��й�ȣ ����\n3: �� ���� ����\n4: �α׾ƿ�\n";
            cout << "����: ";
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
                cout << "�α׾ƿ� �Ǿ����ϴ�.\n";
                break;
            default:
                cout << "�߸��� �����Դϴ�.\n";
            }
        } while (choice != 4);
    }

	void admin_page() { // ������ ������ �������̽�
        int choice;
        do {
            cout << "\n|---|������ ������|---|\n";
            cout << "1: ��ü ���� ����\n2: �α׾ƿ�\n";
            cout << "����: ";
            cin >> choice;
            switch (choice) {
            case 1:
                Show_All_Accounts();
                break;
            case 2:
                cout << "�α׾ƿ� �Ǿ����ϴ�.\n";
                break;
            default:
                cout << "�߸��� �����Դϴ�.\n";
            }
        } while (choice != 2);
    }


	void Change_ID() { // ���̵� ���� �Լ�
        string new_id;
        cout << "���ο� ���̵� �Է����ּ���: ";
        cin >> new_id;
        for (const User& account : accounts)
            if (account.get_ID() == new_id) {
                cout << "�̹� ��� ���� ���̵��Դϴ�.\n";
                return;
            }
        accounts[user_info].Input_ID(new_id);
        cout << "���̵� ������ �Ϸ�Ǿ����ϴ�.\n";
    }

	void Change_PW() { // ��й�ȣ ���� �Լ�
        string new_pw;
        cout << "���ο� ��й�ȣ�� �Է����ּ���: ";
        cin >> new_pw;
        accounts[user_info].Input_PW(new_pw);
        cout << "��й�ȣ ������ �Ϸ�Ǿ����ϴ�.\n";
    }

	void Show_Info() { // ����� ���� ��� �Լ�
        cout << "���̵�: " << accounts[user_info].get_ID() << endl;
        accounts[user_info].Show_Info();
    }
};

// �α��� �ý��� Ŭ����
class Login_System : public Data_Base {
public:
    virtual void RLS() {
        string id, pw;
        cout << "\n[�α���]\n���̵�: ";
        cin >> id;
        cout << "��й�ȣ: ";
        cin >> pw;

        if (Correct_User(id, pw)) {
            cout << "�α��� �Ǿ����ϴ�.\n";
            int idn = Get_User_Index(id);
            Manage_System ms(idn);
            // ������ �������� Ȯ���Ͽ�, ������ �������� �̵�
            if (id == "admin") {
                ms.admin_page();  // ������ ������ �� ������ �������� �̵�
            }
            else {
                ms.RLS();  // �Ϲ� ������� ��� ����� ���� �������� �̵�
            }
        }
        else {
            cout << "�α��� ����: ���̵� �Ǵ� ��й�ȣ�� �ùٸ��� �ʽ��ϴ�.\n";
        }
    }
};

// ȸ������ �ý��� Ŭ����
class Registration_System : public Data_Base {
public:
    virtual void RLS() {
        string id, pw, name, birth;
        cout << "\n[ȸ������]\n���̵�: ";
        cin >> id;

        for (const User& account : accounts) {
            if (account.get_ID() == id) {
                cout << "�̹� ��ϵ� ���̵��Դϴ�!\n";
                return;
            }
        }

        cout << "��й�ȣ: ";
        cin >> pw;
        cout << "�̸�: ";
        cin >> name;
        cout << "������� (8�ڸ�): ";
        cin >> birth;

        User new_user;
        new_user.Input_ID(id);
        new_user.Input_PW(pw);
        new_user.Input_Name(name);
        new_user.Input_Birth(birth);

        if (Add_User(new_user)) {
            cout << "ȸ�������� �Ϸ�Ǿ����ϴ�.\n";
        }
        else {
            cout << "ȸ������ ����.\n";
        }
    }
};

int main() {
    while (true) {
        Data_Base* db;
        int choice;
        cout << "\n=== ���� �޴� ===\n";
        cout << "1: ȸ������\n2: �α���\n3: ����\n";
        cout << "����: ";
        cin >> choice;

        if (choice == 1) {
            db = new Registration_System();
        }
        else if (choice == 2) {
            db = new Login_System();
        }
        else if (choice == 3) {
            cout << "���α׷� ����.\n";
            break;
        }
        else {
            cout << "�߸��� �Է��Դϴ�.\n";
            continue;
        }

        db->RLS();
        delete db;
    }

    return 0;
}
