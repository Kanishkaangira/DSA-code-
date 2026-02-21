#include <iostream>
using namespace std;


//Binary Consecutive 1s strings
void binString ( int n , string ans) {
    if ( n==0) {
        cout << ans << endl;
        return;
    }

    if(ans[ans.length()-1] != '1') {
        binString(n-1 , "0" + ans);
        binString(n-1 , "1" + ans);
    }
    else{
        binString(n-1 , "1" + ans);
    }
}

// Friend Pair Problem
int friendPair(int n) {
    if (n == 1 || n == 2) {
        return n;
    }
    return friendPair(n - 1) + friendPair(n - 2) * (n - 1);
}



//Remove Duplicates from string
void RemoveDuplicates(string str, string ans, int i, int map[26]) {
    if (i == str.length()) {
        cout << ans << endl;
        return;
    }

    char ch = str[i];
    int mapIdx = (int) (ch - 'a');

    if (map[mapIdx]) {
        RemoveDuplicates(str, ans , i + 1, map);
    } else {
        map[mapIdx] = true;
        RemoveDuplicates(str, ans+str[i], i + 1, map);
    }
}


//LeetCode Tiling Problem 
int tilingProblem(int n)  {
    if (n == 0||n == 1) {
    return 1;
    }
    return tilingProblem(2 * (n - 1)) + tilingProblem(2 * (n - 2));
}

int main() {
    // string str = "Kanishka"; // Input string
    // string ans = ""; // Output string
    // int map[26] = {false};
   
    //int n;
    // cin >> n;
    // int m;
    // cin >> m;
    // cout << tilingProblem(n,m) << endl; 

    //RemoveDuplicates(str, ans, 0, map);
    //cout<< friendPair(3) << endl;

    string ans="";
    binString(3, ans);
   
    return 0;
}