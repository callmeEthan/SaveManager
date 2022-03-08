# SaveManager
A simple save manager for rainmeter

## Who is this for?  
If you gaming on a shared computer, managing save for mutiple user might get tedious.  
This skin will backup and restore save file for multiple user.  

## How it work?
When select another user, it will move current save files into a backup directory, then move backup'ed save files to save directories
You can define multiple save directory.  
The skin uses robocopy command, no plugin required

## Installation
Require rainmeter 4+ and windows 10.  
Download rainmeter at https://www.rainmeter.net/.  
Download and install [skin file](https://github.com/callmeEthan/SaveManager/releases/download/v0.5/SaveManager_v0.5.rmskin)

## Usage
User first load save_manager\display.ini skin  
Right click on skin and choose profiles, edit username, user count.
Right click on skin and choose save directories, edit backup directory, save directory  
User can add multiple save directory by adding Dir<number>=dir
User can now click on display skin or manually load save_manager.ini skin to choose user

## Authors
[Ethan (Finch)](https://github.com/callmeEthan).  
This skin is quickly and sloppily put together, overall still functional, I might improve open later on
