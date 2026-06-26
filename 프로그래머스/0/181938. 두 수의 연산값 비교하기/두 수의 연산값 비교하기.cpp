#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string a1 = to_string(a)+to_string(b);
    int mid = 2*a*b;
    string a2 = to_string(mid);
    
    int A1 = stoi(a1);
    int A2 = stoi(a2);
    
    if(A1>=A2){
        answer=A1;
    }
    else{
        answer=A2;
    }
    
    return answer;
}