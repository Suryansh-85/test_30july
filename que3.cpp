//Q3  A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

//A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

//Sorting of sentence



class Solution {
public:
    string sortSentence(string s) {
           map<int,string>m;
        string temp;
        stringstream ss(s);
        string rm;
        while(ss>>temp){
            rm=temp;
            temp.pop_back();
            m[rm[rm.size()-1]-'0']=temp;
        }
        temp="";
        for(auto x:m){
            temp+=x.second;
            temp+=" ";
        }
        temp.pop_back();
        return temp;
    }
};
