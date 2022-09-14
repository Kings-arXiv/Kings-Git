#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 문자열 내 마음대로 정렬하기

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    
    vector<string> answer;
    
    int i, j;
    int len = strings.size();
    string temp;
    int smallest;
    
    for (i = 0; i < len - 1; i++){
        smallest = i;
        for (j = i + 1; j < len; j++){
            if (strings[j][n] < strings[smallest][n])
                smallest = j;
            if (strings[j][n] == strings[smallest][n])
                if (strings[j] < strings[smallest])
                    smallest = j;
        
        }
        if (i != smallest){
            temp = strings[i];
            strings[i] = strings[smallest];
            strings[smallest] = temp;
        }
    }
    for (i = 0; i < len; i++) answer.push_back(strings[i]);
    return answer;
}