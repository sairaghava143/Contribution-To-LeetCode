class Solution
{
public:
    string decodestring(int &i, const string &s)
    {
        string res;
        while (i < s.size() && s[i] != ']')
        {
            if (!isdigit(s[i]))
            {
                res += s[i];
                i++;
            }
            else
            {
                int n = 0;
                while (i < s.size() && isdigit(s[i]))
                {
                    n = n * 10 + s[i] - '0';
                    i++;
                }
                i++;
                string t = decodestring(i, s);
                i++;

                while (n-- > 0)
                {
                    res += t;
                }
            }
        }
        return res;
    }
    string decodeString(string s)
    {
        // using recurrsive approach
        //  int i=0;
        //  return decodestring(i,s);

        // stack approach

        stack<char> st;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ']')
            {
                st.push(s[i]);
            }
            else
            {
                string t;
                while (st.top() != '[')
                {
                    t = st.top()+t;
                    st.pop();
                }
                st.pop();

                string y;
                while (!st.empty() && isdigit(st.top()))
                {
                    y = st.top()+y;
                    st.pop();
                }
                int k = stoi(y);
                while (k--)
                {
                    for (int i = 0; i < t.size(); i++)
                    {
                        st.push(t[i]);
                    }
                }
            }
        }
        s = "";
        string z;
        while (!st.empty())
        {
            s = st.top() + s;
            z+=st.top();
            st.pop();
        }
        // cout<<z;
        reverse(z.begin(),z.end());
        return z;
    }
};