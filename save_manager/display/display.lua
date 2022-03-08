function Initialize()
	active=SKIN:GetVariable("user_active")
	name=SKIN:GetVariable("user"..active)
	icon=SKIN:GetVariable("user"..active.."icon")
	SKIN:Bang("!SetOption", "MeterName", "Text", name)
	SKIN:Bang("!SetOption", "MeterIcon", "ImageName", "#@#user\\"..icon)
	SKIN:Bang("!Update")
	SKIN:Bang("!Redraw")
end