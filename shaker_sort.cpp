#include<iostream>
 #include<random>
 #include <bits/stdc++.h>

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
                    temp = arr[j];
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
                    temp = arr[l];
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
                    temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;			}
            }
            numOfElements-- ;

            for(int l = numOfElements - 1; l > i; l--)
                {
                if(arr[l] > arr[l-1]){
                        // descending lowest value to lowest index

                    int temp;
                    temp = arr[l];
                    arr[l] = arr[l-1];
                    arr[l-1] = temp;

                }
                }


            }
        }
}
