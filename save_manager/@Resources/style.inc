[Rainmeter]
Update=100
;BackgroundMode=2
;SolidColor=255,0,0,200
MouseLeaveAction=[!HideMeter Highlight]
SkinWidth=(#size#*1.1*#user_count#)
SkinHeight=(#size#*1.2+20)

[Variables]
size=200
WhenRefreshedAction=[!Move (#WORKAREAWIDTH#/2-#CURRENTCONFIGWIDTH#/2) (#WORKAREAHEIGHT#/2-#CURRENTCONFIGHEIGHT#/2) "#CURRENTCONFIG#"]
WhenRefreshAction=[!ActivateConfig "save_manager\background" "background.ini"]

[ScriptRepeatIcon]
Measure=Script
ScriptFile=#@#RepeatSection.lua
ReadFile=#@#layout.inc
WriteFile=#@#meter.inc
Sub=Repeat
Index=1
Limit=(#user_count#)

[StyleIcon]
Meter=Image
W=#size#
H=#size#
X=-#size#
AntiAlias=1
PreserveAspectRatio=1
SolidColor=0,0,0,255
DynamicVariables=1
Group=Icons


[StyleName]
Meter=String
W=#size#
H=(#size#*0.2)
X=-#size#
StringAlign=Center
FontFace=Roboto Thin
FontSize=20
FontColor=255,255,255
SolidColor=15,15,15
AntiAlias=1


[SaveManager]
Measure=Script
ScriptFile=#@#save_manager.lua

[MeasureRun]
Measure=Plugin
Plugin=RunCommand
FinishAction=[!Log [MeasureRun:FinishAction]][!CommandMeasure "SaveManager" "continue_process()"]
OutputType=ANSI
OutputFile=C:\FTP\save_manager.log
State=Show
DynamicVariables=1