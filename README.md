# Recreate-vscode-cpp-setup
How to recreate vscode C++ setup

1) Setup the layout as given in GFG article:  
  a) In the main window, Right click in tab header > Split Right  
  b) In the Right section thus created, Right click in tab header > Split Down  
  
2) Make and move the c++, in.txt and out.txt files to their respective sections.  
  
3) Download and import the CPP.code-profile of this repo.  
  
4) Go to the C++ file and then run using: ctrl + shift + B  

***Pro Tip:*** The task in tasks.json included in the CPP.code-profile actually calls cmd at the back to compile and run. However, the default Terminal of every profile is PowerShell by default. So, one has to do: Command Palette > Terminal: Select Default Profile > Command Prompt, so that command goes to cmd and not PowerShell. Same has already been done in the CPP.code-profile, so no no worries; you are good to go just after importing the profile :-;

- Source of this: [GFG Article](https://www.geeksforgeeks.org/how-to-setup-competitive-programming-in-visual-studio-code-for-c/) + [A2Z Article](https://www.geeksforgeeks.org/how-to-setup-competitive-programming-in-visual-studio-code-for-c/) + [My Similar Repo for Sublime](https://github.com/Broody-boy/Recreate-sublime-cpp-setup) + ChatGPT to translate sublime's build system file to VSCODE task.json file.








## About User tasks

- **Note:** There is only command available in VSCODE pertaining to User Tasks: "Tasks: Open User Tasks"  

1) If you want to add a fresh user task, use the above stated command: Command Palette > Type "Tasks: Open User Tasks"  

    + If User tasks.json has not been created ever:  
        - "Select a Task Template" list is shown > choose "Others" --> opens the newly created tasks.json file  

    + If User tasks.json already exists:  
        - the tasks.json file gets opened  

3) Even if you want to view all user tasks, use the same above stated command: Command Palette > Type "Tasks: Open User Tasks"

## Similarity of User Settings and User tasks 
**Tip:** The path of the settings.json(User Settings which we edit using ctrl + ,) and tasks.json(User Tasks) is same:  
- C:\Users\Arshdeep\AppData\Roaming\Code\User for the "Default" named theme that comes with VSCODE.  
- C:\Users\Arshdeep\AppData\Roaming\Code\User\profiles\6469341d(or something else) for any non "Default" theme, that we make.  

**Tip:** Similar to User Setting(settings.json), User Tasks(tasks.json) are also bound to profile and are synced automatically on new install and login.  
**Tip:** Similar to User Setting(settings.json), User Tasks(tasks.json) are included automatically while importing/exporting a profile.  
