#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s, ss, l, c, r;
    cout<<"Input string with using english:\n";
    getline(cin,s);//читаем строку вместе с пробелами
 
    //разобъЄм строку s на три строки: l(left), c(centre), r(right) по индексам вхождени€ знака '?'
    int k = s.find('?');//находим индекс первого вхождени€ '?' в строку s
                if (k < 0)
                {
                    cout << "invalid input" << endl;
                    return 0;
                }
    l = s.substr(0,k+1);//лева€ часть строки s вместе с '?'
    ss = s.substr(k+1,s.length());//права€ часть часть строки s после '?'
 
    k = ss.find('?');//находим индекс '?' в строке ss
                if (k < 0)
                {
                    cout << "invalid input" << endl;
                    return 0;
                }
    r = ss.substr(k, ss.length());//права€ часть часть строки ss вместе с '?'
 
    c = ss.substr(0, k);//средн€€ часть строки s
    cout << s << " " << l << " " << c << " " << r << endl;
 
    //удал€ем пробелы в строкe с(centre)
    ss = "";
    for (int i = 0; i < c.length(); i++)
        if (c[i] != ' ')
            ss += c[i];
    
    //"склеиваем" три части строки
    s = l + ss + r;
 cout<<"String is after doing action:\n";
    cout << s << endl;
    system("pause");
    return 0;
}
