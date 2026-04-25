class Solution {
    public boolean hasDuplicate(int[] nums) {
       Set<Integer>have =new HashSet<>();
       for(int num:nums){
        if(have.contains(num)){
            return true;
        }
        have.add(num);
       }
       return false;
        
    }
}