#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
void allCombinations(int arr[], int sol[], int start, int end,
                     int index, int r);

//This function calls allCombinations, which
//recursively prints all combinations
void printCombination(int arr[], int n, int r)
{
    // A temporary array to store all combinations one by one
    int sol[r];

    // Print all combination using temprary array 'sol[]'
    allCombinations(arr, sol, 0, n-1, 0, r);
}

/* arr[]  ---> Input Array
   sol[] ---> Temporary array to store current combination
   start & end ---> Staring and Ending indexes in arr[]
   index  ---> Current index in sol[]
   r ---> Size of a combination to be printed */
void allCombinations(int arr[], int sol[], int start, int end,
                     int index, int r)
{
    // Current combination is ready to be printed, print it
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ", sol[j]);
        printf("\n");
        return;
    }
    // replace index with all possible elements. The condition
    // "end-i+1 >= r-index" makes sure that including one element
    // at index will make a combination with remaining elements
    // at remaining positions
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        sol[index] = arr[i];
        allCombinations(arr, sol, i+1, end, index+1, r);
    }
}

// Driver program to test above functions
int main()
{
    int arr[] = {3, 4};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, n, r);
}
