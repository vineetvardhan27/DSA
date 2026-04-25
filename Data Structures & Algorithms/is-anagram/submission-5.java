class Solution {
    public boolean isAnagram(String s, String t) {
        int n=s.length();
        int m=t.length();
        if(n!=m){
            return false;
        }
        // String.sort(s);
        // String.sort(t);
        // char[] sa=s.toCharArray();
        // char[] ta=t.toCharArray();
        // Arrays.sort(sa);
        // Arrays.sort(ta);

        // return Arrays.equals(sa,ta);

        int[] val=new int [26];

        for(int i=0;i<n;i++){
            val[s.charAt(i)-'a']++;
            val[t.charAt(i)-'a']--;
        }

        for(int num:val){
            if(num!=0){
                return false;
            }
        }
        return true;

    }
}
