class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> meuHash;
        int complemento;

        for(int i = 0; i < nums.size(); i++){
            complemento = target - nums[i];

            if(meuHash.find(complemento) != meuHash.end()){
                return {meuHash[complemento] , i};
            }

            meuHash[nums[i]] = i;
        }
        return {};
    }
};