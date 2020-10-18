'''
Using recurssion
'''


def ficonacchi(n,now,before):

    while n != 0:

        print(now)

        # print ratio
        # if (now != 0)  and (before !=0):
            # print(now/before)
        all_sum = now + before
        before = now
        now = all_sum
        return ficonacchi(n-1,now,before)

n = 50

ficonacchi(n,0,1)
