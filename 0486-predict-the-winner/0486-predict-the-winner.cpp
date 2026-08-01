class Solution {
public:
bool winner(vector<int>& nums,int i,int j,int p1,int p2,bool turn){
    if(i>j){
        return p1>=p2;
    }
    if(turn){
        return winner(nums,i+1,j,p1+nums[i],p2,false) || winner(nums,i,j-1,p1+nums[j],p2,false);

    }
    else{
        return winner(nums,i+1,j,p1,p2+nums[i],true) && winner(nums,i,j-1,p1,p2+nums[j],true);

    }
}
    bool predictTheWinner(vector<int>& nums) {
        
        return winner(nums,0,nums.size()-1,0,0,true);
        
    }
};