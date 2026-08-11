class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0; int j = matrix.size()-1,mid; bool flag=false;
        while(i<=j){
            mid = i + (j-i)/2;
            if(matrix[mid][0]<=target && matrix[mid][matrix[0].size()-1]>=target){flag=true;break;}
            else if(matrix[mid][0]>target)j=mid-1;
            else if(matrix[mid][matrix[0].size()-1]<target)i=mid+1;
        }
        if(!flag)return false;
        i=0;j=matrix[0].size()-1;int newmid;
        while(i<=j){
            newmid = i + (j-i)/2;
            if(matrix[mid][newmid]==target)return true;
            else if(matrix[mid][newmid]>target)j=newmid-1;
            else if(matrix[mid][newmid]<target)i=newmid+1;
        }
        return false;
    }
};
