
/*the following function uses the variables
1. arr for an array
min, max,median and avg for the values of minimum, maximum and average and median resp.
the flow of control is done by the loop where the for loop extracts the data from array from the given position, and is simultaneously compared with the values for a minimum or maximum and is added to avg as the total of all values divided by the total numbers gives average
*/
 print_statistics()
 {
   int arr[]={10,8,21,45,78,788,96,31,69,11,1,0,2,999, 221}; // initialising an array of size 15 for ease of input.
   int min,max,median;
   float avg=0;
   min=arr[0]; //this is done so that the minimum value is recorded
   for (int i=0, i<15,i++) // array for maximum value
   {
     if (arr[i]>max)
       max=arr[i];
     
     if(arr[i]<min)
       min= arr[i];
     
     avg=avg+arr[i];
   }
   float avg1=avg/15; // average of the array elements.
      
 }
print_array() /* this is used to print the array, the variables previously declared are invoked here again*/
{
  printf("the elements of array are:")
  for(i=0,i,15,i++)
  printf(arr[i]);
}
find_maximum()/*prints the maximum value*/
{
   printf("max value:%d", max);
   return max;
}
find_minimum() /* prints the minimum value*/
{
 
   printf("min value:%d", min);
return min;
}
void find_mean()/*prints the mean*/
{
  
   printf("average:%f",avg1);
  return avg1;
}
int sort_array() /*using bubble sort to arrange the array, values being defined earlier
here we take 3 variables abd compare the values, if the value of next variable is lesser than the previous, the position is swapped with the help of a third variable*/
{
  void swap(int x, int y) 
{ 
    int temp = x; 
    x = y; 
    y = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n");
}
  find median()
  {
    median= arr[7]; // since array was pre defined to size 15, median= (n+1)/2
    printf( "median is: %d", median);
    return median;
  }
}


   
