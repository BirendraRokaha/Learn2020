# check if the gien name is in the list

name_list = ['Ram','Hari','Sita', 'Gita', 'Rita']
a = [i.lower() for i in name_list]

print(a)

b = input("Enter the name to check: ")
c = b.lower()

if c in a:
    print(f"Success, the name {c} exists in the list.")
else:
    print(f"Sorry, the name {c} doesnot exist on the list.")
