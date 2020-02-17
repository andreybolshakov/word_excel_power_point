#include <cstdlib>
#include <iostream>

using namespace std;

// функция сортировки
void sortArray (int a[],const int n)
        {
            // один из недостатков две временные переменные j и i и два цикла
        	for(int i=0;i<n;i++)
        	 		for(int j=0;j<n;j++)
                		{
                			if (a[i]<a[j])
                				{
                                  // один из недостатков временная переменная o
                		               int o=a[i];
                                               a[i]=a[j];
                                                a[j]=o;
                				}
                 		} 
                	 
        }
        
int main(int argc, char *argv[])
{
    //упорядочить по возрастанию
    setlocale(LC_ALL,"rus");
	const int n=5;
	int a[n];
	cout<<"Введите массив из 5 элементов:\n";
	for(int i=0;i<n;i++)
    	{
    			
               cin >> a[i];
    		
    	};
    	
	cout<<endl;
	cout<<"Исходный массив:\n ";
		for(int i=0;i<n;i++)
    	{		
    		cout<<a[i]<<" ";
    	};
	// сортировка по возрастанию
	sortArray (a, n);
	cout<<"\nОтсортированный массив:\n ";
	//вывод
	
		for(int i=0;i<n;i++)
        	{
        		
        		cout<<a[i]<<" ";
        	}
        	cout<<endl;
	
    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
