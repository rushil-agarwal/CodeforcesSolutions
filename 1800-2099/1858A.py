def main():
    turns = int(input())
    for _ in range(turns):
        string = input().split(" ")
        a = int(string[0])
        b = int(string[1])
        c = int(string[2])
        calculator(a,b,c)

def calculator(a,b,c):
    if c%2 == 0 and a > b:
        print("First")
    elif c%2 == 0 and a < b:
        print("Second")
    elif c%2 != 0 and a >= b:
        print("First")
    else:
        print("Second")


main()

#if "either" button is even, and anita has more button she wins, FIRST
#if "either" button is even, and anita has lesser buttons, she loses, SECOND
#if "either" buttpn is odd, and anihas has lesser buttons

# if either button is odd, and anita has more than or equal to button, then she wins
