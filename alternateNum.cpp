#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}
void alternate(int arr[], int size)
{
    for (int i = 0; i < size; i +=2)
    {
        /* code */
        if (i + 1 < size)
        {
            /* code */
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[6] = {4, 9, 6, 8, 3, 1};
    int odd[5] = {3, 0, 9, 8, 7};

    alternate(even, 6);
    printArray(even, 6);

    return 0;

}
