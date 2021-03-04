#include <iostream>

using namespace std;
char* weird_string() {
   char c[] = "123345";
   return c;
}

int main(int argc, const char* agrv[])
{
    char* str = weird_string();
    cout << *str;
    return 0;
    // khong co output
    //warning: address of local variable 'c' returned
}
