#include<iostream>
using namespace std;
void reverse(int arr[],int n) {
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        /* code */
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
void printArray(int arr[],int n) {
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
}
int main() {
    int arr[6] = {4,6,9,2,3,5};

    reverse(arr,6);

    printArray(arr,6);
}