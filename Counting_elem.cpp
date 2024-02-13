#include <iostream>
using namespace std;

int main()
{
    int *ar, n, elem, count = 0;
    cout << "\nEnter n:";
    cin >> n;
    ar = (int *)malloc(sizeof(int) * n);
    cout << "\n Enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "\nEnter element to count";
    cin >> elem;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == elem)
        {
            count++;
        }
    }
    cout << count;
    free(ar);
}