#include <cstdlib>
#include <iostream>

using namespace std;

// ������� ����������
void sortArray (int a[],const int n)
        {
            // ���� �� ����������� ��� ��������� ���������� j � i � ��� �����
        	for(int i=0;i<n;i++)
        	 		for(int j=0;j<n;j++)
                		{
                			if (a[i]<a[j])
                				{
                                  // ���� �� ����������� ��������� ���������� o
                		               int o=a[i];
                                               a[i]=a[j];
                                                a[j]=o;
                				}
                 		} 
                	 
        }
        
int main(int argc, char *argv[])
{
    //����������� �� �����������
    setlocale(LC_ALL,"rus");
	const int n=5;
	int a[n];
	cout<<"������� ������ �� 5 ���������:\n";
	for(int i=0;i<n;i++)
    	{
    			
               cin >> a[i];
    		
    	};
    	
	cout<<endl;
	cout<<"�������� ������:\n ";
		for(int i=0;i<n;i++)
    	{		
    		cout<<a[i]<<" ";
    	};
	// ���������� �� �����������
	sortArray (a, n);
	cout<<"\n��������������� ������:\n ";
	//�����
	
		for(int i=0;i<n;i++)
        	{
        		
        		cout<<a[i]<<" ";
        	}
        	cout<<endl;
	
    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
