/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* ans=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++)
    {
        int temp=nums[i];
        ans[i]=nums[temp];
    }
    return ans;
}
    