import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

df = pd.read_csv("test_values.csv")
# listi = ['P0','P1']

listi = []
for i in range(21):
	c = str(i)
	
	listi.append("F{}".format(c))

print(listi)
data = df[listi]
# print(data)
data.plot(kind='line')

plt.legend(loc='best')

plt.show()


# import pandas as pd
# import random
# import matplotlib.pyplot as plt

# x = [random.randint(10,20) for r in range(100)]
# y = [random.randint(0,10) for r in range(100)]

# df = pd.DataFrame([x,y]).T #T for transpose

# df.columns=['a','b']
# print(df)

# df.plot(kind='line')

# plt.legend(loc='upper left')

# plt.show()