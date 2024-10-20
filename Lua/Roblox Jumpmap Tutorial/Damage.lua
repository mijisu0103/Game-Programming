local damage = false

script.Parent.Touched:Connect(function(hit) 
	if damage == false and hit.Parent:FindFirstChildOfClass("Humanoid") then
		damage = true
		hit.Parent.Humanoid:TakeDamage(20)
	end
end)
