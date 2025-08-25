# Lab 02

## Learning objectives

After this lab, students will be able to (SWBAT):

* Design, develop, and test simple functions using
  * basic arithmetic operators, and
  * simple conditional statements.

## Before you start

Ensure you are comfortable with the lab environment: VS Code, command-line interface, and the Python scripts. You can refer to the Lab01-slides, available on Quanta.

Your laptop may have a different setting, but the lab machines' terminal is case-sensitive, which means `lab01` and `Lab01` are two different things.

## Starting point

The given starter code contains a *skeleton* of a program with TWO operations. It compiles but does not produce expected results at this point. Make sure you understand the given code.

Use the shortcut Ctrl + Shift + V to render the README.md file.

DO NOT CHANGE THE `main` function.

## Tasks

### Task 0

* Rename the `Lab02.c` file to `YOURBITSID.c`. Ensure that the YOURBITSID matches your ID on Quanta, or in other words, the 'Campus ID' on the lab seating arrangement shared with you.
* Fill out the `Student Name`, `BITS_ID`, and `Date` fields in the comments at the top of the file.

### Task 1

* Read the `main` function. Try to understand what it is supposed to do.
* Open the terminal and go to the appropriate folder using `cd`. Ensure you have the files you extracted there - check the output of `ls`.
* Compile the given program using `gcc YOURBITSID.c -o Lab02`. It should show no errors or warnings.
* Run the executable: `./Lab02`. Don't forget the DOT and the SLASH.
* It will compile and run, but not work as expected. That's fine. You will fix it to work for the given operations one by one.

### Task 2

Fix the `day_of_the_year` function. Don't rush to write the code. Make a flowchart on paper and *test* it for some sample inputs. (Two examples are given in the function's comments; think of some more.)

Fix the flowchart till you are confident it works for all valid inputs. Do NOT worry about invalid inputs (e.g., 31st April - a date that does not exist).

Once you have that confidence, start translating your approach to the C code. Don't do it all at once. Test your code at each *atomic* step (e.g., cover the dates in January first, then test some of those, before proceeding to February, and so on).

Remove the `// TODO` line when done.

Compile and run it for some inputs. If it matches your expectations, move on to the next task.

### Task 3

Using a similar approach, implement the `print_day_of_week` function. Note, its return type is `void`, meaning it is not supposed to `return` any value. As the name suggests, it should only print a word (e.g., "Monday").

Remove the `// TODO` line when done.

Compile and run it for some inputs. If it matches your expectations, move on to the next task.

### Task 4: Automated testing

How do you know if your program is correct? We have some *test cases* that do this for you.
Go to the terminal and run the command

```sh
python3 autograder.py YOURBITSID.c Lab02-tests.json
```

Your goal is to make *all* test cases pass before you submit your lab.

Try for other inputs as well. Your solution will be evaluated with other test cases.

## Preparing the submission

1. First, ensure the `.c` file is renamed properly and works as expected (Your ID should end with a `G`).

2. Make sure you have only ONE `.c` file in your working folder.

3. Run the following command in the terminal to make the program to prepare submission an executable:

   ```sh
   chmod u+x prepare_submission
   ```

4. Execute that program to produce the submission file `YOURBITSID.tar.gz`:

   ```sh
   ./prepare_submission
   ```

   The command will only work on CC lab machines with Ubuntu.

5. Upload the created `YOURBITSID.tar.gz` file to the appropriate assignment on <https://quanta.bits-goa.ac.in/>.

   Be sure to not write anything in the 'Save As' option on the submission form while uploading your solution (`tar.gz` file) on Quanta.

   Also, check that the correct `tar.gz` file has been uploaded before logging out from Quanta.

   Also, ensure that your submission is not in a draft form.
