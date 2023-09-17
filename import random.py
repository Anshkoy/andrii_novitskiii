import random
a = 0
answer = []
result = []
while a < 100:
    a += 1
    answer.append(random.randint(100, 999))
for number in answer:
    number_in_string = str(number)
    if number_in_string[0] == number_in_string[-1]:
        result.append(number_in_string)

print(result)






