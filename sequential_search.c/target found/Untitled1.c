#include <stdio.h>
int main()
{
int arr[] = {10, 15, 25, 30, 40};
int n =5;
int target = 25;
int i;
int found =0;
int comparisons = 0;

for (i = 0; i < n; i++)
{
    comparisons++;

     if(arr[i]==target)
     {

        printf("Element %d found at index %d\n ", target, i);
        found = 1;

        break;
     }

}

    if( found == 0)
{
    printf("Element not found\n");
}

     printf("number of comparisons; %d\n",

       comparisons);

        return 0;
 }


