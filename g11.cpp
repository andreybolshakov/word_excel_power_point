#include <iostream>
#define N 10
using namespace std;
 
int MinElementIndex(int[]);
 
int main()
 {
 	setlocale(LC_ALL,"rus");
    int mas[N];
    cout<<"¬ведите массив:"<<endl;
	for (int i=0;i<N;i++)
	{
		cout<<"mas["<<i<<"]= ";
		cin>>mas[i];
	}
	cout <<"»ндекс минимального элемента масиива: \n"<< MinElementIndex(mas)<<"\n\n";
    system("pause");
    return 0;
 }
 
int MinElementIndex(int mas[])
{
    int min_index = 0;
    
    for(int i=0; i<N; i++)
        if(i>0 && mas[min_index]>mas[i])
            min_index = i;
 
    return min_index;
}
