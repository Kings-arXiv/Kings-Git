using namespace std;

// Programmers �ڵ��׽�Ʈ LV.1: ������ �ݾ� ����ϱ�

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long total = long(price) * (long(count) * (long(count) + 1) / 2);
    if (total > money) answer = total - money;
    return answer;
}