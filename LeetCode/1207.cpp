
// https://leetcode.com/problems/unique-number-of-occurrences/
// Unique Number of Occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        // Loop to check number of occurrences
        for(int i=0; i<arr.size(); i++)
        {
            int temp = arr[i]; // Store the value of arr[i] in a variable so after traversing through second loop value of arr[i] doesn't change in between
            int count = 0; // Counting occurences
            
            if(temp != INT_MIN)
            {
                for(int j=0; j<arr.size(); j++)
                {
                    if(temp == arr[j])
                    {
                        count++;
                        arr[j] = INT_MIN; // Initializing visited numbers of array with INT_MIN
                    }
                }
                if(count>0)
                    ans.push_back(count);
            }
        }
        // Loop to check frequency of a number
        for(int i=0; i<ans.size(); i++)
        {
            int count_fr = 0; // Counting frequency of a number in dynamic array
            for(int j=0; j<ans.size(); j++)
            {
                if(ans[i] == ans[j])
                    count_fr++;
            }
            if(count_fr > 1)
                return false;
        }
        return true; 
        
    }
};