#include <iostream>
#include <vector>
using namespace std;  

// LeetCode 167. Two Sum II - Input Array Is Sorted - (Time Complexity: O(n) , Space Complexity: O(1))
vector<int> twoSum(vector<int>& numb, int target) {
    int start= 0; 
    int end = numb.size() - 1; 
    int currSum = 0;

    while (start < end) { 
        currSum = numb[start] + numb[end]; 

        if (currSum == target) { 
            cout << start+1 << "," << end+1 << endl; 
            return {start + 1, end + 1};
        } else if (currSum < target) { 
            start++; 
        } else { 
            end--;
        }
    }

    return {}; // Return an empty vector if no solution is found
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    //cout << v1.size() << endl;

    twoSum(v1, 9);
    return 0;
}