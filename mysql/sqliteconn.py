import sys
import sqlite3
conn = sqlite3.connect('school')
cursor = conn.cursor()

print("Opened database successfully")
cursor.close()
conn.commit()
conn.close()
