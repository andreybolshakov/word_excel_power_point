#include <iostream>
#include <string>
using namespace std;
 
int main() {
	setlocale(LC_ALL, "rus");
    string S;
    size_t i = 0;
    cout << "Введите строку:" << endl;
    getline(cin, S);
    // удаляем пробелы в начале строки
    while (S[i] == ' ') S.erase(i, 1);
    // теперь будем удалять с конца
    i = S.size();
    while (i > 0) {
        --i;
        // удаляем все пробелы в конце
        if (i == S.size() - 1 && S[i] == ' ')
            while (S[i] == ' ')
                S.erase(i, 1);
        // пропускаем один для разделения слов
        if (S[i] == ' ')
        {
         S[i]='*';
         --i;	
		}
           
        // остальные удаляем
        while (S[i] == ' ')
            S.erase(i, 1);
    }
    cout << "Модифицированная строка: " << endl;
    cout << S << endl;
    return 0;
}
