# Install Nuget
#powershell.exe -NoLogo -NoProfile -Command '[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12; Install-Module -Name PackageManagement -Force -MinimumVersion 1.4.6 -Scope CurrentUser -AllowClobber -Repository PSGallery'ss
Write-Output "bienvenido al sistema:"
get-host
Write-Output "Introduce una password seguro:"
$Password = Read-Host -AsSecureString
New-LocalUser -Name "developer" -Password $Password -Description "Programador de FastApi en Python" -FullName "Senior Python Developer"
Add-LocalGroupMember -Group Usuarios -Member developer
netplwiz
lusrmgr.msc 