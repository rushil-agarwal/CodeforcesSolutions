def main():
    string1 = input().lower()
    string2 = input().lower()

    print(calculator(string1, string2))

def calculator(string1, string2):
    if string1 == string2:
        return 0
    else:
        for i in range(len(string1)):
            if string1[i] < string2[i]:
                return "-1"
            elif string1[i] > string2[i]:
                return "1"

main()
