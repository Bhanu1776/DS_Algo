#include<bits/stdc++.h>
using namespace std;

//? All sorting algorithms

//* Selection Sort ==> "Select minimum & and swap"  --> O(n^2)
void SelectionSort(vector<int> & arr, int n){
  for(int i = 0; i<n-1; i++){
    for(int j = i+1; j<n; j++){
      if(arr[j]<arr[i]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

//* Bubble sort ==> "Push the maximum to the last by adjacent swap" --> O(n^2)
void BubbleSort(vector<int> &arr, int n){
  for(int i = n-1; i>=0; i--){
    for(int j = 0; j<i; j++){
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

//* Insertion Sort ==> "Take an element & place it in the correct order" --> O(n^2)
void InsertionSort(vector<int> &arr, int n){
  for(int i = 0; i<n; i++){
    int j = i;

    while(j>0 && arr[j-1] > arr[j]){
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
      j--;
    }
  }
}


//* Merge Sort - dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array. --> O(n logN)

void merge(vector<int> &arr, int s, int mid, int e){
  vector<int> temp;                             // Using an extra space --> S.C ==> O(n)

  int left = s;
  int right = mid+1;

  while(left<=mid && right<=e){
    if(arr[left] < arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }

  while(left<=mid){
      temp.push_back(arr[left]);
      left++;
  }
  while(right<=e){
      temp.push_back(arr[right]);
      right++;
  }

  //! Yeh dhyaan se yaad rakh!!
  for(int i = s; i<=e; i++){
    arr[i] = temp[i-s];
  }
}

void mergeSort(vector<int> & arr, int s, int e){
  if(s>=e)  return;                              // Base case
  
  int mid = (s+e)/2;

  mergeSort(arr, s, mid);
  mergeSort(arr, mid+1, e);
  merge(arr, s, mid, e);
}


//* Quick sort ==> It is based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array. --> O(n logN)
// Step: 1) "Pick a pivot and place it in its correct place in the sorted array."
//       2) Shift smaller elements(i.e. Smaller than the pivot) on the left of the pivot and larger ones to the right.

int partition(vector<int> &arr, int s, int e){
  int pivot = arr[s];
  int i = s;
  int j = e;

  while(i<j){
    while(arr[i] <= pivot && i<e){              // From here we will be getting an element which is greater than pivot
      i++;
    }
    while(arr[j] >= pivot && j>s){              // From here we will be getting an element which is smaller than pivot
      j--;
    }
    if(i<j) swap(arr[i], arr[j]);               // Sorting the left and right side (smaller - pivot - greater) in this way
  }
  swap(arr[s], arr[j]);                         // Swapping the actual pivot element to the right position
  return j;                                     // Returning the pivot element index
}

void quickSort(vector<int> &arr, int s, int e){
  if(s<e){                                      // In an array there has to be more than one index, then only we can perform sorting
    int partitionIndex = partition(arr, s, e);
    quickSort(arr, s, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, e);
  }
}

int main(){

 vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;

    // SelectionSort(arr, n);
    // BubbleSort(arr, n);
    // InsertSort(arr, n);
    // mergeSort(arr, 0, n - 1);
    quickSort(arr, 0, n - 1);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;

    return 0 ;
}