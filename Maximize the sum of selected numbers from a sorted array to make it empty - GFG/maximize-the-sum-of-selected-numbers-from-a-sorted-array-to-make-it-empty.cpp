//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
        public:
    int maximizeSum(int a[], int n) 
    {
        int arr[100001];
        memset(arr, 0, sizeof(arr));
        int maxVal = -1e9;
        
        for(int i=0; i<n; i++)
        {
            maxVal = max(maxVal, a[i]);
            arr[a[i]]++;
        }
        
        int sum =0;
        int ptr = maxVal;
        
        while(ptr >=0)
        {
            sum += ptr*arr[ptr];
            
            if(arr[ptr-1] <= arr[ptr])
            {
                ptr = ptr-2;
            }
            else
            {
                arr[ptr-1] -= arr[ptr];
                ptr--;
            }
        }
        
        return sum;
        
        
    }


};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends