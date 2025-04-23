# CS-210 Project 3

This project is a command-line tool, fulfilling a sample need for a grocery store to optimize their inventory. 
It reads a chronological input file of individual purchases, converts it to a summarized data file listing the frequencies of each item,
and provides several options for analyzing the data. The menu options include searching for the frequency of a specific item, printing the frequency of all items, 
and printing the frequency of items as a textual histogram.

I believe I this project accomplishes the goals of the assignment by providing effective error handling seamlessly.
Invalid user commands are designed to continue prompting for input until a valid command is entered, avoiding runtime errors.
Additionally, the program is designed in a consultative way, providing easy to understand menu options and making it 
easy for users to navigate or close the program.

I could enhance my code by using its core as the basis for a web application. Users are more accustomed to interacting with graphical programs on the web
than command-line tools. Providing the ability to directly input new data files would extend the interactivity, relative to the current approach of recompiling 
the program with a new data file available.

I found the most challenging part of the project to be properly formatting the output to the user. I experimented on my own with different formatting options,
later consulting online resources such as Stack Overflow and various C++ reference sites, including GeeksForGeeks, to find the best way to format the output.

This project bettered my understanding of file I/O in C++, particularly the use of streams to read and write data. Additionally, I feel more confident in my ability to
create useful commandline programs that can be used to analyze data.

I made the program maintainable by following best practices in coding, 
such as using clear variable names, writing modular code, and including comments to explain complex logic.
I also created clear and comprehensive user documentation to explain the design and usage of the program.
