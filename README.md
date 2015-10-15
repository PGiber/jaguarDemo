# jaguarDemo

Hey guys!

There is a GUI program to use GIT, but it is probably worth knowing how to use the command line because the GUI programs are basically performing these command line operations and the command line is generally faster, more powerful once you've learned how to do it. I'm not an expert with the git command line myself, but I've used graphical tools and a bit of command line.

Here's the starting point. If you use Mac or Linux, open up a command line and enter the following:

```
git config --global user.name "Your Name"
git config --global user.email yourUniEmail@my.bristol.ac.uk
git clone https://github.com/benwainwright/jaguarDemo
```
Make sure you enter your name and email. This will uniquely identify your commits. The url in the clone command is simply the address of this repository. This will create a folder structure called 'jaguarDemo' containing the files and folder structure within this repository. It will also initialise a `.git` folder within the same folder.

As you can see, i've just written a simple 'hello' program. Try making some changes to my code. Remember that you are editing a *local* copy of the code, so it doesn't matter what you do yet as it's only on your computer.

When you are done, save your files. The next thing you need to do is commit the changes you have made. This basically means 'saving the changes you have made with a short description of what you've done'. Before you can do that, you will need to `git add` them. In the terminal, type:

```
git add <name of the file you updated>
```
or for all modified files
```
git add -A
```
This adds specific files (or all files you have modified since the last commit) into a list of files you are going to commit. Next you need to type
```
git commit -m "A short message explaining the changes you made"
```
The next thing you want to do is push the changes to your remote repository on Github. To do that, I will need to add you as a collaborator, so go ahead and signup for a Github account and let me know the username.

Once I've added you, try the command

```
git push origin
```
Origin is the default name for the main remote repository for a local repository. You may need to enter your password, but once you have done that, you should find that the Github repository now reflects your changes.

That's the very very basics. Once you have done that, try working your way through [this](https://try.github.io/levels/1/challenges/1) tutorial.
