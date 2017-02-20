#include <iostream>

using namespace std;
	int question = 0;

int Search_Binary (int arr[], int left, int right, int key)
{
	int midd = 0;

	while (1)
	{
		midd = (left + right) / 2;
		question++;
		if (key < arr[midd])       
        	right = midd - 1;    
		else if (key > arr[midd])  
			left = midd + 1;	   
		else                       
			return midd;           
 
		if (left > right)          
			return -1;
	}	
}
 
int main()
{
	setlocale (LC_ALL, "Russian");
	
	const int SIZE = 15;
	int array[SIZE] = {};
	int key = 0;
    int q = 0; 
    	
    for (int i = 0; i < SIZE; i++) 
	{
		array[i] = i + 1;
		cout << array[i] << " | ";
	}
	
	cout << "\n\nВведите любое число: ";
	cin >> key;
	
	q = Search_Binary (array, 0, SIZE, key);
 
	if (q >= 0) 
		cout << "Минимальное количество вопросов: " << question << "\n\n";
	else
		cout << "В масиве нет такого числа!\n\n";
	
    system("pause");	
	return 0;
}
