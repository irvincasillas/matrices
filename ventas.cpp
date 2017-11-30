#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m[6][5]={0}, vend, prod , c, cantidad , s=0;
    bool x=1;
    
    do{
        cout<<"Ingrese el vendedor(1-4) y producto(1-5)"<<endl;
        cin>>vend;
        cin>>prod;
        if((vend>= 1 && vend<=4) && (prod>=1 && prod<=5 ))
        {
        	cout<<"Ingrese la cantidad vendida"<<endl;
        	cin>>cantidad;
        	m[vend-1][prod-1]=cantidad;
        	cout<<"Hay mas ventas?(no=0 si=1)\n";
        	cin>>x;
		}
		else{
			cout<<"solo tenemos 4 vendedores y/o 5 productos no mas."<<endl;
			cout<<"Hay mas ventas?(no=0 si=1)\n";
			cin>>x;
		}
    }while(x!=0);
    
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<4;c++)
        {
            cout<<m[r][c];
            cout<<"\t";
            s+=m[r][c];
        }
        cout<<s;
        s=0;
        cout<<"\n";
    }
    for(int c=0;c<4;c++)
    {
        for(int r=0;r<5;r++)
            s+=m[r][c];
        cout<<s<<"\t";
        s=0;
    }
}

