#include<iostream>
using namespace std;

void Dislpay()
{
    int iCnt = 0;    // Auto storage class

    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;

    Dislpay();
}

int main()
{
    Dislpay();
    
    return 0;
}