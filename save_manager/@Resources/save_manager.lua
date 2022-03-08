function Initialize()
	backup=SKIN:GetVariable("backup")
	local i=1
	local d=SKIN:GetVariable("dir"..i)
	dir = {}
	user = {}
	while d~=nil do
		dir[i]=d
		i=i+1
		d=SKIN:GetVariable("dir"..i)
	end
	dir_count=i-1
	i=0
	local c=tonumber(SKIN:GetVariable("user_count"))
	for i=1, c do
		user[i]=SKIN:GetVariable("user"..i)
	end
	user_active=tonumber(SKIN:GetVariable("user_active"))
	index=1
	action=0
	profile=0
	--SKIN:Bang("!ActivateConfig", "save_manager\\background", "background.ini")
	SKIN:Bang("!ZPos",2)
	SKIN:Bang("!ClickThrough", 0)
end

function log(x)
	SKIN:Bang("!Log", x)
end


function activate_profile(i)
	SKIN:Bang("!ClickThrough", 1)
	if tonumber(i) == user_active then
		log("profile already active")
		SKIN:Bang("!DeactivateConfig","#CURRENTCONFIG#")
		SKIN:Bang("!DeactivateConfig", "save_manager\\background", "background.ini")
		end
	--backup_data(user_active)
	--restore_data(profile)
	profile=tonumber(i)
	index=1
	action=0
	continue_process()
end

function continue_process()
	if action==0 then
		if index > dir_count then
			action = 1
			index = 1
		else backup_data(user_active) end
	end
	if action==1 then
		if index > dir_count then
			action = 2
			index = 1
		else restore_data(profile) end
	end
	if action==2 then
		exit()
	end
end

function exit()
	SKIN:Bang("!WriteKeyValue", "Variables", "user_active", profile,"#@#users.inc")
	SKIN:Bang("!DeactivateConfig","#CURRENTCONFIG#")
	SKIN:Bang("!DeactivateConfig", "save_manager\\background", "background.ini")
	SKIN:Bang("!Refresh", "save_manager\\display")
end

function backup_data(profile)
	--log('backup robocopy "'..dir[index]..'" "'..backup..'\\'..user[profile]..'\\dir'..index..'" /E /MOVE')
	SKIN:Bang("!SetOption", "MeasureRun", "Parameter", 'robocopy "'..dir[index]..'" "'..backup..'\\'..user[profile]..'\\dir'..index..'" /E /MOVE')
	SKIN:Bang("!Update")
	index = index + 1
	SKIN:Bang("!CommandMeasure", "MeasureRun", "Run")
	--log("Backing up "..user[profile].." data")
	--for i=1, dir_count do
	--SKIN:Bang('robocopy "'..dir[i]..'" "'..backup..'\\'..user[profile]..'\\dir'..i..'" /E /MOVE')
	--end
end

function restore_data(profile)
	--log('restore robocopy "'..backup..'\\'..user[profile]..'\\dir'..index..'" "'..dir[index]..'" /E /MOVE')
	SKIN:Bang("!SetOption", "MeasureRun", "Parameter", 'robocopy "'..backup..'\\'..user[profile]..'\\dir'..index..'" "'..dir[index]..'" /E /MOVE')
	SKIN:Bang("!Update")
	index = index + 1
	SKIN:Bang("!CommandMeasure", "MeasureRun", "Run")
	--log("Restoring "..user[profile].." data")
	--for i=1, dir_count do
	--SKIN:Bang('robocopy "'..backup..'\\'..user[profile]..'\\dir'..i..'" "'..dir[i]..'" /E /MOVE')
	--end
end