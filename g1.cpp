#include <iostream>
using namespace std;
int main()
{
 setlocale(LC_ALL, "rus");
int z = 0, sum = 0;
int N;
cout<<"������� ����� �������"<<endl;
cin>>N;
int arr[N];
cout<<"������� �������� �������"<<endl;
for(int i;i<N;i++)
{
	cout<<"arr["<<i<<"]= ";
	cin>>arr[i];
}
for (int i = 0; i < N; i++) { //N - ����� �������
 if (z > 0) sum += arr[i];
 if (arr[i] == 0) {
 z++;
 if (z > 1) break;
 }
}
if (z < 2) sum = 0;
cout<<"����� ��������� ����� ����� ������� ������: \n";
cout << "sum = " << sum << endl;
    return 0;
}
