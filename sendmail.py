import smtplib

sender = 'jaloliddinmurodullayev337@gmail.com'
receivers = ['shakhzodtoshboyev010299@gmail.com']
pass_arr = [74, 97, 108, 111, 108, 48, 57, 48, 49, 64, 64, 64]

message = """
This is Jaloliddin Murodullayev.
I congratulate you with being Red coder on codeforces!
"""

password = ''

for c in pass_arr:
    password += chr(c)

#print(password)

try:
    server = smtplib.SMTP(host='smtp.gmail.com', port=587)
    server.starttls()
    server.login(sender, password)
    server.sendmail(sender, receivers, message)
    server.quit()
    print('OK')
except smtplib.SMTPException:
    print('ERROR')