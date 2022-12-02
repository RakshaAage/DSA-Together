#Problem name : To check whether two given strings are an anagram of each other or not.
#Problem link : https://practice.geeksforgeeks.org/problems/anagram-1587115620/1?page=1&curated[]=8&sortBy=submissions


#User function Template for python3

class Solution:
    #Function is to check whether two strings are anagram of each other or not.
    def isAnagram(self,a,b):
        str_a=" ".join(sorted(a))
        str_b=" ".join(sorted(b))
        if(str_a==str_b):
            return True

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        a,b=map(str,input().strip().split())
        if(Solution().isAnagram(a,b)):
            print("YES")
        else:
            print("NO") 
# } Driver Code Ends
