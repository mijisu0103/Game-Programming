local recov = script.Parent 
local function Health(hpp)
	local parent = hpp.Parent
	if game.Players:GetPlayerFromCharacter(parent) then
		parent.Humanoid.Health = parent.Humanoid.Health + 100
		wait(1)
	end
end

recov.Touched:connect(Health)
