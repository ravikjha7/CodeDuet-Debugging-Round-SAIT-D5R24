// CodeDuet 2k23 Round 3


/**
 * The function maxValue returns the maximum value in the array.
 *
 * @param arr This is the array that we want to find the maximum value in.
 * @param size the number of elements in the array
 *
 */
#include <bits/stdc++.h>
using namespace std;

int maxValue(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        // arr++;
    }
    return max;
}

int main()
{
    int arr[] = {10, 20, 5, 30, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = maxValue(arr, size);

    cout << "The maximum value in the array is " << max << endl;

    return 0;
}
