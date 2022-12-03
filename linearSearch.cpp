#include<iostream>
using namespace std;
bool Searching(int arr[], int size, int key) {
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main() {
    int arr[10] = {1,-4,3,2,0,5,6,7,8,9};
    int key;
    cout<<"find the key of array: "<<endl;
    cin>>key;

    bool found =  Searching(arr,10,key);
    if (found)
    {
        /* code */
        cout<<"Key is find: "<<endl;
    }
    else{
        cout<<"Key is not find: "<<endl;
    }
    
}