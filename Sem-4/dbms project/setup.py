import mysql.connector

# Connect to MySQL database server
db = mysql.connector.connect(
    host="127.0.0.1",
    port=3306,
    user="root",
    password="password")
print("Connected to:", db.get_server_info())
