#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include "quicksort.h"
using namespace std;

double regMeasureTime(QuickSort<int> l)
{
	double time = 0.0;
	
	cout << "Flag 1" << endl;
	for (int i = 0; i < 10000; i++)
	{
		int temp = rand() % 1001;
		l.inputData(temp);
	}
	cout << "Flag 2" << endl;

	clock_t start = clock();
	l.quicksort(0, 10000);
	clock_t end = clock();

	time = (double)(end - start) / ((double)CLOCKS_PER_SEC);
	return time;
}

// double randMeasureTime(QuickSort<int> l, int n)
// {
// 	cout << "Flag 3" << endl;
// 	for (int i = 0; i < 10000; i++)
// 	{
// 		int temp = rand() % 1001;
// 		l.inputData(temp);
// 	}
// 	cout << "Flag 4" << endl;

// 	int ITERATION = 2000000 / n;
// 	clock_t start = clock();
// 	for(int c = 0; c < ITERATION; ++c)
// 	{
// 		l.randQuicksort(0, 10000);
// 	}
// 	clock_t end = clock();
// 	return (double)(end - start) / ((double)CLOCKS_PER_SEC * ITERATION);
// }


int main(int argc, char *argv[])
{
	// list<int> ** a = new List<int> * [2];
	// a[0] = new QuickSort<int>;
	// a[1] = new QuickSort<int>;
	QuickSort<int> first;
	QuickSort<int> second;
	double temp = 0.0;

	temp = regMeasureTime(first);

	cout << "Time: " << temp << endl;
	// for(int j = 2000; j < 12000; j += 2000)
	// {
	// 	temp = 1000.0 * regMeasureTime(first, j);
	// 	std::cout << "Regular" << " with " << j << " sorts: " << temp << " ms" << std::endl;
	// }

	// for (int i = 2000; i < 12000; i += 2000)
	// {
	// 	temp = 1000.0 * randMeasureTime(second, i);
	// 	std::cout << "Random" << " with " << i << " sorts: " << temp << " ms" << std::endl;
	// }

	// int input;
	// cout << "Array Size: ";
	// cin >> input;
	// QuickSort<int> user(input);
	// for (int i = 0; i < input; i++)
	// {
	// 	int temp = rand() % 1001;
	// 	user.inputData(temp);
	// }
	// cout << "Array is: " << endl;
	// user.print();
	// user.quicksort(0, input);
	// cout << "Sorted Array is: " << endl;
	// user.print();
	return 0;
}