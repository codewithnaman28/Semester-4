import mysql.connector as connector

con = connector.connect(Host="localhost", user="root", port='3306',
                        password="@Anudsmk30", database="pythontest")
print(con)
