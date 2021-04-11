string1 = input("Type first string: ").split()
string2 = input("Type second string: ").split()

for word in string1:
    if word in string2:
        string1.remove(word)

print("The final version of string is:")
for word in string1:
    print(word, end=" ")
