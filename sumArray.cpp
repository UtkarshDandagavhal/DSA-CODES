// to find the sum of array
#include<iostream>
using namespace std;
int sumArray(int num[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum = sum + num[i];
    }
    // return the value
    return sum;
    
}
int main() {
    int size;
    cout<<"Enter the size of an array: "<< endl;
    cin>> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>num[i];
    }
    cout<<"The max value is: "<< sumArray(num,size) <<endl;

}
