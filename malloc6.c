/Find the first non-repeating element in a given array arr of N integers.
//Note: Array consists of only positive and negative integers and not zero.

#include<stdio.h>
#include<stdlib.h>
int firstNonRepeating(int arr[], int n)
{
    // Loop for checking each element
    for (int i = 0; i < n; i++) {
        int j;
        // Checking if ith element is present in array
        for (j = 0; j < n; j++)
         {   if (i != j && arr[i] == arr[j])
                break;
         }

        if (j == n)
            return arr[i];
    }
    return -1;
}


int main()
{
    int n,r;
    int *p;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    p=(int*)malloc(sizeof(int)*n);

    printf("Enter elements in array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    r=firstNonRepeating(p,n);
    printf("first non-repeating number is %d\n",r);

    return 0;
}