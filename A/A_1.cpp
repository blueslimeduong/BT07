#include <iostream>

using namespace std;

int main(int argc, const char* agrv[])
{
    {
        int *pX;
        *pX = 321;
        //con tro chua khoi tao
    }

    {
        int *pX = NULL;
        cout << *pX;
        // truy nhap con tro null
    }

    {
        int *pX;
        {
            int c = 10;
            pX = &c;
        }
        cout << *pX;
        // dangling references
    }
}
