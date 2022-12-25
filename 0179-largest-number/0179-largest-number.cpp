class Solution {
public:
    string largestNumber(vector<int>& a) {
         std::string largestnumber = "";
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {
            std::string temp1 = std::to_string(a[i]) + std::to_string(a[j]);
            std::string temp2 = std::to_string(a[j]) + std::to_string(a[i]);
            if (std::stoll(temp2) > std::stoll(temp1)) {
                std::swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        largestnumber += std::to_string(a[i]);
    }
        if(largestnumber[0]=='0')return "0";
    return largestnumber;
    }
};