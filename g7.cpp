#include <iostream>
#include <conio.h>
using namespace std;

int Search(int a[], const int n, const int key)
{
    int i = 0;
    for ( i; i < n; i++) 
    {
        if ( a[i] == key ) 
        {
            return i; // else �� �����, ������� � ��� ������ -1 ���� �� ������ ����������
        }
    }
    return -1;
}
 
int main ()
{
    setlocale(LC_ALL,"rus");
    const int ARRAY_SIZE = 5;
    int key = 0, result = 0;
    int a[ARRAY_SIZE];

    cout << "������� ������ (5 ���������):";
    for(int i = 0; i < ARRAY_SIZE; i++) // ������ ����� ��������� � �����
    { 
       cin >> a[i];
    }

    cout << "������� ������� ��� ������: ";
    cin >> key;
    result = Search(a, ARRAY_SIZE, key); // ������ �������� - ������ �������, �� ������� �������

    if(result == -1) 
    {
        cout << "-1\n";
    }
    else 
    {
        cout << "������ �������� �������� � �������: " << result << std::endl;
    }
    system("pause");
    return 0;
}
