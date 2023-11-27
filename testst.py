def every_three_nums(start):
    nums_list = []
    while start < 100:
        nums_list.append(start)
        start += 3
    return nums_list

# Розкоментуйте рядок нижче, коли ваша функція буде готова
print(every_three_nums(88))
