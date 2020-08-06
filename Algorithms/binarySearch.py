# Implement Binary search in Python


arr =  [2,4,6,8,9,10,13,16,18,19,20,30,38,41,43,45,47,48,55,58]
target = 48


# linear search is not the most optimal method for searching through a list as it has to move through all the elements in the list.
def linear_search(arr , target):
    for i in arr:
        if  i == target:
            return f'The element {i} is present in the list.'
    return f'The element {target} doesnot exist in the list.'

# divide and conquer type algorithm
# divides the list in 2 halves everytime respective to the range that the target falls in
def binary_search_itterative(arr,target):
    low = 0
    high = len(arr)-1
    while low <= high:
        mid =  (low+high) // 2
        if target == arr[mid]:
            return True
        elif target < arr[mid]:
            high = mid - 1
        else:
            low = mid + 1

    return False

# recursive way bor binary searching
def binary_search_recursive(arr,target,low,high):
    if low > high:
        return False
    else:
        mid = (low+high)//2
        if target == arr[mid]:
            return True
        elif target < arr[mid]:
            return binary_search_recursive(arr,target,low,mid -1)
        else:
            return binary_search_recursive(arr,target,mid +1 ,high)




print('Linear Search')
print(linear_search(arr,target))

print('Binary Search')
print('Itterative')
if binary_search_itterative(arr,target):
    print(f'The {target} is present in the list.')
else:
    print(f'The {target} is not present in the list.')

print('Recursive')
if binary_search_recursive(arr,target,0,len(arr)-1):
    print(f'The {target} is present in the list.')
else:
    print(f'The {target} is not present in the list.')


