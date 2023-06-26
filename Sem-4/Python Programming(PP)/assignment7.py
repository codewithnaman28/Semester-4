from matplotlib import style
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as mpimg


# data = np.array(['a', 'b', 'c', 'd'])
# s = pd.Series(data)
# print(s)

# input = np.array(['PPS','BEEE','MECH','CHEM'])
# series_data = pd.Series(input, index=[1,2,3,4])
# print(series_data)

# # Create a Series from list
# list = ['M', 'I', 'T', 2023]
# ser = pd.Series(list)
# print(ser)

# # Create a Series from dictionary
# dic = {'a': 0., 'b': 1., 'c': 2.}
# s  = pd.Series(dic)
# print(s)

# # Creating Simple array

# data = np.array(['M', 'I', 'T', 'W', 'P', 'P', 'U', 'N', 'E'])
# ser = pd.Series(data)

# # Retrieve the first three elements
# print(ser[:3])

# # Creating a Data Frame using list
# # list of strings
# list = ['MIT', 'WPT', 11, 23.66]
# # Create a DataFrame()
# df = pd.DataFrame(list)
# print(df)
# print()

# # Creating a Data Frame using dictionary
# data = {'Name':['Tom', 'Jack', 'Steve', 'Ricky'], 'Age':[28,34,29,42]}
# # Create a DataFrame
# df = pd.DataFrame(data)
# print(df)

# data = pd.read_csv('/Users/namansoni/Desktop/Sem-4/Python Programming(PP)/Automobile_data.csv')
# print(data.head(5))
# print(data.tail(5))


# plt.plot([1, 2, 3], [4, 5, 6])
# plt.xlabel('x - axis')
# plt.ylabel('y - axis')
# plt.show()

# xpoints = np.array([1, 8])
# ypoints = np.array([3, 10])
# plt.xlabel('x - axis')
# plt.ylabel('y - axis')
# plt.plot(xpoints, ypoints, '--', color='turquoise')
# plt.show()

# plt.bar([1, 3, 5], [5, 7, 8], label="Bar", color= 'purple')
# plt.bar([2,4,6],[6,9,10], label="Bar2", color='green')
# plt.legend()
# plt.xlabel('x - axis')
# plt.ylabel('y - axis')
# plt.title('Bar Graph')
# plt.show()

# x = np.random.normal(170, 10, 250)
# plt.hist(x)
# plt.show()

# plt.bar = (pd.read_csv('/Users/namansoni/Desktop/Sem-4/Python Programming(PP)/Automobile_data.csv'))

# img = mpimg.imread('/Users/namansoni/Desktop/1.png')
# imgplot = plt.imshow(img)
# imgplot = plt.imshow(img)


style.use("ggplot")
x = [5,8,10]
y = [12, 6, 8]
x2 = [2,3,5]
y2 = [3,5,3]
plt.plot(x,y, 'green', label = 'line one', linewidth = '5')
plt.plot(x2, y2, 'red', label = 'line two', linewidth = '5')
plt.title('Epic Info')
plt.xlabel('one')
plt.ylabel('two')
plt.legend()
plt.show()
