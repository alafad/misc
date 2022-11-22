
function Green
{
    process { Write-Host $_ -ForegroundColor Green }
}

function Red
{
    process { Write-Host $_ -ForegroundColor Red }
}

while($true){ 


for ($i=01; $i -le 15; $i++)
{

$output = "{0:00}" -f $i
ping ITJoy-Pi$output | Green 
}


}