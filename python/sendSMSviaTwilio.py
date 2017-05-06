from twilio.rest import Client

# Your Account SID from twilio.com/console
account_sid = "AC2c16e3ad6ce8bbfb1b8fc08dc63e7***"
# Your Auth Token from twilio.com/console
auth_token  = "cf26af752c6e2e7be0f7758b33940***"

client = Client(account_sid, auth_token)

message = client.messages.create(
    to="+8618510728***", 
    from_="+12513339***",
    body="Hello from Python!")

print(message.sid)
