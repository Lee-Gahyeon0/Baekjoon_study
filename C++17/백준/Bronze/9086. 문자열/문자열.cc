#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    string n;

    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n;
        cout << n[0] << n[n.length()-1] << endl;
    }

    return 0;
}
