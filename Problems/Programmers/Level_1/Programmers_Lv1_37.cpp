#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 최소직사각형

using namespace std;

int solution(vector<vector<int>> sizes) {
    
    int answer = 0;
    int len = sizes.size();
    int i;
    int Maximum = max(sizes[0][0], sizes[0][1]);
    int Minimax = min(sizes[0][0], sizes[0][1]);
    
    for (i = 1; i < len; i++) {
        int Maxkey = max(sizes[i][0], sizes[i][1]);
        int Minkey = min(sizes[i][0], sizes[i][1]);
        if (Maximum < Maxkey) Maximum = Maxkey;
        if (Minimax < Minkey) Minimax = Minkey;
    }
    answer = Maximum * Minimax;
    
    return answer;
}