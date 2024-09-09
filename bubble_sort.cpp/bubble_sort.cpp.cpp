#include <iostream>
using namespace std;
void bubble_sort(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (data[i] > data[j])
            {
                swap(data[i], data[j]);
            }
        }
    }
}
int main()
{
    int data[7];
    cout << "Input 7 elements into the array" << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> data[i];
    }
    cout << endl;
    cout << "Array elements before swapping" << endl;
    for (int r : data)
    {
        cout << r << " ";
    }
    cout << endl;
    bubble_sort(data, 7);
    cout << "Array elements after sorting" << endl;
    for (int y : data)
    {
        cout << y << " ";
    }
    return 0;
}
