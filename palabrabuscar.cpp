#include <iostream>
#include <string.h>

using namespace std;

int buscar(char text[],char cad[]);

int main()
{
    char cad[20], text[200]={"El talento va mas haya de la imaginacion de una persona, solo se razonable :v"};
    cout<<text<<endl;
    cout<<"Palabra a buscar: "; cin>>cad;
    int pos=buscar(text,cad);
    if (pos==1)
        cout<<"No se encuentra la palabra";
    else
        cout<<"Su palabra esta en la posicion: "<<pos;
    return 0;
}
int buscar(char text[], char cad[])
{
    int conta=0, conta2=0;
    for(;conta<=strlen(text);)
    {
        if(cad[conta2]==text[conta])
        {
            conta++, conta2++;
            if(conta2==strlen(cad))
                return (conta-conta2);
        }
        else
        {
            if (conta2==0)
                conta++;
            else
                conta+=conta2-1, conta2=0;
        }
    }
    return 1;
}
