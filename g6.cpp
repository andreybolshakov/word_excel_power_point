#include <iostream>
#include <string>
using namespace std;
int main()
{ 
setlocale(LC_ALL, "rus");
// ���������� ����� ��������� ������� � ������
string s;
cout<<"������: \n";// ������ ��������
getline(cin,s);
char a; // �������� ������
cout<<"������:\n";
cin>>a;
int i;
int k; // ��������� - ����� ��������� ������� a � ������ S
k = 0; // � ������ �������� ������� k
double n = s.length();
for (i=0; i<n; i++)
{
 if (s[i]==a)
      {  k++;} // ��������� ������� �� 1	
}    
double chastota=k/n;
cout<<"������� ������������� ������ ����� "<<chastota*100<<"%"<<endl;
cout<<"���������� ������ � ������ ����� "<<k<<endl;
system("pause");
return 0;
}

