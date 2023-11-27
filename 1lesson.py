text = input("введіть слово:")
list = list(text)
key = int(input("введіть ключ:"))
x1 = len(text) / key
x = int(x1)
upper_part = ""
a = 0
answer = ""
while True:
    for i in range(0, len(text), key):
        answer += text[i]
        a += 1
        key -= 1
        print(answer)
    if key == 1:
        lkfewjr = input("fwfwdfw")

    
print(answer)