[Icon1]
Meter=Image
ImageName=#@#user\#user1picture#
MeterStyle=StyleIcon
MouseOverAction=[!ShowMeter "Highlight"][!MoveMeter [Icon1:X] [Icon1:Y] "Highlight"]
LeftMouseUpAction=[!CommandMeasure "SaveManager" "activate_profile(1)"]
X=0
Y=0
Container=Container1


[Name1]
Meter=String
Text=#user1#
MeterStyle=StyleName
X=(#size#/2)
Y=#size#
Container=Container1

[Container1]
Meter=Shape
X=((1-1)*(#size#*1.1)+10)
Y=10
H=#size#
Shape=Rectangle 0,0,#size#,(#size#*1.2),20 | Fill Color 0,0,0,256 | StrokeWidth 0

[Icon2]
Meter=Image
ImageName=#@#user\#user2picture#
MeterStyle=StyleIcon
MouseOverAction=[!ShowMeter "Highlight"][!MoveMeter [Icon2:X] [Icon2:Y] "Highlight"]
LeftMouseUpAction=[!CommandMeasure "SaveManager" "activate_profile(2)"]
X=0
Y=0
Container=Container2


[Name2]
Meter=String
Text=#user2#
MeterStyle=StyleName
X=(#size#/2)
Y=#size#
Container=Container2

[Container2]
Meter=Shape
X=((2-1)*(#size#*1.1)+10)
Y=10
H=#size#
Shape=Rectangle 0,0,#size#,(#size#*1.2),20 | Fill Color 0,0,0,256 | StrokeWidth 0