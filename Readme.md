# ShaneSpace Marlin-2.0.7.2-SKR-mini-E3-V1.2

### Official Repository
- *Base Repo:* https://github.com/bigtreetech/BIGTREETECH-SKR-mini-E3
- *v1.2:* https://github.com/bigtreetech/BIGTREETECH-SKR-mini-E3/tree/master/firmware/V1.2

# Customizations
- Custom boot screen (Alien)
- Custom status screen
- Enabled Mesh Bed Leveling & Validation

# Documentation
- https://www.reddit.com/r/ender3/comments/e894j7/marlin_20x_guide_for_ender_3_using_skr_mini_e3_v12/
- Compile Bug: https://github.com/MarlinFirmware/Marlin/issues/16694
- Compile Bug: https://www.reddit.com/r/BIGTREETECH/comments/eutzgy/compiling_marlin_bugfix20x_for_btt_skr_mini_e3_v12/

### Firmware compilation guide
1. Install the compilation environment, We recommend vscode + platformio. If you have already installed it, please skip this step.  If not, please see [here](https://github.com/bigtreetech/Document/blob/master/How%20to%20install%20VScode+Platformio.md).
2. If you use the firmware of this repository, you just need to customize the function that you want and recompile it(Because Marlin 2.0 is in bugfix state, this repository may not be the latest version of Marlin 2.0).
3. If you want to use the latest version of Marlin 2.0, please download from the [official GitHub website of marlin](https://github.com/MarlinFirmware/Marlin/tree/bugfix-2.0.x)
4. In the lower left corner of the VSCode, you can see that there’s one more icon, please see the picture below, 
which is the PlatformIO plugin, and then click "Open Project" to open the project.![image](https://user-images.githubusercontent.com/25599056/60634053-0aee5d80-9e40-11e9-9658-7cac8b6d1002.png)
### If you are using the official Marlin 2.0 version, you need the following additional changes
* After opening the project, go to the platformio.ini file and change the default environment from megaatmega2560 to STM32F103RC_btt_512K, `env_default = STM32F103RC_btt_512K`
* If you use the latest bugfix-2.0.x change the default environment from megaatmega2560 to STM32F103RC_btt_512K, `env_default = STM32F103RC_btt_512K`

 ![image](https://user-images.githubusercontent.com/38851044/69534016-f4de6680-0fb3-11ea-972f-5daae3643061.png)

* In the repo you just cloned, copy the contents of the following to Marlin:
https://github.com/MarlinFirmware/Configurations/tree/import-2.0.x/config/examples/Creality/Ender-3/BigTreeTech%20SKR%20Mini%20E3%201.2


 ![image](https://user-images.githubusercontent.com/38851044/69534241-5272b300-0fb4-11ea-8c11-5c130d1026c4.png)
 ![image](https://user-images.githubusercontent.com/38851044/69534316-7e8e3400-0fb4-11ea-8383-296760660e62.png)
#   S h a n e S p a c e . M a r l i n - S K R - M I N I - E 3  
 