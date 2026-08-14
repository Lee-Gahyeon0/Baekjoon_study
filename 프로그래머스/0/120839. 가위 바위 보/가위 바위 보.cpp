#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(char c: rsp){
        answer += (c == '2' ? '0':(c == '0'? '5': '2'));
    }
    return answer;
}