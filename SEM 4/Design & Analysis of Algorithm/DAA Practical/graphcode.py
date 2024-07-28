from pylab import rcParams
import matplotlib.pyplot as plt
import math
file = open("data.txt","r")
data = file.read().split("\n")
array1 = []
array2 = []
for i in data: 
    v = i.split(",")
    value1 = int(v[0])
    value2 = int(v[1])
    array1.append(value1)
    array2.append(value2)

for i in range(len(array1)+1):
    for j in range(len(array1)-i-1):
        if array1[j]>array1[j+1]:
            array1[j],array1[j+1]=array1[j+1],array1[j]
            array2[j],array2[j+1]=array2[j+1],array2[j]

a3=[0]*100
for i in range(100):
    a3[i]=array1[i]*math.log(array1[i],2)

plt.title('Randomized Quick Sort')
plt.xlabel('Input Size')
plt.ylabel('No. of comparisons')
plt.plot(array1,array2,label="My Randomized Quick Sort Algorithm graph")
plt.plot(array1,a3,label="nlogn")
plt.legend()
plt.show()
