[IconRepeat]
Meter=Image
ImageName=#@#user\#userRepeatpicture#
MeterStyle=StyleIcon
MouseOverAction=[!ShowMeter "Highlight"][!MoveMeter [IconRepeat:X] [IconRepeat:Y] "Highlight"]
LeftMouseUpAction=[!CommandMeasure "SaveManager" "activate_profile(Repeat)"]
X=0
Y=0
Container=ContainerRepeat


[NameRepeat]
Meter=String
Text=#userRepeat#
MeterStyle=StyleName
X=(#size#/2)
Y=#size#
Container=ContainerRepeat

[ContainerRepeat]
Meter=Shape
X=((Repeat-1)*(#size#*1.1)+10)
Y=10
H=#size#
Shape=Rectangle 0,0,#size#,(#size#*1.2),20 | Fill Color 0,0,0,256 | StrokeWidth 0