#include <stdio.h>
#include <iostream>
#include "storelogic.h"


using namespace std;


int main(){
    cout<<"HELLO WORLD!"<<endl;
    Store loja = Store("Loja de Picoutos");
    cout<<loja.GetName()<<endl;
    return 0;
}