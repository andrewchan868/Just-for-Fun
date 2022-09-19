import random
required_six = 3
length_array = []
for i in range(int(1e3)):
    sixs = 0
    length = 0
    while sixs < required_six:
        length +=1
        if random.choice(['1','2',"3","4","5","6"])=='6':
            sixs +=1
        else:
            sixs = 0
    length_array.append(length)
    
print(length_array)
total = 0
i = 0
for i in range(len(length_array)):
    total = total+length_array[i]

print(total/1e3)
