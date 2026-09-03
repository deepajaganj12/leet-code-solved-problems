class Solution {
public:
   string stringHash(const string& s, int k) {
        vector<int> arr;
        
        for (char ch : s) {
            arr.push_back(ch - 'a');
        }

        string result;

        for (size_t i = 0; i < arr.size(); i += k) {
            int sum = 0;

            for (size_t j = i; j < i + k && j < arr.size(); ++j) {
                sum += arr[j];
            }

            result += 'a' + (sum % 26);
        }
        
        return result;
    }
};
