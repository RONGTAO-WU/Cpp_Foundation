#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<typename T>

void swap(T a[], T b[])
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>

void mysort(T arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		int max = i;
		for (int j = i + 1; j < num - 1; j++)
		{
			if (arr[max] > arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			swap(arr[max], arr[i]);
		}
	}
}

template<typename T>
void print(T arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main3()
{
	char arr1[] = { "bcaedf" };
	int num1 = sizeof(arr1) / sizeof(arr1[0]);
	mysort(arr1,num1);
	print(arr1, num1);


	int arr2[] = { 5,6,7,2,3,4,1,9,8 };
	int num2 = sizeof(arr2) / sizeof(arr2[0]);
	mysort(arr2, num2);
	print(arr2, num2);

	return 0;
}
