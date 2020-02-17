#include<iostream>
#include<string>
using namespace std;
bool isSimple(int n)
{
    for(int i = 2; i <= n / 2; i++) 
        if( !(n % i) )
            return 0;
    return 1;
}
 
void primeNumbersInArray (int a[] , const int n)
{
    for (unsigned i = 0; i < n; ++i)
        if ( isSimple(a[i]) )
            cout << a[i] << "\n";
}
int main()
{   
setlocale(LC_ALL,"rus");
const int n=20;
    int a[n];
	cout<<"Введите массив:"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"Простые числа в массиве:\n";
primeNumbersInArray(a,n);
system("pause");
return 0;
}
