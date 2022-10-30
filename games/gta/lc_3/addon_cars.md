# Adding Cars to **GTA III** & **Vice City**

This step-by-step guide helps you install any car from this website into GTA. It takes a long time and you must be very careful. Do not install many cars at once.

## **Finding Where GTA Is:**

Normally:

-   GTA 3 is in C:\\Program Files\\Rockstar Games\\GTAIII\\.
-   GTA Vice City is in C:\\Program Files\\Rockstar Games\\Grand Theft Auto Vice City\\.

To save space, this tutorial uses *gta*\\. Replace that with your own location.

## Get Ready for Modding:

Make a new install of GTA 3 or GTA Vice City. Only add mods to the new install. If something goes wrong you can use the original files as backups.

**Do not skip this step!** It really is worth making a separate install for mods.

## Custom Wheels

Dmagic1’s Wheel Mod is used by almost every new vehicle. You must install this first:

-   [Dmagic1’s Wheel Mod for GTA 3](https://projectcerbera.com/gta3/wheel-mod).
-   [Dmagic1’s Wheel Mod for GTA Vice City](https://projectcerbera.com/gtavc/wheel-mod).

Make sure you get the correct version. Only install it **once**.

## The New Files

**car.dff**

Shape of the vehicle, damaged parts and animated parts.

**car.txd**

Graphics used by the car, such as paint effects and damage marks.

**car.col**

Solid areas and materials used by the car.

**carcols.dat**

The colours it will use in the game.

**default.ide**

Wheel size and other special settings.

**handling.cfg**

Peformance and handling of the car.

**readme.txt**

Sometimes has the handling.cfg and default.ide data.

Cars normally have a *car*.dff file and a *car*.txd files. If other files are missing, don’t worry.

## Tools and Editors

We must use special programs to install cars. Programs I use are:

[**G-IMG by Respawn**](http://www.turnipfan.com/index.php?page=g-img)

Install the *car*.dff and *car*.txd files.

[**Collision Editor 2 by Steve-M**](http://www.steve-m.com/downloads/tools/colleditor2/)

Install the *car*.col file, if the car has one.

[**CFG Studio 2 by Me**](https://projectcerbera.com/tools/cfgstudio2/)

Install the handling.cfg data, if the car has any. This data might be in the readme.txt.

## Test your Multiple Installs

After making [multiple installs of GTA](https://projectcerbera.com/gta/3-vc/tutorials/multiple), test if the new one works.

1.  Going to the folder where you made the new install.
2.  Double-click the *something*.exe file.
3.  When it has started, load a saved game.
4.  If it works, you can continue this tutorial.

**Do this now.** Better safe than sorry!

## Starting to Install

Unzip or extract all the new files you downloaded to safe place.

## *car*.dff and *car*.txd: Shape and Graphics

1.  Look at the new *car*.dff and *car*.txd files. They might be called banshee.dff or esperant.dff.
2.  Use G-IMG to open your *gta*\\models\\gta3.img file. It takes a while to list all the files.
3.  **Search** for banshee or esperant or whatever the new files are called.
4.  **Delete** the .dff and .txd which it finds.
5.  **Add** the new *car*.dff and *car*.txd files.
6.  **Rebuild** the gta3.img.

This is enough to install most vehicles. You can usually test the car in-game now. If it doesn’t work, there might be more files to install.

Defragment your hard drive if you install lots of mods. This helps with loading times.

## *car*.col: Collision Model

1.  Use Collision Editor 2 (ColEd2) to open the *gta*\\models\\coll\\vehicles.col file. It may take a while to load.
2.  A list at the top shows the names of the .col files it contains.
3.  Find the entry in that list whose name matches the new *car*.col file.
4.  **Delete** that entry.
5.  **Import** the new *car*.col file. Confirm any windows which pop up.
6.  **Save** the vehicles.col file.

The new collision model has now been installed. You can test the car in-game again. If it doesn’t work, there might be more files to install.

## handling.cfg: Performance and Handling

1.  Get the handling.fg data for the new car and **Copy** it. It might be in the readme.txt.
2.  Use CFG Studio 2 to open the *gta*\\data\\handling.cfg file.
3.  **Find** the handling line the new car will replace. BANSHEE or ESPERANT, for example.
4.  Select that row by clicking on the name of the car, in the first column.
5.  **Paste** the new handling data. It will replace the selected data.
6.  Save the handling.cfg file.

The handling data is now installed. You can test the car in-game again. If it doesn’t work, there might be more files to install.

## default.ide: Wheel Size and other Special Settings

1.  Get the default.ide data for the new car and **Copy** it. It might be in the readme.txt.
2.  Use Notepad or CFG Studio 2 to open the *gta*\\data\\default.ide file.
3.  **Find** the entry for the new car and select that entire line.
4.  **Paste** the new default.ide data. It will replace the selected data.
5.  Save the default.ide file.

The wheel size and other special settings are now installed. You can test the car in-game again. If it doesn’t work, there might be more files to install.

## carcols.dat: Vehicle Colours

1.  Get the carcols.dat data for the new car and **Copy** it. It might be in the readme.txt.
2.  Use Notepad or CFG Studio 2 to open the *gta*\\data\\carcols.dat file.
3.  **Find** the entry for the new car and select that entire line.
4.  **Paste** the new vehicle colours data. It will replace the selected data.
5.  Save the carcols.dat file.

Sometimes you will get new “global colours”. These must added to the list at the top of the file.

The vehicle colours are now installed. You can test the car in-game again. If it still doesn’t work, you have done something wrong.

## If it Still Does Not Work

-   You need to be very careful and patient for cars to work.
-   You can use the files from your original install to fix the install you have modded. Then try installing the car again.
-   The car might be broken. This is very rare, though. Use the files from your original install to fix the install you have modded. Then try a different car.

Credits: 
