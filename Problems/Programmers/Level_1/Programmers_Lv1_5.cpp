#include <string>
#include <vector>

// Programmers ÄÚµùÅ×½ºÆ® LV.1: ÇÏ»þµå ¼ö

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    string arx = to_string(x);
    int i;
    int tot = 0;
    for (i = 0; i < arx.size(); i++){
        tot += (arx[i] - 48);
    }
    if (x % tot != 0)
        answer = false;
    
    return answer;
}
