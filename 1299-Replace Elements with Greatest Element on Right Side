class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx=-1;
        vector<int> res(arr.size(),-2);
        if (arr.size()==1){res[0]=mx; return res;}
        res[arr.size()-1]=mx;
        for(int i=arr.size()-1;i>0;i--)
        {
            if(arr[i]>mx){mx=arr[i];res[i-1]=mx;}
            else{res[i-1]=mx;}
        }
     
        return res;
    }
};
