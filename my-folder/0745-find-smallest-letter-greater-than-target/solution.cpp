class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int end= letters.size()-1;
        int start =0;
        char res= letters.front();
        while(start<=end )
        {
            int mid= (start+end)/2;
            if (letters[mid]==target) start=mid+1;
            else if(letters[mid]<target) start=mid+1; 
            else {
                res=letters[mid];
                end= mid-1;
            }
        }
        return res;
    }
};
