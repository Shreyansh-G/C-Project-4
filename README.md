# C-Project-4
# Write enumerated types that supports dates—such as december 12.
# Then add a function that produces a next day. 
# So nextday(date) of december 12 is december 13. 
# Also write a function printdate(date) that prints a date legibly.
# The function can assume that February has 28 days and it most know how many days are in each month. 
# Use a struct with two members; one is the month and the second  is the day of the month—an int (or short).
        e.g typedef enum month{ jan, feb, …} month;
            typedef struct date{ month m; int d} date;
#Then print out  the date January 1  and print  the next day Jan 2.
#Do this for the following dates:  
   February 28, March 14, October 31, and  December 31.            
