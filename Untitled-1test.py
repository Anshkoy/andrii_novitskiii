text1 = input("введіть слово:")
text = list(text1)
key = int(input("введіть ключ:"))
list = []
part = ""
completed = ""
second_key = key
a = 0
while a <= key:
    for i in range(key - 1, len(text), second_key):
        part += text[i]
    list.append(part)
    key = key - 1
    part = ""
    a += 1
for i in list:
    completed += str(i)

print(completed)


    