//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        
        if(n==2 && arr[0]==arr[1])
            return -1;
            
        if(n==2)
            return arr[0]>arr[1] ? arr[1] : arr[0];
        int lar = -1;
        int slar= -2;
       
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>lar)
            {
                slar=lar;
                lar=arr[i];
            }
            if( arr[i]!=lar && arr[i]>slar){
                slar=arr[i];
               
            }
        }
        return slar;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends