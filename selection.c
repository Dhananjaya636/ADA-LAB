#include <stdio.h> 

  

void swap(int *xp, int *yp) 
{ 

    int temp = *xp; 

    *xp = *yp; 

    *yp = temp; 
} 

  

void selectionSort(int arr[], int n) 
{ 
    int count=0;
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 

    { 
        min_idx = i; 

        for (j = i+1; j < n; j++) 

          if (arr[j] < arr[min_idx]) 

            min_idx = j; 

         swap(&arr[min_idx], &arr[i]); 
       count++;

    } 
     printf("count=%d\n",count);
} 

  


void printArray(int arr[], int size) 
{ 

    int i; 

    for (i=0; i < size; i++) 

     printf("%d ", arr[i]); 

    printf("\n"); 
} 

  


int main() 
{ 

    int arr[10];

    int n,i ;
    printf("Enter the size:\n");
      scanf("%d",&n);
    printf("Enter the elements:");
     for(i=0;i<n;i++)
      {
        scanf("%d",&arr[i]);
      }

    selectionSort(arr, n); 

    printf("Sorted array: \n"); 

    printArray(arr, n); 

    return 0;
}

    

