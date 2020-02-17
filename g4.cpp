#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
int main()
{   setlocale(LC_ALL, "rus");
    std::string s;
     std::cout << "������� ������:\n";
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
    std::cout<<"���������� ��������� �������� � ��������� ���� � ������ ����� �������� � ������:\n";
    std::cout << "��������� �����: " << p1 << '%' << std::endl;
    std::cout << "�������� �����: " << p2 << '%' << std::endl;
    std::cout << "������ �������: " << 100.0 - (p1 + p2) << '%' << std::endl;
    std::cin.get();
    return 0;
}
