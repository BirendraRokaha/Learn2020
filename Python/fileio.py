
#File I/O basics
'''
file = open('test.txt')
print(file.read())
'''
# open a file
with open ('test.txt') as f:
    print(f.read())

# append in that file
with  open('test.txt', mode = 'a') as test:
    test.write('\nThis line is added form the python script')

with open ('test.txt') as f:
    print(f.read())

#overwrite in that file
with open('test.txt', mode = 'w') as f:
    f.write('\nThis is to overwrite the file')

with open ('test.txt') as f:
    print(f.read())


