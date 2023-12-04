#include <stdio.h>
#include <time.h>

int binarySearch(int arr[], int size, int key) {
  int low = 0;
  int high = size - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int arr[] = {1, 3, 5, 7, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 5;

  clock_t start = clock();
  int index = binarySearch(arr, size, key);
  clock_t end = clock();

  double elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;

  printf("The index of %d is %d.\n", key, index);
  printf("Elapsed time: %f seconds.\n", elapsedTime);

  return 0;
}
