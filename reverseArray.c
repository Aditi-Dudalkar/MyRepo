#include<stdio.h>
 
void rvereseArray(int a[], int beg, int end)
{
    int temp;
    while (beg < end)
    {
        temp = a[beg];  
        a[beg] = a[end];
        a[end] = temp;
        beg++;
        end--;
    }  
}    
 
void printArr(int a[], int n)
{
  int i;
  for (i=0; i < n; i++)
    printf("%d ", a[i]);
 
  printf("\n");
}
 
int main()
{
    int n;
    int a[20];
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0 ; i<n ; i++){
    	scanf("%d", &a[i]);
	}
    printArr(a, n);
    rvereseArray(a, 0, n-1);
    printf("Reversed array is \n");
    printArr(a, n);   
    return 0;
}
