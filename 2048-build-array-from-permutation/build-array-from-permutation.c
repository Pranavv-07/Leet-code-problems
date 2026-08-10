/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int n, int* rs) {
    *rs=n;
    int* res=(int*)malloc(*rs*sizeof(int));

    for(int i=0;i<n;i++)
    {
        res[i]=nums[nums[i]];
    }
    return res;
    

}