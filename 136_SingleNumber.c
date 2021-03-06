//using exclusive-or, which will return 0 if two numbers are the same
int singleNumber(int* nums, int numsSize) {
    if(nums==NULL)return NULL;
    int ret = nums[0];
    for(int i=1;i<numsSize;i++){
        ret = ret^nums[i];//bitwise exclusive or
    }
    return ret;
}
