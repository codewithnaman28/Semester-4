# Files #

## Introduction ##

- A file is a collection of records, each record having one or more fields.
- The fields used to distinguish among the records known as keys.
- File organization describes the way where the records are stored in a file
- File organization is concerned with representing data records on an external storage media.
- Mode of Retrieval:

    1. Real time: response time for any query should be minimized.(Reservation System)
    2. Batched: response time is not bery significant. (Bank Account)

## Sequential File Organization ##

- A sequential file stores records in the order the are entered.

## Primitive Operations ##

- Open: opens the file and sets file pointer to the first record
- Read-next: returns next record to the user. if no record is present then EOF condition will be set.
- Close: closes the file and terminates access to the file
- Write-next: file pointers are set to next of last record and this record is written to the file
- EOF: end of file
- Search: searches for a record with a given key value
- Update: updates a record with a given key value

**Search:**

- A particular frcord is searched through the file by comparing the key value of the record with the key value of the record with the key value of the record being searched.

**Delete:**

Deletion is done in two ways:

- Logical deletion: the record is marked as deleted but not physically removed from the file
- Physical deletion: the record is physically removed from the file

**Logical deletion:**

METHOD 1:

- when disk files are used, records may be logically deleted by just flagging them as having been deleted.
- this can be done by assigning a specific value to one of the fields of the record, say, a field called deleted.
- this method needs one extra field in the record and the search operation has to be modified to check for the deleted field.
- the algorithm needs to modify and check the flag for every record that is read from the file.

METHOD 2:

- Keep a record of active records in a separate file.
- This file contains the key values of all the active records in the main file.
- The search operation is performed on this file to check whether the record is active or not.
- This method is useful when the records are of variable length.
- The main file is not modified and the search operation is performed on a smaller file.

**Physical deletion:**

- Open a file in read mode
- Open 'temporary' file in write mode
- Read the record key of the record to be deleted.
- Read the next record from the file.
- If the record key of the record read is not equal to the record key of the record to be deleted, write the record to the temporary file.

**Advantages:**

- Owing to ists simplicity, it can be used with a variety of media including magnetic tapes and disks.
- It is compatible with variable length records, while most other file organizations are not.
- Security is ensured with ease.
- For a run in which records are to be processed in the order in which they are stored, sequential file organization is the best suited.

**Drawbacks:**

- Insertion and deletion of records in betweeen positions is difficult.
- The file has to be rewritten to incorporate the changes.
