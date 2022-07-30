#include <iostream>

using namespace std;

void scan(int *arr, int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void print(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void insertion(int *arr, int size){
    if(size <= 1)return;
    int i, maxIndex = 0;
    for(i = 0; i < size; i++){
        if(arr[i] > arr[maxIndex]) maxIndex = i;
    }

    //print(arr, size);
    swap(&arr[maxIndex], &arr[size-1]);
    insertion(arr, size - 1);
}

int main(){
    int *arr;
    int size;
    cout << "Enter the size of the array - ";
    cin >> size;
    arr = (int*)malloc(size*sizeof(int));
    cout << "Enter the elements of the array - ";
    scan(arr, size);
    print(arr, size);
    insertion(arr, size);
    print(arr, size);
}