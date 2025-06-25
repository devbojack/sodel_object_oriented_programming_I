# Object Oriented Programming 1


## Question 1 (10 Marks)
Booker University library maintains an inventory of books. The list includes the details: Author, price, title,
book_number and number of copies of each book. Whenever new books are purchased the librarian adds the book
details into the database. The chief librarian occasionally requests for a list of all the books in the database.

**Requirements**

Construct a simple class called book with suitable data members and member functions to:-
- Insert a new book record into the database
- Display a list of all books in the database
- Write a main function to test the program

<hr>

## Question 2 (10 Marks)
DT Dobie (K) Ltd sells a range of vehicles, including Mercedes and Nissan in the East African region. Vehicle sale
details include the Make (e.g. Nissan), Model (e.g. Sunny), Engine Number and Sale Price.
- Create a class vehicle that captures the above data using a function called set_vehicle()
- The company makes a profit of 15% from the sale price for every vehicle. Create another function called get_profit() which is still a member of the class vehicle to calculate and return the profit.
- Implement (i) and (ii) using an object in the main() function to capture the vehicle details and display the profit.

<hr>

## Question 3 (10 Marks)
The Interim Independent Electoral Commission (IIEC) of Kenya requires an Electronic Voting Management System
(EVMS) through which new voters can be added, invalid voters deleted as well as displaying of a voter’s details, among
other functions.

Voter details include voter card ID, National ID Number, First Name, middle name, surname, polling station, date of
birth (entered in dd-mm-yyyy format) and gender .

In an interview for an advertised Software Developer position, the commission has requested you to demonstrate with
a simple program how a voter details can be added and displayed. Using your own defined and appropriate voter class
and an interactive driver program (i.e. main function) write a C++ program to achieve this.


<hr>

## Question 4 (10 Marks)
Safaricom Ltd intends to develop an Electronic Reward system aimed at rewarding its subscribers with Bonus
(“Bonga”) points, where subscribers can redeem points for airtime or prizes. The system shall track the amount of air
time a subscriber has and reward as follows:

|  Airtime | Bonus Points |
| -------------------------- | -------- |
| Equal or above Ksh. 2000.00 | 500 |
| Ksh. 1,000.00 - Ksh 1,999.00 | 300
| Ksh. 500.000 - Ksh 999.00 | 100
| Ksh. 100.000 - Ksh 499.00 | 50
| Below Ksh. 100.00 | 0

Write a C++ program that captures the Subscriber name, Phone number and Air time amount, through a
constructor, uses a function compute_bonuspoints() to calculate the points awarded, then outputs information as
follows:

![](/0x00-ES6_basic/pngs/es6.png)

<hr>


## Question 5 (10 Marks)
The Finance Department of Fortune Business Systems Ltd has sought your help in developing a program that
captures an employee’s details: employee ID, first name, second name, surname, gender, Date of Birth (entered in ddmm-yyyy format) and monthly basic salary
- a
  - Create a class called **employee** that captures the above data using the class constructor. The class should also have a function **show_employee()**, which should display employee information.
  - Implement the class using an employee object called **emp_obj.** Sample output is as below:

![](/0x00-ES6_basic/pngs/es6.png)

- b
  - Employees of Fortune Business Systems Ltd contribute 5% of their monthly basic salary towards their individual
pension savings. Since this may change in future, the operation to compute the pension has not been included. A
friend function (to the class employee) called **compute_pension()** to calculate and return the pension contribution of
an employee is therefore needed. In addition to the output as shown in 3a(ii) above.
