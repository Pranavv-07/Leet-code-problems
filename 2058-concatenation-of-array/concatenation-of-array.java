class Solution {
    public int[] getConcatenation(int[] arr) {
    int n = arr.length;
    int[] res = new int[2 * n];
    int k=0;
    for(int i=0;i<n;i++) 
    {
        res[k]=arr[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        res[k]=arr[i];
        k++;
    }
    return res;
        
    }
}