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
	//TODO sort the list from the smallest to the biggest number using bubble sort
}


void insertion_sort(std::list<int>& intList)
{
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