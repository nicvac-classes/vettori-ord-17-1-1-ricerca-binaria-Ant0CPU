#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;

int main() {

    srand(time(0));

    int n, i(0), j, t, x, idx, c, b, inizio, fine, medio;
    bool scambi(true);

    do {
        cout<<"Inserire il numero di cifre da generare"<<endl;
        cin>>n;
    } while (n<=0);

    vector <int> R(n);
    while (i<=n-1) {

        R[i]=rand() % (n*10+1);
        i=i+1;
    }

    i=0;
    while (i<=n-1 && scambi) {
        scambi=false;

        j=0;
        while (j<(n-1)-i) {
           
            if (R[j]>R[j+1]) {
                
                t=R[j];
                R[j]=R[j+1];
                R[j+1]=t;

                scambi=true;

            }
            j=j+1;
        }
        i=i+1;
    }

    // Ricerca sequenziale
    i=0;
    b=0;
    idx=-1;
    while (i<=n-1 && idx=-1)
    {
        b=b++;

        if (R[i]==x) {
            idx=i;
        }

        i=i++;
    }

    cout<<"Ricereca sequenziale: sono state effettuate "<<b<<" operazioni"<<endl;
    if (idx=-1) {
        cout<<"Non ho trovato il numero"<<endl;
    }
    else
    {
        cout<<"Ho trovato il numero "<<x<<" nella cella "<<idx<<endl;
    }
    // Fine ricerca sequenziale

    // ricerca binaria
    c=0;
    i=0;
    idx=-1;
    inizio=0;
    fine=n-1;
    while (inizio<=fine && idx=-1) {
        c=c++;

        medio=inizio+((fine-inizio)/2);

        if (R[medio]==x) {
            idx=medio;
        }
        else
        {
            if (R[medio]>x) {
                fine=medio-1;
            }
            else
            {
                inizio=medio+1;
            }
        }
        i=i+1;
    }
    cout<<"Ricereca sequenziale: sono state effettuate "<<c<<" operazioni"<<endl;
    if (idx=-1) {
        cout<<"Non ho trovato il numero"<<endl;
    }
    else
    {
        cout<<"Ho trovato il numero "<<x<<" nella cella "<<idx<<endl;
    }
    // Fine ricerca binaria   
}