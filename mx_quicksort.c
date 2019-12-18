#include "libmx.h"

static int diff(char *s1, char *s2);
static void swap(char **s1, char **s2, int *count);

int mx_quicksort(char **arr, int low, int high) {
    int count = 0;
    int middle = low + (high - low) / 2;
    char *pivot = arr[middle];
    int i = low;
    int j = high;
    
    if (arr == NULL || *arr == NULL)
        return -1;
    else if (low >= high)
        return 0;
    while (i <= j) {
        while (diff(arr[i], pivot) < 0)
            i++;
        while (diff(arr[j], pivot) > 0)
            j--;
        if (i <= j) {
            swap(&arr[i], &arr[j], &count);
            i++;
            j--;
        }
    }
    if (low < j)
        count += mx_quicksort(arr, low, j);
    if (high > i)
        count += mx_quicksort(arr, i, high);
    return count;
}

static int diff(char *s1, char *s2) {
    return mx_strlen(s1) - mx_strlen(s2);
}

static void swap(char **s1, char **s2, int *count) {
    char *p = *s1;

    if (diff(*s1, *s2) == 0)
        return; 
    *s1 = *s2;
    *s2 = p;
    (*count)++;
}
