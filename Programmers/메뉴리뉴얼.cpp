#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int cmp(string a, string b)
{
    return a.size() < b.size();
}

bool cmp2(const pair<string,int>& a, const pair<string,int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    map<string, int> temp;
    vector<pair<string, int>> t;
    
    for(int i = 0; i<orders.size(); ++i)
        sort(orders[i].begin(), orders[i].end());
    sort(orders.begin(), orders.end(), cmp);
    
    for(int i = 0; i<orders.size();i++)
        cout<<orders[i]<<endl;
    
    for(int i = 0; i<orders.size(); ++i)
    {
        for (int j = i+1; j<orders.size();++j)
        {
            string tmp = "";
            for(int k = 0; k<orders[i].size();++k)
            {
                if (orders[j].find(orders[i][k]) != -1)
                    tmp += orders[i][k];
            }
            if ((find(course.begin(), course.end(), tmp.size()) != course.end()) && (temp.find(tmp)==temp.end()))
                temp.insert(pair<string, int>(tmp, 2));
            else if ((temp.find(tmp)!=temp.end()))
                ++temp[tmp];
        }
    }
    map<string, int>::iterator iter;

    for(iter = temp.begin(); iter != temp.end(); iter++){
        cout << "[" << iter->first << ", " << iter->second << "]" << endl ;
        t.push_back(make_pair(iter->first, iter->second));
    }
    sort(t.begin(), t.end(), cmp2);
    for(int i = 0; i<t.size();i++)
        cout<<t[i].first<<" "<<t[i].second<<endl;
    sort(answer.begin(), answer.end());
    return answer;
}
