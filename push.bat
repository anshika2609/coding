git add .
@echo off
echo %DATE%
git commit -m "$(date +"%D %T")"
git push