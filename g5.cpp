#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    setlocale( LC_ALL,"Russian" );
    int i=0, k=0;
    string s;
    cout <<"String:\n";
    getline(cin, s);
    
    while (s[i])  
    {    
    if (s[i]==' ') k++;
    else if (s[i]=='.') break;
    i++;
    }
    cout<<"Количество слов в строке: \n";
    cout <<"count="<<k+1<<"\n";
    
system("pause");
return 0; 
}
