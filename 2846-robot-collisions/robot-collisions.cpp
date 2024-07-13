class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<pair<pair<int,int>,char>> v;
        stack<pair<pair<int,int>,char>>st;
        map<int,int>mp;
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(int i=0;i<positions.size();i++)
        {
            v.push_back(make_pair(make_pair(positions[i],healths[i]),directions[i]));
            mp[positions[i]]=i;
        }
        vector<int>ans;
        sort(v.begin(),v.end());
        for(int i=0;i<positions.size();i++)
        {

            if(v[i].second=='R')
            {
                st.push(v[i]);
            }
            else
            {
                if(!st.empty() && st.top().second=='R')
                {
                    if(st.top().first.second>v[i].first.second)
                    {
                        auto t=st.top();
                        st.pop();
                        st.push({{t.first.first,t.first.second-1},t.second});
                    }
                    else if(st.top().first.second==v[i].first.second)
                    {
                        st.pop();
                    }
                    else
                    {
                        int f=0;
                        while(!st.empty() && st.top().second=='R')
                        {
                            if(st.top().first.second>v[i].first.second)
                            {
                                auto t=st.top();
                                st.pop();
                                st.push({{t.first.first,t.first.second-1},t.second});
                                f=1;
                                break;
                            }
                            else if(st.top().first.second==v[i].first.second)
                            {
                                f=1;
                                st.pop();
                                break;
                            }
                            else
                            {
                                st.pop();
                                v[i].first.second--;
                            }
                        }
                        if(f==0){
                            st.push(v[i]);
                        }
                     }

                }
                else
                {
                    st.push(v[i]);
                }
            }
        }
        while(!st.empty())
        {
            pq.push({mp[st.top().first.first],st.top().first.second});
            st.pop();
        }
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};