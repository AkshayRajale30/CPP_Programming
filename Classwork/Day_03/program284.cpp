#include<iostream>
using namespace std;

void Dislpay()
{
  cout<<"Jay Ganesh...\n";
  Dislpay();
}

int main()
{
    Dislpay();
    
    return 0;
}