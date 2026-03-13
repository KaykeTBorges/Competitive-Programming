#include <algorithm> 

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int i = 0;
        vector<int> altitudes;
        altitudes.push_back(0);

        while(i < n){
            altitudes.push_back(altitudes[i] + gain[i]);
            i++;
        }
        int maior = *max_element(altitudes.begin(), altitudes.end());
        
        return maior;
    }
};