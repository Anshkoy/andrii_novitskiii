t_shirt = {
    "brand": "stone island",
    "size" : "L",
    "price" : "100$",
    "color" : "dark-blue",
    "patch" : "attending"
}
key = input('введіть ключ:')
if key in t_shirt:
    print(t_shirt[key])
else:
    print("there is not such key in vocabulary")