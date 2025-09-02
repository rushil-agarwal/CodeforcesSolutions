string = input().split(" ")
cost = int(string[0])
money = int(string[1])
amount = int(string[2])
required = 0
for i in range(amount):
    required = required + cost*(i+1)
if required > money:
    borrow = required - money
else:
    borrow = 0
print(borrow)