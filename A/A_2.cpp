#include <iostream>

using namespace std;
void insize(int arr[])
{
    cout << "trong ham: " <<sizeof(arr)/sizeof(int) << endl;
    return;
}
int main(int argc, const char* agrv[])
{
    int Arr[10];

    cout << "trong main: "<<sizeof(Arr)/sizeof(int) << endl;
    insize(Arr);

    return 0;
// kich thuoc khac nhau
}
