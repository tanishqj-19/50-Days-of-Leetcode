class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for(auto &s: operations){
            if(s[1] == '+')
                x++;
            else if(s[1] == '-')
                x--;
        }

        return x;
    }
};
