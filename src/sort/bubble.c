/**
 * int a[] - array of unsorted ints
 * int size - size of the array
 */
void bubbleSort(int a[], int size) {
  for(int i = 0; i < size; ++i) {
    for(int x = 0; x < size-1-i; ++x) {
      int temp;
      if(a[x] > a[x+1]) {
        temp = a[x+1];
        a[x+1] = a[x];
        a[x] = temp;
      }
    }
  }
}

/**
 * int a[] - array of unsorted ints
 * int size - size of the array
 */
void selectionSort(int a[], int size) {

}
