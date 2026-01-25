# ===== LIST OPERATIONS =====
print("SUB NAME: LIST")
print("----------------")

my_list = [10, 20, 30]

print("Original List:", my_list)

my_list.append(40)
print("After Append:", my_list)

my_list.remove(20)
print("After Remove:", my_list)

print("Element at index 1:", my_list[1]) 
print("Length of List:", len(my_list))


print("\n\n")   


# ===== SET OPERATIONS =====
print("SUB NAME: SET")
print("--------------")

my_set = {1, 2, 3}

print("Original Set:", my_set)

my_set.add(4)
print("After Add:", my_set)

my_set.remove(2)
print("After Remove:", my_set)

another_set = {3, 5}

print("Union:", my_set.union(another_set))
print("Intersection:", my_set.intersection(another_set))


print("\n\n")   


# ===== DICTIONARY OPERATIONS =====
print("SUB NAME: DICTIONARY")
print("---------------------")

my_dict = {
    "name": "John",
    "age": 21
}

print("Original Dictionary:", my_dict)

my_dict["age"] = 22
print("After Update:", my_dict)

my_dict["city"] = "Delhi"
print("After Adding New Key:", my_dict)

print("Name:", my_dict["name"])

my_dict.pop("age")
print("After Removing Age:", my_dict)
