#include<bits/stdc++.h>
using namespace std;
int minimumChunksRequired(long totalPackets, vector<vector<long>> uploadedChunks) {
    sort(uploadedChunks.begin(), uploadedChunks.end());
    int n = uploadedChunks.size();
    priority_queue<long> pq;
    
    if(uploadedChunks[0][0] != 1) {
        pq.push(uploadedChunks[0][0] - 1);
    }
        
    for(int i = 1; i < n; i++) {
        pq.push(uploadedChunks[i][0] - uploadedChunks[i - 1][uploadedChunks[i - 1].size() - 1]);
    }
    
    if(uploadedChunks[n - 1][uploadedChunks[n - 1].size() - 1] != totalPackets) {
        pq.push(totalPackets - uploadedChunks[n - 1][uploadedChunks[n - 1].size() - 1]);
    }
    
    long ch = log(pq.top()) / log(2);
    ch = pow(2, ch);

    int ans = 0;
    
    while(!pq.empty()) {
        long x = pq.top();
        pq.pop();
        if(x > ch)
            ans += 2;
        else
            ans++;
    }
    return ans;
}

int main()
{
    long totalPackets = 18;
    vector<vector<long>> uploadedChunks = {{9,10,11,12,13,14,15,16,17}};
    cout<<minimumChunksRequired(totalPackets, uploadedChunks);
}
