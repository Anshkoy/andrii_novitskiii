x = input("enter:")
list = x.split()
answer = ""
for word in list:
    answer += word[: : -1] + " "
print(answer)
