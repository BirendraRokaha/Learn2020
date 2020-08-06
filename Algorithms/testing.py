'''
This file contains all the testing while learning about algorithms
'''

'''
# itterative binary search
def binary_search(A,t):
    low = 0
    high = len(A) - 1

    while low <= high:
        mid = (low+high)//2

        if t == A[mid]:
            return True
        elif t < A[mid]:
            high = mid - 1
        else:
            low = mid + 1

    return False

A,t = [2,4,5,6,7,9,12,35,67,78,89], 67

if binary_search(A,t):
    print('true')
else:
    print('false')
'''


'''
# recursive binary search
def binary_search(A,t,low,high):
    if low > high:
        return False
    else:
        mid = (low+high)//2
        if t  ==  A[mid]:
            return True
        elif t < A[mid]:
            return binary_search(A,t,low,mid-1)
        else:
            return binary_search(A,t,mid+1,high)

A,t = [2,4,5,6,7,9,12,35,67,78,89], 67

if binary_search(A,t,0,len(A)-1):
    print('True')
else:
    print('False')
'''




