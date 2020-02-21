PROJECT NAME:	SelfCrypt
AUTHORS:		Zaki Sediqyar | Johnny Xian
COURSE:			CIS-25 OOP with C++ / Laney College / Fall 2019
PROFESSOR:		Johnnie Williams
--------------------------------------------------------------------------------------------------------

PROGRAM DESCRIPTION:
This is a console based program that can be used to have secure messages across the internet, or save your text based files in a secure way, with a specific key of your choice. 

WHAT IT DOES:
The program asks the user if he/she wants to encrypt/decrypt a chunk of text either on the console or just a text file. Either way it asks for the user's input and also ask the user for a KEY to encrypt/decrypt the text with it.


HOW IT WORKS:
It changes the input text or the file on the binary level of the computer by using bitwise operator XOR. It takes the binary bits of the text and sums it with the binary bits of the key and creates new ASCII characters with it. It then either prints the processed text on the console or writes it to a text file and creates the file in the same directory where the file is. 


POTENTIAL:
The program currently takes only two character keys, but it can be developed further to have a larger key. The program ofcourse has a symmetrical approach to encryption. 

