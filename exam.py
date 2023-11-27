def greetings():
    name = input("enter name:")
    if name == "" or " ":
        print("Hello andrii")
    else:
        print(f"Hello {name}")

greetings()