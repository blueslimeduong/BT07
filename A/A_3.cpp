#include <iostream>
#include <ctime>
using namespace std;

int count_even(int*a, int n)
{
    int dem = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            dem++;
        }
    }
    return dem;
}

int main(int argc, const char* agrv[])
{
    srand(time(0));
    const int Size = 10;
    int Arr[Size];
    for(int i=0; i<Size; i++)
    {
        Arr[i] = rand()%100;
    }
    for(int i=0; i<Size; i++)
    {
        cout << Arr[i] << ' ';
    }
    cout << endl;
    cout <<count_even(Arr, 5) << endl;//5 phan tu dau
    cout << count_even(Arr+Size-5,5) << endl; // 5 phan tu cuoi

}
