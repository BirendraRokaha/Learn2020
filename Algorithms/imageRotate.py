# Rotate a 2d array:

def rotator(A):
    N = len(A)
    # First transpose the matrix
    for i in range(N):
        for j in range(i+1,N):
            A[i][j], A[j][i] = A[j][i], A[i][j]

    # Flip the matrix horizontally
    for i in range(N):
        for j in range(N//2):
            A[i][j],A[i][N-1-j] = A[i][N-1-j],A[i][j]
    return A

#test case
A = [[1,2,3],
     [4,5,6],
     [7,8,9]
     ]

B = [[1,2,3,4],
     [5,6,7,8],
     [9,10,11,12],
     [13,14,15,16]
     ]


#Calling the function and printing the results
for i in range(len(A)):
    print(A[i])

arr = rotator(A)

for i in arr:
    print(i)

for i in range(len(B)):
    print(B[i])

arr = rotator(B)

for i in arr:
    print(i)
