class Solution {
public:
bool compare(string a, string b) {
    // Concatenate the two numbers and compare them
    return a + b > b + a;
}

string largestNumber(vector<int>& nums) {
    // Edge case: if all numbers are 0, return "0"
    if (all_of(nums.begin(), nums.end(), [](int x){ return x == 0; })) {
        return "0";
    }
    
    // Convert the numbers to strings
    vector<string> str_nums;
    for (int num : nums) {
        str_nums.push_back(to_string(num));
    }
    
    // Sort the numbers using the comparison function
    sort(str_nums.begin(), str_nums.end(), [](string a,string b){
         return a + b > b + a;
    });
    
    // Concatenate the sorted numbers to get the final result
    string result;
    for (string str : str_nums) {
        result += str;
    }
    return result;
}
};