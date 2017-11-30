#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int n=0, res=0;
    cout<<"Hasta que numero: "; 
	cin>>n;
    res=fibonacci(n);
    cout<<"Poscion que corresponde: "<<res<<endl;
    return 0;
}
int fibonacci(int n)
{
    if (n==0||n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
