t_shirt = {
    "brand": "stone island",
    "size" : "L",
    "price" : "100$",
    "color" : "dark-blue",
    "patch" : "attending"
}
t_shirt_new = {
    "material" : "cotton"
}
t_shirt_new.update(t_shirt)

key = input('введіть ключ:')
if key in t_shirt_new:
    print(t_shirt_new[key])
else:
    print("there is not such key in vocabulary")