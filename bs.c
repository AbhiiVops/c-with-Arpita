#include<stdio.h>
#include<conio.h>
int main() {
      // in Binary Search :
        // In the best case O(1) : the element will be found
        //  on the first try when mid == target {i.e,
        // It will make only 1 comparison }
        // In the worst case O(N) : It will make log base 2 👎
        // comparison only or simple log(n) comparison where n
        // is the size of the array

    // * In time complexity we ignore the constant that's why
    // we have simply written log(n) instead of log base 2 👎

        // Algorithm
        // 1. find the middle element
        // 2. if target > mid -> search in the right (considering the array is sorted in ascending order)
        // else if target <mid -> search in the left
        // if middle element == target element-> ans

        int arr[] = {2,3,4,16,34,55,67,89,100};

        int target,flag,mid=0;

        printf("Enter the key element to be searched : ");
        scanf("%d", &target);
        

           int start =0;
        int end= sizeof(arr)/sizeof(arr[0])-1;

        while(start<=end) {
            // find the middle element
//         int mid = (start+end) /2; // might be possible that (start+end) exceeds the range of integers.
             mid = start +(end-start) / 2;
            if(target> arr[mid]) {
                start = mid+1;
            }
           else if(target<arr[mid]) {
                end=mid-1;
            }
        //    else if (target ==arr[mid]) {   // --> we can also return as else { return mid };
                // ans found
            else {
            printf("The element found at index %d",mid);
            flag =1;
            break;
               
                
            }
             
            }

             if(flag !=1) {
                printf("Element not found");
             }


             

}
            
             
         
           
        