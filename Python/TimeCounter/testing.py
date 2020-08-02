

import os
import datetime

# dt = datetime.datetime(2020,7,29,18,29,29,2129)

# tdelta = datetime.timedelta(hours=20)

# print(tdelta + dt)

dt = datetime.datetime.today()

# tdelta = datetime.timedelta(hours=1)

# print(dt, dt - tdelta)

if not os.path.isfile('start_time.txt'):
    with open('start_time.txt','w') as f:
            start_time = str(datetime.datetime.today())
            f.write(start_time)

with open('start_time.txt','r') as f:
        get_start_time = f.read()
        start_time = datetime.datetime.strptime(get_start_time, '%Y-%m-%d %H:%M:%S.%f')


# get current time
current_time = datetime.datetime.today()


#time passed
passed_time = current_time - start_time
print(f"You have not done it for {passed_time}")


input()