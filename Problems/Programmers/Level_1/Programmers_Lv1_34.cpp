using namespace std;

// Programmers 코딩테스트 LV.1: 부족한 금액 계산하기

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long total = long(price) * (long(count) * (long(count) + 1) / 2);
    if (total > money) answer = total - money;
    return answer;
}