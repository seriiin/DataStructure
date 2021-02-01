int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int now_weight = 0;
    int i = 0;
    queue<pair<int, int>> bridge;
    while(1)
    {
        ++answer;
        if (!bridge.empty() && answer - bridge.front().second == bridge_length)
        {
            int tmp = bridge.front().first;
            bridge.pop();
            now_weight -= tmp;
        }
        if (i < truck_weights.size() && now_weight + truck_weights[i] <= weight)
        {
            bridge.push(make_pair(truck_weights[i], answer));
            now_weight += truck_weights[i];
            ++i;
        }
        if(bridge.empty())
            break;
    }
    return answer;
}

