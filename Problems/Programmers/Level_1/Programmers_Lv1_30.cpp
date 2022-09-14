#include <string>

// Programmers 코딩테스트 LV.1: [1차] 다트 게임

using namespace std;

int solution(string dartResult) {
    
    int answer = 0;
    int i;
    int len = dartResult.size();
    int index = int(dartResult[0]) - 48;
    int result = 0;
    int before = 0;
    
    for (i = 1; i < len; i++){

        if (isdigit(dartResult[i])){
            if (dartResult[i - 1] == '1' && dartResult[i] == '0'){
                index = 10;
                result = 0;
                continue;
            }
            index = int(dartResult[i]) - 48;
            if (dartResult[i-1] == '*') answer += (before + result);
            else answer += result;
            before = result;
            result = 0;
            continue;
        }
        
        switch(dartResult[i])
        {
            case 'S': 
                result += index;
                break;
                
            case 'D':
                result += (index * index);
                break;
                
            case 'T':
                result += (index * index * index);
                break;
                
            case '*':
                result *= 2;
                break;
                
            case '#':
                result *= -1;
                break;
                
            default:
                break;
        }
		if (i == len - 1){
            if (dartResult[i] == '*') answer += (before + result);
            else answer += result;
			break;
		}
    }
    
    return answer;
}