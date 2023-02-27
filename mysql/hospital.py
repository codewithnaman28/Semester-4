import sys
from tkinter import *
from tkinter import ttk
import random
import time
import datetime
from tkinter import messagebox
import sqlite3


class Hospital:
    def __init__(self, root):
        self.root = root
        self.root.title("Hospital Management System")
        self.root.geometry("1540x800+0+0")

        self.Nameoftablets = StringVar()
        self.ref = StringVar()
        self.Dose = StringVar()
        self.NoofTablets = StringVar()
        self.Lot = StringVar()
        self.Issuedate = StringVar()
        self.Expdate = StringVar()
        self.DailyDose = StringVar()
        self.sideEffect = StringVar()
        self.FurtherInformation = StringVar()
        self.StorageAdvice = StringVar()
        self.DrivingUsingMachine = StringVar()
        self.HowtoUseMedications = StringVar()
        self.PatientId = StringVar()
        self.nhsNumber = StringVar()
        self.PatientName = StringVar()
        self.DateOfBirth = StringVar()
        self.PatientAddress = StringVar()
        self.BloodP = StringVar()

        lbltitle = Label(self.root, bd=20, relief=RIDGE, text="Hospital Management System",
                         fg="red", bg="white", font=("Times New Roman", 50, "bold"))
        lbltitle.pack(side=TOP, fill=X)

        # =========================DataFrame========================
        Dataframe = Frame(self.root, relief=RIDGE)
        Dataframe.place(x=0, y=130, width=1412, height=400)

        dataframeLeft = LabelFrame(Dataframe, bd=10, relief=RIDGE, padx=10,
                                   font=("Times New Roman", 50, "bold"), text="Patient Information")
        dataframeLeft.place(x=10, y=5, width=970, height=350)

        dataframeRight = LabelFrame(Dataframe, bd=10, relief=RIDGE, padx=10,
                                    font=("Times New Roman", 50, "bold"), text="Prescription")
        dataframeRight.place(x=990, y=5, width=423, height=350)

        # =========================Buttons Frame========================

        ButtonFrame = Frame(self.root, bd=20, relief=RIDGE)
        ButtonFrame.place(x=10, y=500, width=1412, height=70)

        # =========================Buttons Frame========================

        DetailsFrame = Frame(self.root, bd=20, relief=RIDGE)
        DetailsFrame.place(x=10, y=580, width=1412, height=190)

        # =========================dataframeLeft========================

        lblNameTablet = Label(dataframeLeft, text="Names of Tablets",
                              font=("Times New Roman", 20, "bold"), padx=2, pady=6)
        lblNameTablet.grid(row=0, column=0)

        comNameTablet = ttk.Combobox(dataframeLeft, textvariable=self.Nameoftablets, state="readonly",
                                     font=("Times New Roman", 20, "bold"),
                                     width=33)
        comNameTablet["values"] = (
            "Dolo 350", "Paracetamol", "Aspirin", "Crocin", "Monter LC", "Neprocin")
        comNameTablet.grid(row=0, column=1)

        lblref = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                       text="Reference No.:", padx=2)
        lblref.grid(row=1, column=0, sticky=W)
        textref = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.ref, width=35)
        textref.grid(row=1, column=1)

        lbldose = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                        text="Dose:", padx=2)
        lbldose.grid(row=2, column=0, sticky=W)
        textdose = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.Dose, width=35)
        textdose.grid(row=2, column=1)

        lblNoOfTablets = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                               text="No. Of Tablets:", padx=2)
        lblNoOfTablets.grid(row=3, column=0, sticky=W)
        textNoOfTablets = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.NoofTablets, width=35)
        textNoOfTablets.grid(row=3, column=1)

        lblLot = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                       text="Lot:", padx=2)
        lblLot.grid(row=4, column=0, sticky=W)
        textLot = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.Lot, width=35)
        textLot.grid(row=4, column=1)

        lblissuedate = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                             text="Issue Date:", padx=2)
        lblissuedate.grid(row=5, column=0, sticky=W)
        textissuedate = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.Issuedate, width=35)
        textissuedate.grid(row=5, column=1)

        lblexpirydate = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                              text="Exp Date:", padx=2)
        lblexpirydate.grid(row=6, column=0, sticky=W)
        textexpirydate = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.Expdate, width=35)
        textexpirydate.grid(row=6, column=1)

        lbldailydose = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                             text="Daily Dose:", padx=2)
        lbldailydose.grid(row=7, column=0, sticky=W)
        textdailydose = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.DailyDose, width=35)
        textdailydose.grid(row=7, column=1)

        lblsideeffect = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                              text="Side Effect:", padx=2)
        lblsideeffect.grid(row=8, column=0, sticky=W)
        textsideeffect = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.sideEffect, width=35)
        textsideeffect.grid(row=8, column=1)

        lblfurtherinfo = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                               text="Further Information:", padx=2)
        lblfurtherinfo.grid(row=0, column=3, sticky=W)
        textfurtherinfo = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.FurtherInformation, width=27)
        textfurtherinfo.grid(row=0, column=4)

        lblbloodp = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                          text="Blood Pressure:", padx=2)
        lblbloodp.grid(row=1, column=3, sticky=W)
        textbloodp = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.BloodP, width=27)
        textbloodp.grid(row=1, column=4)

        lblstorageadvice = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                                 text="Storage Advice:", padx=2)
        lblstorageadvice.grid(row=2, column=3, sticky=W)
        textstorageadvice = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.StorageAdvice, width=27)
        textstorageadvice.grid(row=2, column=4)

        lblmedication = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                              text="Medication:", padx=2)
        lblmedication.grid(row=3, column=3, sticky=W)
        textmedication = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.HowtoUseMedications, width=27)
        textmedication.grid(row=3, column=4)

        lblpatientid = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                             text="Patient ID:", padx=2)
        lblpatientid.grid(row=4, column=3, sticky=W)
        textpatientid = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.PatientId, width=27)
        textpatientid.grid(row=4, column=4)

        lblNHSno = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                         text="NHS No.:", padx=2)
        lblNHSno.grid(row=5, column=3, sticky=W)
        textNHSno = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.nhsNumber, width=27)
        textNHSno.grid(row=5, column=4)

        lblpatientname = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                               text="Patient Name:", padx=2)
        lblpatientname.grid(row=6, column=3, sticky=W)
        textpatientname = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.PatientName, width=27)
        textpatientname.grid(row=6, column=4)

        lbldob = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                       text="Date Of Birth", padx=2)
        lbldob.grid(row=7, column=3, sticky=W)
        textdob = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.DateOfBirth, width=27)
        textdob.grid(row=7, column=4)

        lblpatientadd = Label(dataframeLeft, font=("Times New Roman", 20, "bold"),
                              text="Patient Address", padx=2)
        lblpatientadd.grid(row=8, column=3, sticky=W)
        textpatientadd = Entry(dataframeLeft, font=(
            "Times New Roman", 15, "bold"), textvariable=self.PatientAddress, width=27)
        textpatientadd.grid(row=8, column=4)

        # =========================dataframeRight========================

        self.textPrescription = Text(dataframeRight, font=(
            "Times New Roman", 15, "bold"), width=47, height=15, padx=2, pady=6)
        self.textPrescription.grid(row=0, column=0)

        # =========================Buttons========================

        btnPrescription = Button(ButtonFrame, text="Prescription", fg="green", bg="green", font=(
            "Times New Roman", 15, "bold"), width=23)
        btnPrescription.grid(row=0, column=0)

        btnPrescriptiondata = Button(ButtonFrame, text="Prescription Data", fg="green", bg="green", font=(
            "Times New Roman", 15, "bold"), width=23)
        btnPrescriptiondata.grid(row=0, column=1)

        btnUpdate = Button(ButtonFrame, text="Update", fg="green", bg="green", font=(
            "Times New Roman", 15, "bold"), width=23)
        btnUpdate.grid(row=0, column=2)

        btnDelete = Button(ButtonFrame, text="Delete", fg="green", bg="green", font=(
            "Times New Roman", 15, "bold"), width=23)
        btnDelete.grid(row=0, column=3)

        btnClear = Button(ButtonFrame, text="Clear", fg="green", bg="green", font=(
            "Times New Roman", 15, "bold"), width=23)
        btnClear.grid(row=0, column=4)

        btnExit = Button(ButtonFrame, text="Exit", fg="green", bg="green", font=(
            "Times New Roman", 15, "bold"), width=23)
        btnExit.grid(row=0, column=5)

        # =========================Table============================
        # =========================Scrollbar========================
        scroll_x = ttk.Scrollbar(DetailsFrame, orient=HORIZONTAL)
        scroll_y = ttk.Scrollbar(DetailsFrame, orient=VERTICAL)
        self.hospital_table = ttk.Treeview(DetailsFrame, columns=(
            "nameoftable", "ref", "dose", "nooftablets", "lot", "issuedate", "expdate",
            "dailydose", "storage", "nhsnumber", "pname", "dob", "address"), xscrollcommand=scroll_y.set,
            yscrollcommand=scroll_x.set)
        scroll_x.pack(side=BOTTOM, fill=X)
        scroll_y.pack(side=RIGHT, fill=Y)

        scroll_x = ttk.Scrollbar(command=self.hospital_table.xview)
        scroll_y = ttk.Scrollbar(command=self.hospital_table.yview)

        self.hospital_table.heading("nameoftable", text="Name of Tablets")
        self.hospital_table.heading("ref", text="Reference No.")
        self.hospital_table.heading("dose", text="Dose")
        self.hospital_table.heading("nooftablets", text="No. of Tablets")
        self.hospital_table.heading("lot", text="Lot")
        self.hospital_table.heading("issuedate", text="Issue Date")
        self.hospital_table.heading("expdate", text="Expiry Date")
        self.hospital_table.heading("dailydose", text="Daily Dosage")
        self.hospital_table.heading("storage", text="Storage")
        self.hospital_table.heading("nhsnumber", text="NHS Number")
        self.hospital_table.heading("pname", text="Patient Name")
        self.hospital_table.heading("dob", text="Date of Birth")
        self.hospital_table.heading("address", text="Address")

        self.hospital_table["show"] = "headings"

        self.hospital_table.pack(fill=BOTH, expand=1)

        self.hospital_table.column("nameoftable", width=100)
        self.hospital_table.column("ref", width=100)
        self.hospital_table.column("dose", width=100)
        self.hospital_table.column("nooftablets", width=100)
        self.hospital_table.column("lot", width=100)
        self.hospital_table.column("issuedate", width=100)
        self.hospital_table.column("expdate", width=100)
        self.hospital_table.column("dailydose", width=100)
        self.hospital_table.column("storage", width=100)
        self.hospital_table.column("nhsnumber", width=100)
        self.hospital_table.column("pname", width=100)
        self.hospital_table.column("dob", width=100)
        self.hospital_table.column("address", width=100)

        # # =========================Functionality Declaration============================

        conn = sqlite3.connect('mydata')
        cursor = conn.cursor()
        cursor.execute("insert into hospital values (%s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s)",
                       self.Nameoftablets.get(),
                       self.ref.get(),
                       self.Dose.get(),
                       self.NoofTablets.get(),
                       self.Lot.get(),
                       self.Issuedate.get(),
                       self.Expdate.get(),
                       self.DailyDose.get(),
                       self.sideEffect.get(),
                       self.FurtherInformation.get(),
                       self.StorageAdvice.get(),
                       self.DrivingUsingMachine.get(),
                       self.HowtoUseMedications.get(),
                       self.PatientId.get(),
                       self.nhsNumber.get(),
                       self.PatientName.get(),
                       self.DateOfBirth.get(),
                       self.PatientAddress.get(),
                       self.BloodP.get(),
                       )
        conn.commit()
        conn.close()

root = Tk()
ob = Hospital(root)
root.mainloop()
