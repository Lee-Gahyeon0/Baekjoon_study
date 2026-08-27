#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    return (dot.front()>0 && dot.back()>0) ? 1:
           (dot.front()<0 && dot.back()>0) ? 2:
           (dot.front()<0 && dot.back()<0) ? 3: 4;
}