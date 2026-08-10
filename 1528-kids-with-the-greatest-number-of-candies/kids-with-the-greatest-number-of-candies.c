/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
        *returnSize=candiesSize;
        bool* res=(bool*)malloc(*returnSize*sizeof(bool));
        int maxcandies=candies[0];
        for(int i=1;i<candiesSize;i++)
        {
            if(candies[i]>maxcandies)
            {
                maxcandies=candies[i];
            }

        }
        for(int i=0;i<candiesSize;i++)
        {
            if(candies[i]+extraCandies>=maxcandies)
            {
                res[i]=true;   
            }
            else res[i]=false;
        }
    return res;
}