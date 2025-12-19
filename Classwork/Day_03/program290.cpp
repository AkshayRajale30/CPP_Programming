#include<iostream>
using namespace std;

void Dislpay()
{
    static int iCnt = 1;

    if( iCnt <= 4)
    {
        cout<<"Jay Ganesh...\n";
        iCnt++;
        Dislpay();
    }
}

int main()
{
    Dislpay();
    
    return 0;
}