# Database Management System Unit - 3 #

## Views: uses and Importance ##

- In some cases, it is not desirable for all users to see the entire logical model (i.e., all the actual relations stored in the database.)
- Consider a person who to know an instructors name and department, but not the salary.
- This person should see a relation described, in SQL, by

        select ID,name, dept_name from instructor

- A view provides a mechanism to hide certain data from the view of certain users thus providing security.
- Any relation that is not of the coonceptual level is called a view.

SYNTAX:

    create view v as <query expression>;

    v -> view name
    <query expression> -> any legal SQL expression.

- Once a view is defined, the view name can be used in any SQL statement just like a relation name.

EXAMPLE:

        create view phone_view as 
        select empFName, empLName, empPhone from Employees;
        grant select on phone_view to public;

        create view job_view as 
        select employeeID, empFname, empLname, jobTitle, managerID from Employees;
        grant select, update on job_view to managers;

        create view pat_view as 
        select employeeID, empFName, empLname, payRate from Employees;
        grant select, update on pay_view to payroll;

INSERTING A NEW TUPLE INTO A VIEW:

- Add a new tuple to faculty view which we defined earlier
    insert into faculty values ('30765', 'Green', 'Music');
- This insertion must be represented by the insertion of teh tuple ('30765', 'Green', 'Music') into the relation instructor.

## Index ##

- Indicies are data structures used to speed up access of records with specifies values for index attributes.
- Indexes are used to find rows with specific column values quickly.
- Without an index, MySQL must begin with the first row, and then read through the entire table until it finds the relevant rows.(Sequential Scan)
- If the table has an index for the columns , MySQL can quickly determine the position to seek to in the middle fo the data file without having to look at all the data.
- This much faster than reading through the entire table.

SYNTAX:

        create index index_name on table_name (column1, column2, ...);
        create unique index index_name on table_name (column1, column2, ...);
        alter atble table_name drop index index_name;

## Sequence ##

- A sequence is a set of intergers 1,2,3,.... that are generated in order on a specific demand. Sequences are frequently used to generate unique identifiers for rows in a table.
- A sequence is a special kind of database object that generates a sequence of numbers.
- Each table can only have one column that is auto incremented.
- You cannot have a NULL value in an auto increment column.
- NOT NULL constraint is automatically added to auto increment columns by MySQL.
