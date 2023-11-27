def count_letters():
    x1 = input(str("enter text:"))
    x = x1.lower()
    y = len(x)
    print(x)
    list = []

    for i in x:
        list.append(i)

    answer = []
    for i in list:
        if i == " ":
           continue
        counted = list.count(i)
        if  f"{i} = {counted}"  in answer:
            continue
        else:
            answer.append(f"{i} = {counted}")

    print(y)
    print(answer)
#count_letters()

def vocabulary():
    list = []
    x1 = input("enter text:")
    x1 = x1.lower()
    x = x1.split()
    for i in x:
        if len(i) <= 3:
            continue
        if i in list:
            continue
        else:
            list.append(i)
            print(i)

vocabulary()
    
            










