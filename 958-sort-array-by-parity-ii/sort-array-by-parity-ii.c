int* sortArrayByParityII(int* nums, int numsSize, int* returnSize)
{
    int even = 0;
    int odd = 1;
    while (even < numsSize && odd < numsSize)
    {
        if (nums[even] % 2 != 0 && nums[odd] % 2 == 0)
        {
            int temp = nums[even];
            nums[even] = nums[odd];
            nums[odd] = temp;
        }
        if (nums[even] % 2 == 0)
            even += 2;

        if (nums[odd] % 2 != 0)
            odd += 2;
    }
    *returnSize = numsSize;
    return nums;
}