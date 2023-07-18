#include<bits/stdc++.h>
using namespace std;

int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2)
{
   int k = 0, count = 0;
   for (int i = 0; i < nums1.size(); i++)
   {
      for (int j = k; i < nums2.size(); j++)
      {
         if (nums1[i] == nums2[j])
         {
            count++;
            k = j + 1;
         }
      }
   }
   return count;
}
int main()
{
   vector<int> nums1 = {2, 5, 1, 2, 5};
   vector<int> nums2 = {10, 5, 2, 1, 5, 2};

   cout << maxUncrossedLines(nums1, nums2);
}