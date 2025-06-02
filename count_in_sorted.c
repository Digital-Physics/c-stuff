#include <stdio.h>

// count in sorted
/* count the number of elements in a sorted list
in log(n) time, where n is the size of the sorted list*/
// Binary search to find the leftmost occurrence of target
int findLeftmost(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    printf("loop\n");
    
    while (low <= high) {
        printf("%d \t %d\n", low, high); // %d is an int, \t is a tab, \n is a new line
        int mid = (high + low) / 2;  // division truncates (or rounds down when positive)
        
        if (arr[mid] < target) {
            low = mid + 1; 
        } else if (arr[mid] >= target) {
            high = mid - 1;
        }
    }
    
    return low;
}

int findRightmost(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    printf("loop\n");
    
    while (low <= high) {
        printf("%10d\t%20d\n", low, high); // notice the effects of the slightly different formatting
        int mid = (high + low) / 2;  // division truncates (or rounds down when positive)
        
        if (arr[mid] <= target) {
            low = mid + 1; 
        } else if (arr[mid] > target) {
            high = mid - 1;
        }
    }
    
    return low;
}

int main(){
    // test example run on function
    printf("started\n");
    int list1[] = {1, 2, 2, 2, 3, 5, 7, 11};

    int left = findLeftmost(list1, 8, 2);
    int right = findRightmost(list1, 8, 2);
    printf("left: %d\n", left);
    printf("right: %d\n", right);

    int total = right - left;

    printf("number of targets: %d\n", total);

    return 0;
}