#include <iostream>
#include <cstring>
using namespace std;
int xaucon(string a, string b)
{
    int dem = 0;
    int Asize = a.length();
    int Bsize = b.length();
    char *A = &a[0];
    for(int i=0; i<Bsize-Asize+1; i++)
    {
        char tmp[Asize];

        for(int j=0; j<Asize; j++)
        {
            tmp[j] = b[i+j];
        }
        if(strcmp(A,tmp)==0)
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    string a,b;
    cin >> a >> b;
    cout << xaucon(a,b);
    return 0;
}
