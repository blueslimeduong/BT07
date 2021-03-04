#include <iostream>

using namespace std;
// su dung de quy
int searchDQ(int key, int *a, int low, int high)
{
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (*(a+mid) == key) return mid;
    if (*(a+mid) > key)
    return searchDQ(key, a, low, mid-1);

    return searchDQ(key, a, mid+1, high);
}
int main(int agrc, const char* agrv[])
{
    int arr[9] = {1, 3, 4, 8, 10, 44, 77, 84, 90};
    cout << searchDQ(44,arr,0,9) << endl;
    return 0;
}
