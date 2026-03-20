#include <iostream>
using namespace std;

int main(){
    int arr[9][9];
    int M=-1;
    int col=0;
    int row=0;
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(arr[i][j]>=M){
                M=arr[i][j];
                col=i+1;
                row=j+1;
            }
        }
    }
    
    cout << M << endl;
    cout << col << " " <<row;
    
    return 0;
}