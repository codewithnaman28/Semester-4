
        # def iPrescriptionData(self):
        #     if self.Nameoftablets.get() == "" or self.ref.get() == "":
        #         messagebox.showerror("Error", "All fields are required")
        #     else:
        #         conn = pymysql.connect(
        #             host='localhost', port=3306, user='root', password='@Anudsmk30', database='mydata')
        #         my_cursor = conn.cursor()
        #         my_cursor.execute("insert into hospital values(%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s)",
        #                           (
        #                               self.Nameoftablets.get(),
        #                               self.ref.get(),
        #                               self.dose.get(),
        #                               self.nooftablets.get(),
        #                               self.lot.get(),
        #                               self.issuedate.get(),
        #                               self.expdate.get(),
        #                               self.dailydose.get(),
        #                               self.storage.get(),
        #                               self.nhsnumber.get(),
        #                               self.pname.get(),
        #                               self.dob.get(),
        #                               self.address.get()
        #                           ))
        #         conn.commit()
        #         conn.close()
