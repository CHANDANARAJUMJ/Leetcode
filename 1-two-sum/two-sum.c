/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* r = (int*)malloc(*returnSize * sizeof(int));
    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i] + nums[j] == target){
            r[0]=i;
            r[1]=j;
            return r;}
        }
    } *returnSize = 0;
    return NULL;
}