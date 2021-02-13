#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool re(int x, int y){
    return x>y;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> numbers;

    sort(numbers.begin(),numbers.end(),re);
    
    
    
    for(int i=0;i<numbers.size();i++){
        answer+=to_string(numbers[i]);
    }
    return answer;
}
