// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#include <algorithm>
int* selection_sort_array(int arr[], int size){
    


    // Add your code above this line. Do not modify any other code.
    /* save the sorted array in int arr[] and return the same array */
    
    
    for(int i=0;i<size-1;++i)
    {
        int min_ele=arr[i];
        int min_pos=i;
        for(int j=i+1;j<size;++j)
        {
            if(arr[j] < min_ele)
            {
                min_ele= arr[j];
                min_pos=j;
            }
        }
        swap(arr[i],arr[min_pos]);
    }
    return arr;
}