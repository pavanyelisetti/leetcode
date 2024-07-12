class Solution {
public:
    int ans(string s,char x,char y,int d,int e)
    {
        stack<char>st;
        int c=0,c1=0;
        string t;
        for(int i=0;i<s.length();i++)
            {
                if(s[i]==x)
                {
                    if(!st.empty()&&st.top()==y)
                    {
                        c+=1;
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
                else
                {
                    st.push(s[i]);
                }
            }
            while(!st.empty())
            {
                t+=st.top();
                st.pop();
            }
            reverse(t.begin(),t.end());
            for(int i=0;i<t.length();i++)
            {
                if(t[i]==y)
                {
                    if(!st.empty()&&st.top()==x)
                    {
                        c1+=1;
                        st.pop();
                    }
                    else
                    {
                        st.push(t[i]);
                    }
                }
                else
                {
                    st.push(t[i]);
                }
            }
            return (c*d+c1*e);
        }
    int maximumGain(string s, int x, int y) {

        if(y>x)
        {
            return ans(s,'a','b',y,x);
        }
            return ans(s,'b','a',x,y);
           
        
    }
};