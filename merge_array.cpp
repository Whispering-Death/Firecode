// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int* merge(int arr_left[],int sz_left, int arr_right[], int sz_right){
    /* declaring an array using dynamic allocation of memory. 
        Merged the given two arrays into this third output Array */
    int* arr_merged = new int [sz_left+sz_right];
    // Add your code below this line. Do not modify any other code.
    int k=0;
    
    int i=0;
    int j=0;
    
    while(i< sz_left && j< sz_right)
    {
        if(arr_left[i] < arr_right[j])
            arr_merged[k++]= arr_left[i++];
        else
            arr_merged[k++]= arr_right[j++];
    }
    
    while(i<sz_left)
        arr_merged[k++]= arr_left[i++];
    
    while(j<sz_right)
        arr_merged[k++]= arr_right[j++];



    // Add your code above this line. Do not modify any other code.
    /* retun the merged array */
    return arr_merged;
}