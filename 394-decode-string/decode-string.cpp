class Solution {
public:
    string decodeString(string s) {
        //{ Driver Code Starts
// Initial Template for C++
        stack<char>st;
        string num;
        string h;
        string ans;
        for(int i=0;i<s.length();i++)
        {
           if(s[i]!=']')
           {
               st.push(s[i]);
           }
           else
           {
               while(!st.empty() && st.top()!='[')
               {
                   h=st.top()+h;
                   st.pop();
               }
               st.pop();
               while(!st.empty() && isdigit(st.top()))
               {
                   num=st.top()+num;
                   st.pop();
               }
               int n=stoi(num);
               string expi;
               for(int i=0;i<n;i++)
               {
                   expi+=h;
               }
               for(int i=0;i<expi.length();i++)
               {
                   st.push(expi[i]);
               }
               h="";
               num="";
           }
        }
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }

};