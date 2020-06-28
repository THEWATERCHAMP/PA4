# PA4
Programming assignment 4

Goals
Implement file I/O
Set up sentinel-based repetition
Use casting to convert between data types
Practice using the ASCII table
Apply the concept of data filtering
Tasks
Create a new C++ program in the IDE of your choice
Replace the contents of the shell program with our class templatePreview the document and update the header information
Write pseudocode (or a flowchart) and a C++ program to create a secret code translator as follows:
A simple coding scheme can be developed by replacing each character in a text file by another character that is a fixed number of positions away (in the ASCII table). For example, if each character is replaced by the character that is two characters to its right in the alphabet, then the letter a is replaced by the letter c,  the letter b is replaced by the letter d and so on.
Write a program that reads text in a file and then generates a new file that contains the coded text using this scheme.
Only convert alphanumeric characters.
Ask the user to provide the input file name as a string, and create an output filename with the prefix "code-" added to the same string.

Hints:
You will have to convert each character to an integer value in order to apply the code and then convert the integer back to a character before writing to the output file
Refer to the ASCII table (Links to an external site.) for the integer codes assigned to each alphanumeric character. The following ranges of values indicate the character is alphanumeric: 48-57, 65-90, and 97-122.


Sample Program Input File
Humpty Dumpty sat on a wall,
Humpty Dumpty had a great fall.
All the king's horses and all the king's men
Couldn't put Humpty together again.

Sample Program Output File

Jworv{ Fworv{ ucv qp c ycnn,
Jworv{ Fworv{ jcf c itgcv hcnn.
Cnn vjg mkpi'u jqtugu cpf cnn vjg mkpi'u ogp
Eqwnfp'v rwv Jworv{ vqigvjgt cickp.
