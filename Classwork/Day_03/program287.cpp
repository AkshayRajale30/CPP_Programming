#include<iostream>
using namespace std;

void Dislpay()
{
    static int iCnt = 0;    // static storage class

    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;

    Dislpay();
}

int main()
{
    Dislpay();
    
    return 0;
}