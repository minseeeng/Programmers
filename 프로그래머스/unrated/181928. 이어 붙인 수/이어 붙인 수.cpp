#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd = 0;
    int even = 0;
    for(int num : num_list){
        if(num % 2 == 0){
            even = even * 10 + num;
        }
        else{
            odd = odd * 10 + num;
        }
    }
    answer = odd + even;
    return answer;
}