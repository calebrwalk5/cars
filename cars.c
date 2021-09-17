#include <stdio.h>

// Caleb's Auto Rice Script for Arch Linux
// CARS installs useful applications, UWM, Luke Smith's build of Simple Terminal, and the /comfy/ 4chan browser!
// Run CARS as sudo, and you're good to go

int main() {
	printf("Caleb's Auto Rice Script\n");
	system("sudo pacman -Syu");
	printf("Downloading packages...\n");
	system("sudo pacman -S yay vim neofetch xrandr lolcat make gcc g++ curl acpi terminator xterm python");
	system("yay -S thunar cowsay gparted geany leafpad kate feh steam surf discord brave-bin nmtui alsamixer chromium gnome-boxes openssh");
	system("sudo pacman -Syu");
	printf("Downloading config files...\n");
	system("wget http://72.46.34.69/.vimrc");
	system("cp ./wallpaper.png ~/Pictures");
	system("cp .vimrc ~/");
	system("cp .bashrc ~/");
	printf("Downloading /comfy/ 4chan browser...\n");
	system("cd ~/ && git clone https://github.com/calebrwalk5/comfy");
	system("sudo make");
	system("sudo cp comfy /bin");
	system("wget https://raw.githubusercontent.com/calebrwalk5/overclock-nvidia-linux/main/overclock.sh");
	uwm();
	return 0;
}

void uwm() {
	printf("Downloading UWM...\n");
	system("cd ~/ && git clone https://github.com/calebrwalk5/uwm");
	system("cd ~/uwm && feh --bg-scale ~/Pictures/wallpaper.png");
	system("cd ~/uwm && make");
	system("cd ~/uwm && sudo make clean install");
	system("cd ~/uwm && cd anus-term && make");
	system("cd ~/uwm && sudo cp ./anus-term/bin/anus-term /bin/");
	system("cd ~/uwm && echo 'exec uwm' >> ~/.xinitrc");
	system("cd ~/uwm && sudo cp uwm.desktop /usr/share/xsessions/");
	system("cd ~/uwm && echo 'feh --bg-scale ~/uwm/wallpaper.png' >> ~/.bashrc");
	system("cd ~/uwm && sudo chmod +x clock.sh");
	printf("UWM installed\n");
	st();
}

void st() {
	printf("Configuring termminal...\n");
	system("cd ~/ && git clone https://github.com/LukeSmithxyz/st");
	system("cd ~/st && sudo make install");
	printf("Simple Terminal installed\n");
	configure();
}

void configure() {
	system("xrandr");
	system("vim ~/uwm/config.h");
	system("chromium http://72.46.34.69");
	system("chromium https://lukesmith.xyz");
	printf("Thank You For Installing CARS\nYou should reboot your machine\n");
}
