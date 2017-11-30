#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    int n=0, x=0;
    cout<<"Ingresa un numero: "; 
	cin>>n;
    x=factorial(n);
    cout<<"El factorial es: "<< x<<endl;
    return 0;
}
int factorial(int n)
{
    if (n==0)
        n=1;
    else
        n*=factorial(n-1);
    return n;
}
