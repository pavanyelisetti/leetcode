class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        int c=0,c1=0;
        string t;
        if(y>x)
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='a')
                {
                    if(!st.empty()&&st.top()=='b')
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
                if(t[i]=='b')
                {
                    if(!st.empty()&&st.top()=='a')
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
            cout<<c<<" "<<c1;
            return (c*y+c1*x);
        }
        else
        {
           for(int i=0;i<s.length();i++)
            {
                if(s[i]=='b')
                {
                    if(!st.empty()&&st.top()=='a')
                    {
                        c1+=1;
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
                if(t[i]=='a')
                {
                    if(!st.empty()&&st.top()=='b')
                    {
                        c+=1;
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
            cout<<c<<" "<<c1;
            return (c*y+c1*x);
        }
        
    }
};