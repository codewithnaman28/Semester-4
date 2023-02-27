import pymysql


try:
    conn = pymysql.connect(host='localhost', port=3306,
                           user='root', password='@Anudsmk30', database='mydata')
    print("connection established")
except:
    print("connection failed")

# class DBHelper:
#     def __init__(self):
#         self.conn = pymysql.connect(host='localhost',
#                                     port=3306, user='root',
#                                     password='@Anudsmk30',
#                                     database='mydata')
#         query = 'CREATE DATABASE IF NOT EXISTS user(userId int primary key, userName varchar(200), phone varchar(12))'
#         cur = self.conn.cursor()
#         cur.execute(query)
#         print("Created")


# # Main Code
# helper = DBHelper()
