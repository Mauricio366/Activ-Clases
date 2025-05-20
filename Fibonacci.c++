#include <iostream>

using namespace std;

int main() {
//First we ask how many numbers de user wants to be shown
    int N;
    
    cout <<"Please enter how many numbers of Fibonacci you want to be shown: ";
    cin >> N;

//In here we check if the value of N is valid
    if (N <= 0) {
        cout <<"Please enter a valid number" << endl;
    }else{

//if the value is valid, we declare more variables yo use in the for
    int a = 0, b = 1;

    cout << "Fibonacci sequence with " << N << " terms:"<<endl;

    for (int i = 0; i < N; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    }
    cout<<endl;
    cout<<"Thanks for working with us"<<endl;
//we finish our code
    return 0;
}