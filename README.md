4-Key-Keyboard using a digispark (ATtiny85)

NOTE: I have only ordered version 2 of the PCB. Version 2.1 has slight changes to the placement of the holes for the digispark but I have not tested it yet.

EasyEDA or DirtyPCB will probably be the cheapest places to get the PCBs printed. I used DirtyPCB to get the first version of the PCBs printed and they turned out great.

If you are ordering from DirtyPCB, ignore the lack of holes on the PCB render. I can't get my drill file to work with their rendering software. If there are no errors on the layer checker, the holes will most likely cut fine.

The 'top.dxf' and 'bot.dxf' files are for the acrylic case. I got them cut from DirtyPCB, they were really cheap and the case turned out nice.

'case.stl' is a 3d printable case I designed, pictures are below. Note it has an open bottom.

I used RobotDyn's Digispark clone: https://www.aliexpress.com/item/Digispark-compatible-developing-board-ATtiny85-MicroUSB/32733676895.html

Other digispark clones will probably work with the footprint, you might have to bend the header pins to make them fit.

The acrylic case + PCB should work with 10mm M3 standoffs and 6mm M3 screws. The PCB does not screw into the case, it is held in place by the switches.

The PCB does not have holes for PCB mounted switches. You can probably just cut the extra pins off if you need to.

Assembly instructions

1. Solder the header pins to the PCB.
2. Place switches into the top place and solder the PCB onto the switches.
3. Solder the digispark to the header pins. You will probably need to trim excess PCB from the digispark to get the microUSB connecter to    fit in the 3d printed case. You might want to put electrical tape ontop of the digispark to prevent it from shorting with the switch      soldering.

![alt text](https://github.com/LittleJono/4-key-keyboard/blob/master/Photos/_DSC0076.JPG)
![alt text](https://github.com/LittleJono/4-key-keyboard/blob/master/Photos/_DSC0078.JPG)
![alt text](https://github.com/LittleJono/4-key-keyboard/blob/master/Photos/_DSC0083.JPG)
![alt text](https://github.com/LittleJono/4-key-keyboard/blob/master/Photos/_DSC0086.JPG)
