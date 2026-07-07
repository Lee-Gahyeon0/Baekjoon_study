#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    float ans;
    for(int i=0;i<numbers.size();i++){
        ans+=numbers[i];
    }
    return ans/numbers.size();
}