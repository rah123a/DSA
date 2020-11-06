#include <iostream>
#include<unordered_map> 
#include<map>
#include<cstring>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std; 
  
void longestSubsequence(int a[], int n) 
{ 
    // stores the index of elements 
    unordered_map<int,int> mp; 
    sort(a,a+n);
    int dp[n]; 
    memset(dp, 0, sizeof(dp)); 
  
    int maximum = INT_MIN; 
  
    // iterate for all element 
    int index = -1; 
    for (int i = 0; i < n; i++) { 
  
        // if a[i]-1 is present before i-th index 
        if (mp.find(a[i] - 1) != mp.end()) { 
  
            // last index of a[i]-1 
            int lastIndex = mp[a[i] - 1] - 1; 
  
            // relation 
            dp[i] = 1 + dp[lastIndex]; 
        } 
        else
            dp[i] = 1; 
			 
        mp[a[i]] = i + 1; 
  
        // stores the longest length 
        if (maximum < dp[i]) { 
            maximum = dp[i]; 
            index = i; 
        } 
    }  
    vector<int> output;
    for (int curr = a[index] - maximum + 1; curr <= a[index]; curr++) 
       { 
           output.push_back(curr);
       }
        
        return vector;
} 
  
// Driver Code 
int main() 
{ 
    int a[] = { 10,9,8,7,15,2,3 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    longestSubsequence(a, n); 
    return 0; 
} 
//////////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

class base
{public:
    int element;
    int row;
    int column;
    
};


class Compare
{
public:
    bool operator() (base a, base b)
    {
        return a.element > b.element;
    }
};



vector<int> mergeKSortedArrays(vector<vector<int>*> input){
    vector<int>output;
    priority_queue<base, vector<base>, Compare>q;
    
    for( int i=0;i<input.size();i++)
    {
        base b;
        b.element=input[i]->at(0);
        b.row=i;
        b.column=0;
        q.push(b);
    }
    
    
    while(!q.empty())
    { 
        base b=q.top();
         q.pop();
     
     output.push_back(b.element);
     int i=b.row;
     int j=b.column;
     
     if(j<input[i]->size()-1)
     {
         base c;
         c.element=input[i]->at(j+1);
         c.row=i;
         c.column=j+1;
         q.push(c);
     }
     
    }  
    
    return output;    
        

}
