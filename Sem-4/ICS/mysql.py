import mysql.connector
# Connect to the database

cnx = mysql.connector.connect(
    user='root', password='password', host='127.0.0.1', database='mysql')
cursor = cnx.cursor()

# Prepare a statement with parameters
stmt = "SELECT * FROM users WHERE username = % AND password = %5"
params = ("admin", "password' OR 1=1 --")

# Execute the statement with parameters
cursor.execute(stmt, params)

# Fetch the results
for (id, username, password) in cursor:  # type: ignore
    print("id={}, username={}, password={}".format(id, username, password))

# Close the connection
cursor.close()
cnx.close()
