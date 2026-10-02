int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    int left = 0;
    int right = numsSize - 1;
    while (left < right)
    {
        if (nums[left] % 2 == 1)
        {
            if (nums[right] % 2 == 0)
            {
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;

                left++;
                right--;
            }
            else
            {
                right--;
            }
        }
        else
        {
            left++;
        }
    }
    *returnSize = numsSize;
    return nums;
}