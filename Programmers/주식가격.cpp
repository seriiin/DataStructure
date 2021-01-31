vector<int> solution(vector<int> prices) {
    vector<int> answer;
    stack<pair<int,int>> s;
    
    for(int i=0; i<prices.size(); ++i)
    {
        answer.push_back(0);
        while (!s.empty() && prices[i] < s.top().first)
        {
            answer[s.top().second] = i - s.top().second;
            s.pop();
        }
        s.push(make_pair(prices[i], i));
    }
    for(int i=0; i<prices.size(); ++i)
    {
        if(answer[i] == 0)
            answer[i] = (int)prices.size() - 1 - i;
    }
    return answer;
}
