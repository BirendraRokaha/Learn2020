
# Thsi is my python cheet sheet
# Basic vector maths
def SumVector(a,b):
    sum = [(a[0]+b[0]),(a[1]+b[1])]
    return sum
def ProVector(a,s):
    pro = [(s*a[0]),(s*a[1])]
    return pro

a = [-1,2]
b = [4,5]
s = 10
print(f"Sum of a and b is:{SumVector(a,b)}")
print(f"Product of a and s is:{ProVector(a,s)}")

# Introduction to python dictionaries
prices = {'apple':4.99,'orange':3.99,'banana':2.99}

askf = input('apple , orange or banana ')
print(f'the price of {askf} is {prices[askf.lower()]}')



