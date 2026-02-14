#include <iostream>
#include <vector>
using namespace std;

// Leetcode 2527. Find Xor-Beauty of an Array        //Time Complexity: O(n), Space Complexity: O(1)
int xorBeauty(vector<int>& nums) {
    int xorSum = 0;
    for (int num : nums) {
        xorSum ^= num;
    }
    return xorSum;
}


// LeetCode 136. Single Number                         //Time Complexity: O(n), Space Complexity: O(1)
int singleNumber(vector<int>& nums) {
    int sum = 0;
    for ( int i = 0 ; i <nums.size(); i++) {
        sum ^= nums[i];
    }
    return sum;
};


//Fast Exponention 
int fastExponention(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return res;
}

//count set bits
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

//clear last ith bit
void clearLastIthBit(int &n, int i) {
    int bitmask = ~(1 << i);
    n = n & bitmask;
    cout << n << endl;
}

//update ith bit
void setBit(int &n, int i) {
    int bitmask = 1 << i;
    n = n | bitmask;
    cout << n << endl;
}

//Clear ith bit
void clearBit(int &n, int i) {
    int bitmask = ~(1 << i);
    n = n & bitmask;
    cout << n << endl;
}

//Get ith bit
int getBit(int n, int i) {
    int bitmask = 1 << i;
    if (!(n & bitmask)) {
        return 0;
    } else {
        return 1;
    }
}

//Check if a number is odd or even
void oddEven(int n) {

    if (n & 1) {
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
}

int main() {
    int nums[5] = {4, 1, 2, 1, 2};

    //Bitwise And(&) Opertor
    //cout << (3 & 5) << endl;

    //Bitwise (|)
    //cout << (3 | 5) << endl;

    //Xor {^}
    //cout << (3^5) << endl;

    //Bitwise Complement(~)
    //cout << (~3) << endl;

    //Left Shift (<<)
    //cout << (3 << 2) << endl;   //( a*2^b = 3 * 2 * 2)

    //Right Shift (>>)
    //cout << (3 >> 2) << endl;   // ( a/2^b = 3 / 2 / 2)

    //oddEven(4);
    //cout <<getBit(7, 5) << endl;
    
    //clearBit(a, b);
   // cout << fastExponention(a, b);
    
   cout << singleNumber(nums);

    return 0;
}