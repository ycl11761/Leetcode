/*put num[i] under the index i, only swap that need to (nums[i] != i) and can ((nums[i]>0 && nums[i]<numsSize)) be swapped;
 *if (nums[nums[i]] == nums[i]), [1,1] will get into trouble. -> repeated numbers.
 */

void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int firstMissingPositive(int nums[], int numsSize){
    int i=0;
    while(i<numsSize){
        if ((nums[i]>0 && nums[i]<numsSize) && nums[i] != i && nums[i]!=nums[nums[i]])   
            swap(&nums[i], &nums[nums[i]]);  
        else 
            i++;
    }
    for (i = 1; i < numsSize; i++)   
        if (nums[i] != i) 
            return i;  
  
    return nums[0] == numsSize? numsSize+1:numsSize;  
}  
