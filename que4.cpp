
//Q4 You are given an m x n integer matrix matrix with the following two properties:

//Each row is sorted in non-decreasing order.
//The first integer of each row is greater than the last integer of the previous row.
//Given an integer target, return true if target is in matrix or false otherwise.

//You must write a solution in O(log(m * n)) time complexity.

 


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int start=0;
        int end=matrix.size()-1;
        int mid=(start+end)/2;
        int row;
        while(start<=end){
            if(target>matrix[mid][0]){
                start=mid+1;
            }
            else if(target<matrix[mid][0]){
                end=mid-1;
            }
            else{
                row=mid;
                break;
            }
           
            mid=(start+end)/2;
            row=mid;
        }

        start=0;
        end=matrix[0].size()-1;
        mid=(start+end)/2;
        while(start<=end){
            if(target<matrix[row][mid]){
                end=mid-1;
            }
            else if(target>matrix[row][mid]){
                start=mid+1;
            }
            else{
                return true;
            }
            mid=(start+end)/2;
        }
        return false;
    }
};
