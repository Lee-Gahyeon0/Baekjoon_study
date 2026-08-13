#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

string solution(string letter) {
    string answer = "";
    
    map<string, char> morse = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'},
        {"..-.", 'f'}, {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'},
        {"-.-", 'k'}, {".-..", 'l'}, {"--", 'm'}, {"-.", 'n'}, {"---", 'o'},
        {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'}, {"...", 's'}, {"-", 't'},
        {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'}, {"-.--",'y'},
        {"--..", 'z'}
    };
    
    stringstream ss(letter);
    string token;
    
    while (ss >> token) {
        answer += morse[token];
    }
    
    return answer;
}