#include <iostream>
#define N 10    // Размер массива
 
using namespace std;
 
int MaxElementIndex(int[]);
 
int main()
 {  setlocale(LC_ALL,"rus");
    int mas[N];
    cout<<"Введите массив:"<<endl;
	for (int i=0;i<N;i++)
	{
		cout<<"mas["<<i<<"]= ";
		cin>>mas[i];
	}
	
    cout <<"Индекс максимального элемента масиива: \n"<< MaxElementIndex(mas)<<"\n";
 
    system("pause");
    return 0;
 }
 
int MaxElementIndex(int mas[])
{
    int max_index = 0;
    
    for(int i=0; i<N; i++)
        if(i>0 && mas[max_index]<mas[i])
            max_index = i;
 
    return max_index;
}
