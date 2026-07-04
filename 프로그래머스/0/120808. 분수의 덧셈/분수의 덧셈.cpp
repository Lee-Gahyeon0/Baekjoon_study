#include <string>
#include <vector>
#include <numeric>
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int result_numer = (numer1 * denom2) + (numer2 * denom1);
    int result_denom = denom1 * denom2;
    
    int common_factor = gcd(result_numer, result_denom);
    
    result_numer /= common_factor;
    result_denom /= common_factor;
    
    vector<int> answer;
    answer.push_back(result_numer);
    answer.push_back(result_denom);
    
    return answer;
}