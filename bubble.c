#include<stdio.h>

void swap(int *xp, int *yp) 
{ 

    int temp = *xp; 

    *xp = *yp; 

    *yp = temp; 
} 


void bubbleSort(int arr[], int n) 
{ 

   int i, j; 
   int count=0;
 
   for (i = 0; i < n-1; i++)    
    { 
     for (j = 0; j < n-i-1; j++)  
     {
count++;
        
       if (arr[j] > arr[j+1]) 
        {
          swap(&arr[j], &arr[j+1]); 

          
       }
    }
  }
  printf("count=%d \n",count);
}


  
void printArray(int arr[], int size) 
{ 

    int i; 
    int count=0;
     for (i=0; i < size; i++) 
       printf("%d \n", arr[i]); 

} 

  
int main() 
{ 

    int arr[10];
    int i,n;
    printf("Enter the size:\n");
     scanf("%d",&n);
    printf("Enter the no. of elements:\n");
     for(i=0;i<n; i++)
      {
         scanf("%d",&arr[i]);
      }

    bubbleSort(arr, n); 

    printf("Sorted array: \n"); 

    printArray(arr, n); 

    return 0; 
} 


