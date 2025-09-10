def main():
    tests = int(input())
    for _ in range(tests):
        get_array()


def get_array():
    x = int(input())
    elements=input().split(" ")
    element = []
    Sum = 0
    number1s = 0
    if x <= 1:
        print("NO")
    else:
        for i in range(x):
            element.append(int(elements[i]))
            Sum += element[i]
            if element[i] == 1:
                number1s += 1

        if Sum >= x+number1s:
            print("YES")
        else:
            print("NO")


main()
# get number of test cases; tests
# get number of elements in array; x
# # get the elements in array; elements[]

# condition 1: elements should be greather than 1
# sum >= elements + 1s
