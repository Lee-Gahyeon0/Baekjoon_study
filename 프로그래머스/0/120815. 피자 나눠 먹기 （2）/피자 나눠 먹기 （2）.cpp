#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int piz =1;
    while((piz*6)%n!=0){
        piz++;
    }
    return piz;
}