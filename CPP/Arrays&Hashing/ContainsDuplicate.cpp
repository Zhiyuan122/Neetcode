#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

/*
【1，2，3，4，5，5，5，6】
1. 
for (int i =0; i < n; i++)
    for (int j = 0; j< n-1; j++)
        if (num[i] != num[j]) return true;

O(n^2)

2. hash

*/

bool containsDuplicate(vector <int>& nums){
    unordered_set<int> hashset;

    for (int i : nums){
        if (hashset.count(i)){
            return true;
        }
        hashset.insert(i);
    }

    return false;

}

int main() {
    vector<int> nums1 = {1,2,3,4,5,6,2};
    vector<int> nums2 = {2,3,4,5,6,7};

    cout << containsDuplicate(nums1) << endl;
    cout << boolalpha << containsDuplicate(nums1) << endl;
    cout << containsDuplicate(nums2) << endl;
    return 0;
}