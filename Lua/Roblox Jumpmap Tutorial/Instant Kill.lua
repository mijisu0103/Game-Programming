--[Instant Kill (Player dies if being touched)]--
function onTouched(hit)
	local human = hit.Parent:FindFirstChild("Humanoid") 

	if (human ~= nil) then 
		human.Health = 0 
	end
end

if (script.Parent ~= nil) and (script.Parent.className == "Part") then 
	connection = script.Parent.Touched:connect(onTouched)
end
