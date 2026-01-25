# .....an array of integer is given you have need to reverse the given array python code

# def reverse_array(arr):
#     start = 0
#     end=len(arr)-1
#     while start<end:
#         arr[start],arr[end]=arr[end],arr[start]
#         start=start+1
#         end=end-1
#     return arr
# arr=[10,20,40]
# reverse_array(arr)

# print(arr)


# .....find min and max elements of array using loops

# arr=[1,2,5,7,9]
# mini=arr[0]
# maxi=arr[0]
# for i in range(1,len(arr)):
#    if  arr[i]<mini:
      
#       mini = arr[i]
#    if arr[i]>maxi:
#       maxi = arr[i] 
# print(maxi)
# print(mini)


#...... find the kth smallest the element in the array

# def kth_smallest(arr, k):
#     if k < 1 or k > len(arr):
#         raise ValueError("k is out of bounds")
#     arr.sort()
#     return arr[k - 1]
# arr = [7, 3, 1, 9, 5]
# k = 2
# print(kth_smallest(arr, k))

#........union of two arrays
# set arr is used to remove duplicates
# | this symbol between 2 arrays means union

# def union_arrays(arr1, arr2):
#     return list(set(arr1) | set(arr2))
# a = [1, 2, 3, 4]
# b = [3, 4, 5, 6]

# print(union_arrays(a, b))



# largest element of the array
def largest_element(arr):
    if not arr:
        raise ValueError("Array is empty")
    return max(arr)
arr = [17, 33, 51, 69, 95]
print(largest_element(arr))
