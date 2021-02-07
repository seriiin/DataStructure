#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    string tmp = "";
    //1단계
    for(int i=0;i<new_id.size();++i)
        new_id[i] = tolower(new_id[i]);
    
    //2단계
    for(int i=0;i<new_id.size();++i)
        if(new_id[i]=='-' || new_id[i]=='_' || new_id[i]=='.' || (new_id[i]>='a' && new_id[i]<='z') || (new_id[i]>='0' && new_id[i]<='9'))
            answer.push_back(new_id[i]);
    //3단계 + 4단계
    for(int i=0;i<answer.size();++i){
        if (!((i==0||i==answer.size()-1) && answer[i] == '.'))
            tmp.push_back(answer[i]);
        if (answer[i] == '.'){
            while (answer[i] == '.')
                ++i;
            --i;
        }
    }
    //5단계
    if (tmp == "")
        tmp.push_back('a');
    //6단계
    if (tmp.size()>=16)
        tmp = tmp.substr(0,15);
    if (tmp[tmp.size()-1]=='.')
        tmp.pop_back();
    answer = tmp;
    //7단계
    while (answer.size()<=2)
        answer +=answer[answer.size()-1];
    return answer;
}
