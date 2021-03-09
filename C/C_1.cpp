#include <iostream>
#include <ctime>


using namespace std;
int xucxac()
{
    return rand()%6 + 1;
}
int main()
{
    srand(time(0));
    int sum1=0, sum2=0;
//    while(sum1<=100&&sum2<=100) cach 1
//    {
//        int xx1= xucxac();
//        sum1+=xx1;
//        cout << "xuc xac nguoi choi 1 " << xx1 << "  " << "Tong nguoi 1 " << sum1 << endl;
//        int xx2= xucxac();
//        sum2+=xx2;
//        cout << "xuc xac nguoi choi 2 " << xx2 << "  " << "Tong nguoi 2 " << sum2 << endl;
//    }
    while(sum1<=100&&sum2<=100) // cach 2
    {
        if(sum1<=sum2)
        {
            int xx1= xucxac();
            sum1+=xx1;
            cout << "xuc xac nguoi choi 1 " << xx1 << "  " << "Tong nguoi 1 " << sum1 << endl;
        }
        else
        {
            int xx2= xucxac();
            sum2+=xx2;
            cout << "xuc xac nguoi choi 2 " << xx2 << "  " << "Tong nguoi 2 " << sum2 << endl;
        }
    }
    if(sum1>sum2) cout << "nguoi 1 thang";
    else cout << "nguoi 2 thang";
    return 0;
}
