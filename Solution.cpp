class Solution {
  public:
    void swapInt(int &x, int &y){
        int temp = x;
        x=y;
        y=temp;
    }
  
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        l -=1;
        r-=1;
        while (l<r){
            swapInt(arr[l], arr[r]);
            l++;
            r--;
        }
        
        
        return arr;
    }
};
