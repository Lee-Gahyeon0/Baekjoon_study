#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int mul = 1;
    int sum = 0;
    
    for(int num : num_list){
        sum+=num;
        mul*=num;
    }
    return mul<pow(sum,2) ? 1 : 0;
}