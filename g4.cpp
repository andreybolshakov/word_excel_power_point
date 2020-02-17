#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
int main()
{   setlocale(LC_ALL, "rus");
    std::string s;
     std::cout << "Введите строку:\n";
    std::getline(std::cin, s);
    int up = 0, lw = 0;
    for(std::string::const_iterator i = s.begin(); i != s.end(); ++i){
        if(isupper(*i))
            ++up;
        else if(islower(*i))
            ++lw;
    }
 
    int n = s.length();
    double p1 = static_cast<double>(up) / n * 100.0;
    double p2 = static_cast<double>(lw) / n * 100.0;
    std::cout << std::setprecision(4);
    std::cout<<"Процентное отношение строчных и прописных букв к общему числу символов в тексте:\n";
    std::cout << "Прописные буквы: " << p1 << '%' << std::endl;
    std::cout << "Строчные буквы: " << p2 << '%' << std::endl;
    std::cout << "Другие символы: " << 100.0 - (p1 + p2) << '%' << std::endl;
    std::cin.get();
    return 0;
}
