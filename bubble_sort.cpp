// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#include<algorithm>

int* bubble_sort_array(int arr[], int size){
    


    // Add your code above this line. Do not modify any other code.
    /* save the sorted array in int arr[] and return the same array */
    
    for(int i=0;i<size-1;++i)
    {
        for(int j=0;j<size-1;++j)
        {
            if(arr[j]> arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}