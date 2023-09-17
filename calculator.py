while True:
    choose_operation = input(" 1.додавання \n 2.віднімання \n 3.множення \n 4.ділення \n введіть номер:")
    choose_operation = int(choose_operation)
    
    if choose_operation == 1:
        first_term = int(input("введіть число:"))
        second_term = int(input("введіть число:"))
        adding_result = first_term + second_term
        print(f'відповідь:{adding_result}')
    if choose_operation == 2:
        subtrahend = int(input("введіть число:"))
        minuended = int(input("введіть число:"))
        subtraction_result = subtrahend - minuended
        print(f'відповідь:{subtraction_result}')
    if choose_operation == 3:
        first_multiplier = int(input("введіть число:"))
        second_multiplier = int(input("введіть число:"))
        multiplier_result = first_multiplier * second_multiplier
        print(f'відповідь:{multiplier_result}')
    if choose_operation == 4:
        divinded = int(input("введіть число:"))
        divider = int(input("введіть число:"))
        if divider == 0:
            print("на 0 ділити не можна")
        else:
            divine_result =int(divinded / divider)
            print(f'відповідь:{divine_result}')