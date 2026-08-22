class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n= arr.size(), i=0;
        while(i+1 < n && arr[i] < arr[i+1]){
            i++;
        }
        if(i==0 || i== n-1){
            return false;
        }
        int j = i;
        while(j+1 < n && arr[j] > arr[j+1]){
            j++;
        }
        return j == n-1;
    }
};