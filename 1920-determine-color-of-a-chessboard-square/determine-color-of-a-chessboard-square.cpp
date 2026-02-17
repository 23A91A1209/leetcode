class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int num=coordinates[0]-'a';
        num=num+1;
        cout<<num<<" ";
        int n=coordinates[1]-'0';
        cout<<n<<" ";
        if(num%2!=0&& n%2!=0 || n%2==0 && num%2==0){
            return false;
        }
        // else if(num%)
        return true;
    }
};