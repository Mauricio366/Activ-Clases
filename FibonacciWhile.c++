#include <iostream>

using namespace std;

int main(){

int finu,counter=0;
int a=0, b=1;


cout <<"Welcome to our Fibonacci Sequence counter"<<endl;

cout <<"Please enter how many numbres you want to be shown"<<endl;
cin >> finu;


while(counter < finu){

    cout << a << " ";
    int next = a + b;
    a = b;
    b = next;
    counter++;

}

return 0;
}