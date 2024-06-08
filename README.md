# SaveManager
A simple save manager for rainmeter

## Who is this for?  
If you gaming on a shared computer, managing save for mutiple user might get tedious.  
This skin will backup and restore save file for multiple user.  

## How it work?
When select another user, it will move current save files into a backup directory, then move active user backed up save files to save directories.  
User must set save directory for each game manually.  
The skin uses robocopy command, no plugin required.  
You will see a bunch of console terminal in the background, there's nothing to worry about lol, I just run robocopy through multiple terminal.

## Installation
Require rainmeter 4+ and windows 10.  
Download rainmeter at https://www.rainmeter.net/.  
Download and install [skin file](https://github.com/callmeEthan/SaveManager/releases/download/v0.5/SaveManager_v0.5.rmskin)

## Setting up and Usage
- First, in rainmeter, load save_manager\display.ini skin  
- Right click on skin and choose "User profiles", edit username, user count.  
- Right click on skin and choose "Save directories", edit backup directory (where saves will be copy to), save directory (where saves will be copy from)
- You can add multiple save directory by adding Dir\[number\]=dir, ex: Dir3=C:\User\Documents\Saved Game  
- You can now click on display skin or manually load save_manager.ini skin, choosing a different user to begin swapping save files.  
Tips: Backup directory should be in C: drive, save files will be moved and not copied, it is much faster to move files within the same drives.

## Authors
[Ethan (Finch)](https://github.com/callmeEthan).  
This skin is quickly and sloppily put together, overall still functional, I might improve open later on (or not)
