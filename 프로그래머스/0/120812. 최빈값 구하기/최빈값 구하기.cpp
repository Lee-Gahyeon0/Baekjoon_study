#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    vector<int> count(1000, 0);
    for (int num : array) {
        count[num]++;
    }
    
    int max_count = 0;   
    int answer = 0;      
    bool is_duplicate = false; 
    
   
    for (int i = 0; i < 1000; i++) {
        if (count[i] > max_count) {
            max_count = count[i]; 
            answer = i;           
            is_duplicate = false; 
        }
        else if (count[i] == max_count && max_count != 0) {
            is_duplicate = true;
        }
    }
    
    if (is_duplicate) {
        return -1;
    }
    
    return answer;
}