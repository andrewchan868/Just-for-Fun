import random
poss = []
for i in range(1,50):
    poss.append([i])

number_got = []

n_1 = random.randint(1,50)
number_got.append(n_1)

n_2 = random.randint(1,50)
if n_2 == n_1:
    n_2 = random.randint(1,50)
number_got.append(n_2)

n_3 = random.randint(1,50)
if n_3 == n_1 or n_2:
    n_3 = random.randint(1,50)
number_got.append(n_3)

n_4 = random.randint(1,50)
if n_4 == n_1 or n_2 or n_3:
    n_4 = random.randint(1,50)
number_got.append(n_4)

n_5 = random.randint(1,50)
if n_5 == n_1 or n_2 or n_3 or n_4:
    n_5 = random.randint(1,50)
number_got.append(n_5)


n_6 = random.randint(1,50)
if n_6 == n_1 or n_2 or n_3 or n_4 or n_5:
    n_6 = random.randint(1,50)
number_got.append(n_6)

print(number_got)
