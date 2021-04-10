# Telegram bot
This bot is used to send welcome messages and photos on Telegram with two APIs: **welcome API** and **sendPhoto API**.
### 1. Send welcome message to a chat group when someone participates in
- Create a bot on Telegram and get the token.
- Change the message in *api/api/welcome.ts* to whatever you want to send.
- Repace the token in *api/api/welcome.ts* with your Telegram token and deploy the project to Vercel.

### 2. Automatically send an image to a chat group at a specific time
- Create a bot on Telegram and get the token.
- Move all images that you want to send to *api/img*.
- Run *s | tr "\n" " "* to generate file names. Copy and paste them to *call/list.txt*.
- Set the token in *api/api/sendPhoto.ts* to your Telegram token.
- Set a passwd in *api/api/sendPhoto.ts*.
- Set the passwd in *call/sendPhoto.cpp* to that one above.
- Set the chatHandle in *call/sendPhoto.cpp* to your chat group username.
- Change the Vercel URL in *call/sendPhoto.cpp* to your Vercel URL.
- Compile *call/post.cpp* and *call/sendPhoto.cpp*.
- Run *./post* to call **sendPhoto API** with a random photo.

**If you want to schedule the *post* program, you can use *crontab* with *call/schedule.sh***.
