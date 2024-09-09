#include <iostream>
using namespace std;
int main(){
    int a,b; float c,d;
    cout << "Enter desired snap: 1/";
    cin >> a;
    cout << "Enter base snap: 1/";
    cin >> b;
    cout << "Enter bpm: ";
    cin >> c;
    d = c*a/b;
    cout << d << " bpm";
    
    return 0;
}