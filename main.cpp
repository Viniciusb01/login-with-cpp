#include <iostream>
#include <cstdlib>

using namespace std;
static int a = 3000;
static int poup = 1895;

int main()
{
    char escolha;
   do
   {
       cout << "------------------------------Programa de compras------------------------------\n\n" << endl;
    double fundos=0, aumento=0;
    

    cout << "Depositou mais dinheiro? Entre com 'S' ou 'N'" << endl;
    cin >> escolha;

    if(escolha=='S') {
            cout << "\nQuanto voce depositou?" << endl;
            cin >> fundos;
    }
    else{
            cout << "\nAcho melhor voce comecar a depositar mais dinheiro...\n" << endl;
    }

    //escolha=NULL;
    cout << "\nAchou mais alguma coisa para comprar? Entre com 'S' ou 'N'" << endl;

    cin >> escolha;

    if(escolha=='S') {
            cout << "\nQuanto isso vai custar a mais?" << endl;
            cin >> aumento;
    }
    else{
            cout << "\nOK, entendi...\n" << endl;   }

    cout << "\n----   Quanto quero gastar?  "<<a+aumento<< endl;
    cout << "----   Quanto tenho na poupanca? "<<poup+fundos<< endl;

    double falta = (a+aumento) - (poup+fundos);
    double dmes = falta/5;

    cout <<"\nVoce precisa economizar " <<dmes<< " reais por mes"<< endl;
    //escolha=NULL;
    
    cout <<"\nQuer fazer novamente a avaliacao? Entre com 'S' ou 'N'\n "<< endl;
    cin >> escolha;

    if(escolha=='S') {
            cout << "\nBora la mais uma vez...\n" << endl;
    }
    else{
            cout << "\nOK, ate a proxima!\n" << endl;
    }
   }while(escolha=='S');
   
    return 0;
}
