local conveyor = script.Parent

local function ColorChange(item, tstime, r, g, b)
	local ts = game:GetService("TweenService")
	local ti = TweenInfo.new(tstime, Enum.EasingStyle.Linear, Enum.EasingDirection.In, 0, false, 0)
	local tween = ts:Create(item, ti, {Color = Color3.fromRGB(r, g, b)})
	tween:Play()
	wait(tstime)
end

while true do
	ColorChange(conveyor, 2, 255, 201, 201)
	ColorChange(conveyor, 2, 255, 204, 153)
	ColorChange(conveyor, 2, 255, 255, 204)
	ColorChange(conveyor, 2, 204, 255, 204)
	ColorChange(conveyor, 2, 175, 221, 255)
	ColorChange(conveyor, 2, 215, 201, 241)
end
