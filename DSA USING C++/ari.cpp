#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int kitne_admi_the;
      cin >> kitne_admi_the;
      int myArray[kitne_admi_the];
      for (int i = 0; i < kitne_admi_the; i++)
         cin >> myArray[i];
      map<int, pair<int, int>> FreqArr;
      int nextNum = 1;
      vector<int> myAns;
      for (int i = 0; i < kitne_admi_the; i++)
      {
         if (FreqArr.find(myArray[i]) != FreqArr.end())
         {
            if (FreqArr[myArray[i]].second > 0)
            {
               myAns.push_back(FreqArr[myArray[i]].first);
               FreqArr[myArray[i]].second--;
               if (FreqArr[myArray[i]].second == 0)
                  FreqArr.erase(myArray[i]);
            }
         }
         else
         {
            FreqArr[myArray[i]] = {nextNum, myArray[i] - 1};
            if (FreqArr[myArray[i]].second == 8)
               FreqArr.erase(myArray[i]);
            myAns.push_back(nextNum);
            nextNum++;
         }
      }
      
      bool falg = 1;
      for (auto i : FreqArr)
      {
         if (i.second.second > 0)
         {
            falg = 0;
            break;
         }
      }
      if (falg == 0)
         cout << -1 << endl;
      else
      {
         for (auto it : myAns)
            cout << it << " ";
         cout << endl;
      }
   }
}