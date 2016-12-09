#include <iostream>
#include <list>




void show_list(std::list<int>& intList)
{
	std::cout << "The list contains: \n";
	for (int elem : intList)
	{
		std::cout << elem << "\n";
	}
}


void bubble_sort(std::list<int>& intList)
{
	int i, j, temp;
	int numLength = intList.size();
	for (i = 1; i <= numLength - 1; i++)
	{
		for (j = 0; j <= numLength - i - 1; j++)
		{
			if (intList[j] > intList[j + 1])
			{
				temp = intList [j];
				intList[j] = intList[j + 1];
				intList[j + 1] = temp;
			}
		}
	}

	return;
	//TODO sort the list from the smallest to the biggest number using bubble sort
}


void insertion_sort(std::list<int>& intList)
{
	int i, j, temp;
	int length = intList.size();
	for (j = 1; j < length; j++)   
	{
		temp = intList[j];
		for (i = j - 1; (i >= 0) && (intList[i] < temp); i--)   
		{
			intList[i + 1] = intList[i];
		}
		intList[i + 1] = temp;    
	}
	return;
	//TODO sort the list from the smallest to the biggest number using insertion sort


}
void quick_sort(std::list<int>& intList)
{
	//TODO sort the list from the smallest to the biggest number using quick sort with intermediary sort using insertion sort


}




void sort_list(std::list<int>& intList)
{
	bubble_sort(intList);
}


int main()
{

	std::list<int> intList =
	{
		4,
		2,
		3,
		6,
		5,
		1
	};
	std::cout << "Before the sort: \n";
	show_list(intList);

	sort_list(intList);

	std::cout << "After the sort: \n";
	show_list(intList);

	system("pause");
	return 0;
}