// write c++ code to pront sai raghava

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &a)
    {
        // using stack
        stack<int> s;

        for (int i = 0; i < a.size(); i++)
        {
            if (s.empty() || (s.top() < 0 && a[i] > 0) ||(s.top() > 0 && a[i] > 0) || (s.top() < 0 && a[i] < 0))
            {
                s.push(a[i]);
            }
            else
            {
                if (s.top() > 0 && a[i] < 0)
                {
                    if(!s.empty() && s.top() > 0 && a[i] < 0 ){
                        if (abs(s.top()) < abs(a[i]))
                        {
                            s.pop();
i--;
                    
                        } else if (abs(s.top()) == abs(a[i]))
                        {
                            s.pop();
                        
                        }
                    }
                }
           
            }
        }
        vector<int> ans;
        while (!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};