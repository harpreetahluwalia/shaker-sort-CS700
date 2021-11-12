
/**
 *  @file   shaker_sort.cpp
 *  @author Harpreet Singh
 *  @brief  It implements the shaker sort algorithm that is bi-directional bubble sort
 *  @date   10/11/2021
 ***********************************************/

#include<iostream>
using namespace std;

 //#include<random>
 //#include <bits/stdc++.h>



/**
 * Method : Shaker_Sort()
 * @author Harpreet Singh
 * @date 10/11/2021
 * @brief It implements the shaker sort algorithm that is bi-directional bubble sort
 * @param arr[] array which needs to be sorted
 * @param numOfElements It represents the total number elements
 * @param s It represents whether is ascending or descending
*/
void Shaker_Sort(int arr[], int numOfElements, string s)
{
	if (s == "ascending")       // If sort is called for ascending order
    {
        for(int i = 0; i < numOfElements; i++)
        {

            for(int j = i+1; j < numOfElements; j++)
            {
                if(arr[j] < arr[j-1]){
                        // ascending highest value to highest index
                    int temp;
                    temp = arr[j];      // swapping arr[j] and arr[j-1]
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
            }
            numOfElements-- ;

            for(int l = numOfElements - 1; l > i; l--)
            {
                if(arr[l] < arr[l-1]){
                    // descending lowest value to lowest index
                    int temp;
                    temp = arr[l];      // swapping arr[l] and arr[l-1]
                    arr[l] = arr[l-1];
                    arr[l-1] = temp;
                }
            }
        }
    }
    else if( s == "descending"){        // If sort is called for descending order

        for(int i = 0; i < numOfElements; i++)
        {
            for(int j = i+1; j < numOfElements; j++)
            {
                if(arr[j] > arr[j-1]){
                                    // ascending highest value to highest index
                    int temp;
                    temp = arr[j];          // swapping arr[j] and arr[j-1]
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;			}
            }
            numOfElements-- ;

            for(int l = numOfElements - 1; l > i; l--)
                {
                if(arr[l] > arr[l-1]){
                        // descending lowest value to lowest index

                    int temp;
                    temp = arr[l];          // swapping arr[l] and arr[j-1]
                    arr[l] = arr[l-1];
                    arr[l-1] = temp;

                }
                }


            }
        }
}
