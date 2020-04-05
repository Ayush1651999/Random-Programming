from matplotlib import pyplot as plt

x_coor = []
y_coor = []
for i in range(10):
    x_coor.append(i)
    x_coor[i] = '{0:.2f}'.format(float(x_coor[i]))
    y_coor.append(i**2)

plt.plot(x_coor, y_coor)
plt.show()