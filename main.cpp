#include <iostream>
using namespace std;

int main() {
   int primo=1, secondo=1, terzo=0;
    int n=0;

    cin>>n;

        cout << primo << endl;
        cout << secondo << endl;

        for (int i = 1; i <= n; i++) {
            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;

            if(terzo<=n){
                cout<<terzo<<endl;
           }else{
                break;
            }
        }

   return 0;
}
