import random
x=random.randint (1,100)
y=random.randint (1,50)
print("random temperature and humidity reading")
if( (x<60) & (y<20)) :
  print ("temperature is normal:",x,"%")
  print ("humidity is normal:",y,"%")
  print ("Alarm Off")
elif( (x<60) & (y>20)):
  print("temperature is low:",x,"%")
  print ("humidity is high:",y,"%")
  print("Alarm Off")
elif( (x>60) & (y<20)) :
  print("temperature is high:",x,"%")
  print ("humidity is high:",y,"%")
  print ("Alarm On")
elif( (x>60) & (y>20)):
  print("temperature is high:",x,"%")
  print ("humidity is low:",y,"%")
  print ("Alarm On")
else:
  print("temperature is very low:",x,"%")
  print ("humidity is very low:",y,"%")
  print("Alarm Off")