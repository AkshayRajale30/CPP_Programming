#include<iostream>
using namespace std;

void Dislpay()
{
    static int iCnt = 1;
    auto i = 1;

    if( iCnt <= 3)
    {
        cout<<"Jay Ganesh..."<<iCnt<<" "<<i<<"\n";
        iCnt++;
        i++;
        Dislpay();
    }
}

int main()
{
    cout<<"Inside main\n";
    Dislpay();
    cout<<"End of main\n";
    return 0;
}