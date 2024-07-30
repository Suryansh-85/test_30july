//Q5 To flip an image horizontally means that each row of the image is reversed.

//For example, flipping [1,1,0] horizontally results in [0,1,1].
//To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

//For example, inverting [0,1,1] results in [1,0,0].


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
          int n = image.size();
        for(auto&row : image){
            int i = 0;
            int  j = n - 1;
            while (i <= j){
                if(i == j){
                    row[i] ^= 1; // Invert the middle element when i == j in odd length rows
                }else{
                    // Swap using XOR and invert
                    row[i] ^= row[j];
                    row[j] ^= row[i];
                    row[i] ^= row[j];
                    row[i] ^= 1;
                    row[j] ^= 1;

                }
               i++;
                j--;
            }
        }
        return image;
    }
};
