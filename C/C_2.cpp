#include <iostream>
#include <ctime>
using namespace std;
void chay_Rua(int& viTri)
{
    int tmp = rand()%10+1;
    if(tmp<=5)
    {
        viTri+=3;
        cout << "Rua tien dai\n";
    }
    else if(tmp<=8)
    {
        viTri +=1;
        cout << "Rua tien ngan\n";
    }
    else
    {
      viTri -=6;
      if(viTri<0){viTri=0;}
      cout <<"Rua truot \n";
    }
    cout << "Vi tri Rua: " << viTri << endl;
    return;
}
void chay_Tho(int &viTri)
{
    int tmp = rand()%10+1;
    if(tmp<=2)
    {
        cout << "Tho ngu\n";
    }
    else if(tmp<=4)
    {
        viTri +=9;
        cout << "Tho tien dai\n";
    }
    else if(tmp=5)
    {
        viTri -=12;
        if(viTri<0){viTri=0;}
        cout << "Tho truot dai\n";
    }
    else if(tmp<=8)
    {
        viTri +=1;
        cout <<"Tho tien ngan\n";
    }
    else
    {
        viTri -=2;
        if(viTri<0){viTri=0;}
        cout << "Tho truot ngan\n";
    }
    cout << "Vi tri Tho: " << viTri << endl;
    return;
}

int main()
{
    srand(time(0));
    int vitriTho = 0, vitriRua = 0;
    int luot=1;
    while(vitriRua<=70&&vitriTho<=70)
    {
        cout << "Luot: " << luot++ << endl;
        chay_Rua(vitriRua);
        chay_Tho(vitriTho);
        cout << endl << endl;
    }
    if(vitriRua<vitriTho)
    {
        cout << "Tho thang";

    }
    else
    {
        cout << "Rua thang";
    }
    return 0;
}
