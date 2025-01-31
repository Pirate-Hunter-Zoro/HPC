# Hello Name
Print “Hello, <NAME>” where NAME is input from the keyboard.<br>
Did you try passing your name as an argument from the command line or did you use scanf? Why?<br>
What did you find with scanf() when you had a space in your name (e.g., between first and last name)?<br>
How did you handle this so that you can get your first and last name into the system?<br>
How did you manage or allocate the strings? (Static or dynamic)<br>
Did you check if the dynamic memory allocation succeeded? If so how did you do this?

# Archimedes Algorithm
Implement Archimedes algorithm to estimate pi for inscribed/circumscribed polygons with n sides, up to 100, doubling n at each step, and time it.<br>
How did you time your program?<br>
Were there any issues with precision and/or convergence that you noticed?<br>
Did you use integer or floating point types for your calculations?<br>
How many decimal places did you print PI to? How did you do this?<br>
Did you try this with the float and double types? If so, did you see a difference?

# Matrix-Vector Multiplication
Implement matrix–vector multiplication.<br> 
Read in the following text file (mv.txt) which contains the matrix and vector to be multiplied.<br> 
Print your answer to the screen and time the computation.<br> 
The format of mv.txt is: line contains numrows, numcols. The next numrows contains the rows of the matrix, each with numcols integer values. The next line contains the length of the vector. The next line contains the vector of that length.<br>
How did you allocate and access your matrix?<br>
Were there any challenges in reading in the file?<br>
Was there anything special about the actual computation?<br>
What was your strategy for timing?<br>
Did you check if the dynamic memory allocation succeeded? If so how did you do this?<br>
Did you perform any error checking on the input from the file (e.g., correct number of rows and columns)?<br>

# Arithmetic Time
Compare the speed of *, /, sqrt, and sin operations/functions (include <math.h>).<br>
What was your timing strategy?<br>
Are all arithmetic operations created equal?<br>
What do you think causes the differences in timing for the operations?<br>
What did you do to investigate this further?<br>

# Row-Major, Column-Major
Use the attached code snippets as a basis for comparing the performance of row-major vs. column-major computations.<br> 
One snippet uses a static allocation for the array, the other allocates the array dynamically.<br>
Do a little experimentation with each approach.<br>
Vary the size of the square array from 128 X 128 on up, doubling it in size each time.<br>
Chart your results. Is there a difference in performance or behavior between static and dynamic? Between row-major and column-major?<br>
Valgrind's cachegrind tool facility may help provide some insights.<br>
What did you observe about differences in program behavior in static vs dynamic allocation of arrays, and how do you explain it?<br>
What did you observe about differences in program behavior in row-major vs. column major computations and how do you explain it?<br>
How did the timing of the row-major compare with that of the column-major? Why do you think this is?<br>
How do different architectures and OSes impact the results of this part?