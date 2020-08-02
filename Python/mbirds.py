#Hackerrank migratory birds problem solving
import collections

def bird_counter(arr):
    b = [0,0,0,0,0,0]
    for i in arr:
        b[i]+=1
    return b.index(max(b))

arr = [1,1,1,1,3,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,3,3,3,4,4,5,5,5]

print(bird_counter(arr))
