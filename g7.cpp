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
            return i; // else не нужен, функци€ и так вернет -1 если не найдет совпадений
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

    cout << "¬ведите массив (5 элементов):";
    for(int i = 0; i < ARRAY_SIZE; i++) // массив нужно заполн€ть в цикле
    { 
       cin >> a[i];
    }

    cout << "¬ведите элемент дл€ поиска: ";
    cin >> key;
    result = Search(a, ARRAY_SIZE, key); // второй параметр - размер массива, не путайте пор€док

    if(result == -1) 
    {
        cout << "-1\n";
    }
    else 
    {
        cout << "»ндекс искомого элемента в массиве: " << result << std::endl;
    }
    system("pause");
    return 0;
}
