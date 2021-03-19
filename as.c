//int removeDuplicates(int* nums, int numsSize)
//{
//	int dst = 0;
//	int src = 0;
//	while (src < numsSize)
//	{
//		if (nums[dst] == nums[src])
//		{
//			src++;
//			dst++;
//		}
//		else
//		{
//			src++;
//		}
//	}
//
//}
//int removeElement(int* nums, int numsSize, int val) 
//{
//	int* head = nums;
//	int* end = nums + numsSize - 1;
//	while (head <= end)
//	{
//		if (*head == val)
//		{
//			if (*end == val)
//			{
//				end--;
//				numsSize--;
//				continue;
//			}
//			else
//			{
//				int n = *head;
//				*head = *end;
//				*end = n;
//				head++;
//				end--;
//				numsSize--;
//			}
//		}
//		else if (*head != val)
//		{
//			head++;
//		}
//	}
//	return numsSize;
//}
//int removeElement(int* nums, int numsSize, int val)
//{
//	int j = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != val)
//		{
//			nums[j] = nums[i];
//			j++;
//		}
//	}
//	return j;
//}