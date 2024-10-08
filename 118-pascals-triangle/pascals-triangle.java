class Solution {
    public static List<Integer> row(int r){
        long res=1;
        List<Integer> arow=new ArrayList<>();
        arow.add(1);

        for(int j=1;j<r;j++){
            res=res*(r-j);
            res=res/j;
            arow.add((int)res);
        }
        return arow;
    }
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans=new ArrayList<>();
        for(int i=1;i<=numRows;i++){
            ans.add(row(i));
        }
        return ans;
    }
}