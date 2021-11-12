/**
 *  @file   main.cpp
 *  @brief  It is the main program file. It drives the whole application and interacts with the user inputs.
 *  @author Harpreet Singh
 *  @date   10/11/2021
 ***********************************************/

/**
 @mainpage Shaker Sort Time Exectuin
 @author Harpreet Singh
 @date


The program prompt the user to determine the size of the array. It calculates the execution for time for both
ascending and descending order by implementing shaker sort algorithm.

*/


// Including required liberaries
#include<iostream>
#include<random>
#include <bits/stdc++.h>
#include<conio.h>


// including header file
#include "shaker_sort.h"

using namespace std;


/**
 * Module : main\n
 * Purpose : It interacts with the user and takes inputs from user according to their choices and drives the program accordingly.
 * Author : Harpreet Singh\n
 * Date of creation : 10/11/2021
 * Parameters : none
*/
int main()
{

    cout<<"\n**************************  ASSIGNMENT 4 ******************************\n";
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";  //taking user input for array size
	cin>>n;
    clock_t start, end;

	int arr1[n];            // creating 2 arrays for sorting both ascending and descending order
	int arr2[n];
    srand(time(0));
	for(i = 0; i < n; i++)
	{
		arr1[i] = rand() % n;           // generating random number and storing to array
		arr2[i] = arr1[i];
	}

	cout<<"\nAscending Sorting in progress ... "<<endl;
    start = clock();
	Shaker_Sort(arr1, n, "ascending");              // calling shaker_sort() method for sorting with ascending parameter
    end = clock();

    double total_time;
    total_time = double(end - start) / double(CLOCKS_PER_SEC);

    cout<<"Array Size : "<<n;
    cout << "\nExecution time for sort in ascending order : " << fixed << total_time << setprecision(5);
    cout << " sec " << endl;



    cout<<"\nDescending Sorting in progress ... "<<endl;
    start = clock();
	Shaker_Sort(arr1, n, "descending");      // calling shaker_sort() method for sorting with descending parameter
    end = clock();

    total_time = double(end - start) / double(CLOCKS_PER_SEC);
    cout<<"Array Size : "<<n;
    cout << "\nExecution time for sort in descending order : " << fixed << total_time << setprecision(5);
    cout << " sec " << endl;
    getch();
	return 0;
}
