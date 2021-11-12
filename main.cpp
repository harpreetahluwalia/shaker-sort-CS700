#include<iostream>
 #include<random>
 #include <bits/stdc++.h>

using namespace std;



int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
    clock_t start, end;

	int arr1[n];
	int arr2[n];
    srand(time(0));
	for(i = 0; i < n; i++)
	{
		arr1[i] = rand() % n;
		arr2[i] = arr1[i];
	}

	cout<<"Ascending Sorting in progress ... "<<endl;
    start = clock();
	Shaker_Sort(arr1, n, "ascending");
    end = clock();

    double total_time;
    total_time = double(end - start) / double(CLOCKS_PER_SEC);

    cout<<"\nArray Size : "<<n;
    cout << "\nExecution time for sort in ascending order : " << fixed << total_time << setprecision(5);
    cout << " sec " << endl;



    cout<<"\nDescending Sorting in progress ... "<<endl;
    start = clock();
	Shaker_Sort(arr1, n, "descending");
    end = clock();

    total_time = double(end - start) / double(CLOCKS_PER_SEC);
    cout<<"\nArray Size : "<<n;
    cout << "\nExecution time for sort in descending order : " << fixed << total_time << setprecision(5);
    cout << " sec " << endl;

	return 0;
}
