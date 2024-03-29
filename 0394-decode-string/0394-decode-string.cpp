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
                    t += st.top();
                    st.pop();
                }
                reverse(t.begin(),t.end());
                st.pop();

                string y;
                while (!st.empty() && isdigit(st.top()))
                {
                    y += st.top();
                    st.pop();
                }
                reverse(y.begin(),y.end());
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

        while (!st.empty())
        {
            s += st.top();
            
            st.pop();
        }
    
        reverse(s.begin(),s.end());
        return s;
    }
};