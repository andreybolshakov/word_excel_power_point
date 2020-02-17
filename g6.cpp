#include <iostream>
#include <string>
using namespace std;
int main()
{ 
setlocale(LC_ALL, "rus");
// нахождение числа вхождений символа в строке
string s;
cout<<"Строка: \n";// строка символов
getline(cin,s);
char a; // заданный символ
cout<<"Символ:\n";
cin>>a;
int i;
int k; // результат - число вхождений символа a в строке S
k = 0; // в начале обнулить счетчик k
double n = s.length();
for (i=0; i<n; i++)
{
 if (s[i]==a)
      {  k++;} // увеличить счетчик на 1	
}    
double chastota=k/n;
cout<<"Частота встречаемости Символ равна "<<chastota*100<<"%"<<endl;
cout<<"Количество Символ в строке равно "<<k<<endl;
system("pause");
return 0;
}

