/**
\file TMP1.cpp 
*/

/**
\fn void qSort(int A[], int high, int low) 
@function void qSort ����������� ������� ��������� ������� ����������. ����� ��� ������� ���������.
@param A[] - ������������� ������.
@param high - ����� �������� ������� ����� �������.
@param low - ����� �������� ������ ����� �������.
*/

#include <iostream>
#include <time.h>
using namespace std;

void qSort(int A[], int high, int low) 
{
	
	int i = low; /// ���������� �������� low ������� ����� "��������" � "������� ��������" ����������.
	int j = high; /// ���������� �������� high ������� ����� "��������" � "������� ��������" ����������.
	int mid = A[(high+low)/2]; /// ����� "��������" ��������
	 do {
          while(A[i] < mid) ++i;  /// ����� �������� ��� �������� � ������� �����
          while(A[j] > mid) --j;  /// ����� �������� ��� �������� � ������� �����
          if(i <= j)
		  {           
              /// ����� ��������� �������:
              int temp = A[i];
              A[i] = A[j];
              A[j] = temp;
              /// ������� � ��������� ���������:
              i++; j--;
          }
      } while(i < j);
	 /// ���� �������� ������ �� ��������� � ���������� �����������, �� ���������� ������� �� ���������� ������ � �������� ���������� � �������� ������������ ��������. 
      if(low < j) qSort(A, j, low);
      if(i < high) qSort(A, high, i);
}

int main()
{
	for(int i = 0;i<10;i++)
	{
		int s;
		cin >> s;
		if(s == 0)
			break;
	srand(time(NULL)); /// �������� ����� ��������� ��������������� ����� � ���������� �������. ������������ ���������� <time.h>.

	int Array[100]; /// ���������� �������.
	for(int c=0;c<100;c++)
		Array[c] = 1+rand()%99; /// ���������� ������� ���������� �������.
	
	qSort(Array,99,0); /// ���������� �������.

	for(int c=0;c<100;c++)
		cout << Array[c] << " ";
	/// ����� ������������� �������.

	cout << endl;
	}
}
