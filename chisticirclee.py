text = input("entert text:")
text = list(text)
key = int(input("enter key:"))
list = []
part = ""
true_key = key
answer = ""
while 0 < key:
    for i in range(key - 1, len(text), int(true_key)):
        part += text[i]
    list.append(part)
    key -= 1
    part = ""

for i in list:
    answer += i

print(answer)


    
