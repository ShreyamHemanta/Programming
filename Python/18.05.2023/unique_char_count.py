name = "shreyam"

count_dict = dict()

# for each_element in name:
#     if each_element in count_dict.keys():
#         count_dict[each_element] = count_dict[each_element] + 1
#     else:
#         count_dict[each_element] = 1
# print(count_dict)

for each_ele in name:
    count_dict[each_ele] = count_dict.get(each_ele, 0) + 1
        
print(count_dict)
print(count_dict.get('v', [1,2,3]))
print(count_dict['v'])