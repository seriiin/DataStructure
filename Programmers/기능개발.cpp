vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> time;
    int tmp1;
    int tmp2;
    int ans;
    
    for(int i = 0 ;i < progresses.size();++i)
    {
        int t = 0;
        while(progresses[i] < 100)
        {
            progresses[i] += speeds[i];
            ++t;
        }
        time.push(t);
    }
    ans = 1;
    if(!time.empty())
    {
        tmp1 = time.front();
        time.pop();
    }
    else
        return answer;
    
    while(!time.empty())
    {
        tmp2 = time.front();
        time.pop();
        if(tmp1 < tmp2)
        {
            answer.push_back(ans);
            tmp1 = tmp2;
            ans = 1;
        }
        else
            ans++;
        
    }
    answer.push_back(ans);
    return answer;
}
