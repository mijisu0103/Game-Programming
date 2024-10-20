local players = game:GetService("Players")
local parent = script.Parent
local targetNumber = math.random(1, 2)
local targetPlate = parent[targetNumber]
local targetCFrame = targetPlate.CFrame
local function Init(t_plate)
	t_plate.CanCollide = false
	local function Broken(hit)
		local player = players:GetPlayerFromCharacter(hit.Parent)
		if player and t_plate.Anchored then
			t_plate.Anchored = false
		end
	end
	t_plate.Touched:Connect(Broken) 
end 
Init(targetPlate)
parent.ChildRemoved:Connect(function(removed)
	wait(1)
	local newPlate = script[0]:Clone()
	newPlate.Name = removed.Name
	newPlate.Transparency = 0 
	newPlate.CFrame = targetCFrame
	newPlate.Parent = parent
	Init(newPlate)
end)
