from matplotlib import pyplot as plt

f1 = open('train_acc_0.txt', 'r')
data1 = f1.read()

f2 = open('train_acc_1.txt', 'r')
data2 = f2.read()

f3 = open('val_acc_0.txt', 'r')
data3 = f3.read()

f4 = open('val_acc_1.txt', 'r')
data4 = f4.read()

data1 = list(data1.split("\n"))
data1 = [float(i) for i in data1[:-2]]

data2 = list(data2.split("\n"))
data2 = [float(i) for i in data2[:-2]]

data3 = list(data3.split("\n"))
data3 = [float(i) for i in data3[:-2]]

data4 = list(data4.split("\n"))
data4 = [float(i) for i in data4[:-2]]


data1+=data2
data3+=data4

plt.plot(data1, label = 'generator')
plt.legend()
plt.plot(data3, label = 'discriminator')
plt.legend()
plt.show()