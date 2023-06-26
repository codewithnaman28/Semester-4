import mysql.connector as sql
import pandas as pd
from datetime import datetime
connection = sql.connect(
    host='localhost', database='HOSPITAL', user='root', password='')
print("MOM AND CHILD WELFARE HOSPITAL \n WELCOME")
print(" \n Main Menu \n 1)Staff \n 2)Patient \n 3)Hospital expenses")
choice1 = int(input("Enter your choice as 1,2 or 3:"))
cursor = connection.cursor()
if connection.is_connected:
    if choice1 == 1:
        print(" \n Staff menu \n 1)Add staff \n 2)Remove staff \n 3)Show all staffs \n 4) Find staff")
        choice2 = int(input("Enter your choice:"))
        if choice2 == 1:
            print(
                "Adding new staff. \n Please fill the necessary details.DO NOT KEEP ANY FIELD BLANK")
            index = input("Enter the index number of the new staff:")
            st_id = input("Enter the id code of the new staff:")
            st_name = input("Enter the name of the new staff:")
            profession = input("Enter the profession the new staff will join:")
            department = input(
                "Enter the department assigned to the new staff(enter 'null' if no department assigned):")
            sal = int(input("Enter the monthly salary of the new staff:"))
            age = int(input("Enter the age of the new staff:"))
            contact = input("Enter the contact number of the new staff:")
            dat = datetime.strptime(
                input("Enter the date of joining in the YYYY/MM/DD format:"), '%Y/%m/%d')
            val = (index, st_id, st_name, profession,
                   department, sal, age, dat, contact)
            cursor.execute(
                "INSERT INTO staff VALUES(%s,%s,%s,%s,%s,%s,%s,%s,%s)", val)
            connection.commit()
            print(" \n New staff record added")
        elif choice2 == 2:
            inp = input("Do you want to remove staff record?(yes/no)")
            if inp == "yes":
                st_id = input("Enter the id of the staff you want to remove:")
                cursor.execute("DELETE FROM staff WHERE St_id='%s'", st_id)
                connection.commit()
                print(" \n Record deleted where staff id was ", st_id)
            else:
                print("No record deleted")
        elif choice2 == 3:
            print(" \n All the records are listed below")
            qryshowall = "SELECT * FROM staff;"
            df3 = pd.read_sql(qryshowall, connection)
            print(df3)
        elif choice2 == 4:
            name = input("Enter the name of the staff you want to find:")
            st_id = input("Enter the id of the staff you want to find:")
            searchqry = "SELECT * FROM staff where St_id='%s' AND St_name='%s';" % (
                st_id, name)
            df = pd.read_sql(searchqry, connection)
            print(df)
        else:
            print(" \n Incorrect option entered")
    elif choice1 == 2:
        print("Patient menu \n 1)New Appointment \n 2)Find Appointment \n 3)Delete Appointment")
        choice2 = int(input("Enter your choice:"))
        if choice2 == 1:
            print(
                " \n Adding new patient. \n Please fill the necessary details.DO NOT KEEP ANY FIELD BLANK")
            ind = int(input("Enter the index number of the new appointment:"))
            name = input("Enter the patient's name:")
            pid = input("Enter the appointment code of the patient:")
            sid = input("Enter the consultant id:")
            sname = input("Enter the consultant name:")
            page = int(input("Enter the age of the patient:"))
            cont = input("Enter the contact number of the patient:")
            vdate = input(
                "Enter the date of appointment in YYYY/MM/DD format:")
            status = input("OPD or Admitted?")
            addate = input(
                "Enter the date of admission in YYYY/MM/DD format or type null:")
            rdate = input(
                "Enter the date of release in YYYY/MM/DD format or type null:")
            amt = int(input("Amount due:"))
            pamt = int(input("Amount paid:"))
            vals = (ind, pid, name, sid, sname, page, cont,
                    vdate, status, addate, rdate, amt, pamt)
            cursor.execute(
                "INSERT INTO patient VALUES(%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s)", vals)
            connection.commit()
            print(" \n Record added")
        elif choice2 == 2:
            name = input("Enter the name of the patient you want to find:")
            pid = input(
                "Enter the appointment number of the patient you want to find:")
            qry = "SELECT * FROM patient WHERE Appointment_no='%s' AND Patient_name='%s';" % (
                pid, name)
            df = pd.read_sql(qry, connection)
            print(df)
        elif choice2 == 3:
            choice = input(" \n Do you want to delete record?(yes/no):")
            if choice == 'yes':
                pid = input(
                    "Enter the appointment number of the patient you want to remove record of:")
                cursor.execute(
                    "DELETE FROM patient WHERE Appointment_no='%s'", pid)
                connection.commit()
                print(' \n Record with appointment number ', pid, ' is deleted')
            else:
                print(" \n No record deleted")
        else:
            print(" \n Wrong Choice Entered")
    elif choice1 == 3:
        print("Expenses \n 1) Show monthly expenses \n 2)Total Monthly Expense")
        choice2 = int(input("Enter your choice:"))
        if choice2 == 1:
            print(" \n The monthly expenses are:")
            qry = "select * from expenses;"
            df = pd.read_sql(qry, connection)
            print(df)
        elif choice2 == 2:
            print(" \n Total monthly expense is:")
            qry = "select sum(Monthly_expenses) from expenses;"
            df = pd.read_sql(qry, connection)
            print(df)
        else:
            print("Wrong choice entered")
    else:
        print(" \n Wrong choice entered")
else:
    print(" \n Python and MySQL are not connected")
print(" \n Thank you")
