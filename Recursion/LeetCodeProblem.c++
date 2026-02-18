#include <iostream>
using namespace std;

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
    string str = "Kanishka"; // Input string
    string ans = ""; // Output string
    int map[26] = {false};
    // int n;
    // cin >> n;
    // int m;
    // cin >> m;
    // cout << tilingProblem(n,m) << endl; 

    RemoveDuplicates(str, ans, 0, map);
    return 0;
}