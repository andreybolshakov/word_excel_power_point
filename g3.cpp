#include <iostream>
#include <string>
using namespace std;
 
int main() {
	setlocale(LC_ALL, "rus");
    string S;
    size_t i = 0;
    cout << "������� ������:" << endl;
    getline(cin, S);
    // ������� ������� � ������ ������
    while (S[i] == ' ') S.erase(i, 1);
    // ������ ����� ������� � �����
    i = S.size();
    while (i > 0) {
        --i;
        // ������� ��� ������� � �����
        if (i == S.size() - 1 && S[i] == ' ')
            while (S[i] == ' ')
                S.erase(i, 1);
        // ���������� ���� ��� ���������� ����
        if (S[i] == ' ')
        {
         S[i]='*';
         --i;	
		}
           
        // ��������� �������
        while (S[i] == ' ')
            S.erase(i, 1);
    }
    cout << "���������������� ������: " << endl;
    cout << S << endl;
    return 0;
}
