local conveyor = script.Parent

while true do
	conveyor.AssemblyLinearVelocity = conveyor.CFrame.LookVector*15
	wait(0.1)
end
