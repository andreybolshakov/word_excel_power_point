#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s, ss, l, c, r;
    cout<<"Input string with using english:\n";
    getline(cin,s);//������ ������ ������ � ���������
 
    //�������� ������ s �� ��� ������: l(left), c(centre), r(right) �� �������� ��������� ����� '?'
    int k = s.find('?');//������� ������ ������� ��������� '?' � ������ s
                if (k < 0)
                {
                    cout << "invalid input" << endl;
                    return 0;
                }
    l = s.substr(0,k+1);//����� ����� ������ s ������ � '?'
    ss = s.substr(k+1,s.length());//������ ����� ����� ������ s ����� '?'
 
    k = ss.find('?');//������� ������ '?' � ������ ss
                if (k < 0)
                {
                    cout << "invalid input" << endl;
                    return 0;
                }
    r = ss.substr(k, ss.length());//������ ����� ����� ������ ss ������ � '?'
 
    c = ss.substr(0, k);//������� ����� ������ s
    cout << s << " " << l << " " << c << " " << r << endl;
 
    //������� ������� � �����e �(centre)
    ss = "";
    for (int i = 0; i < c.length(); i++)
        if (c[i] != ' ')
            ss += c[i];
    
    //"���������" ��� ����� ������
    s = l + ss + r;
 cout<<"String is after doing action:\n";
    cout << s << endl;
    system("pause");
    return 0;
}
