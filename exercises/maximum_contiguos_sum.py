'''
For the given array which consists of integers, write a function that finds 
the sum of a contiguous subarray of numbers which has the largest sum.

For example:
    Input : [2, 3, -44, 99, 13, -5, 32 , -16, 5, 7]
    Output: 139    ( 99 + 13 + -5 + 32)
'''


def max_cont_sum(arr, size):
    latest_max = arr[0]
    final_max = 0

    for num in range(size):
        final_max += arr[num]
        if (latest_max < final_max):
            latest_max = final_max

        if final_max < 0:
            final_max = 0
    return latest_max

arr = [2, 3, -44, 99, 13, -5, 32 , -16, 5, 7]
print("Maximum contiguos sum is: ", max_cont_sum(arr, len(arr)))
