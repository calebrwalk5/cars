#include <stdio.h>

int main() {
	printf("Caleb's Auto Rice Script\n");
	system("sudo pacman -Syu");
	system("sudo pacman -S yay vim neofetch xrandr lolcat make gcc g++ curl acpi st terminator xterm python");
	system("yay -S thunar cowsay steam discord chromium gnome-boxes");
	system("wget http://72.46.34.69/.vimrc");
	system("cp ./wallpaper.png ~/Pictures");
	system("cp .vimrc ~/");
	system("cp .bashrc ~/");
	system("cd ~/ && git clone https://github.com/calebrwalk5/comfy");
	system("sudo make");
	system("sudo cp comfy /bin");
	uwm();
	return 0;
}

void uwm() {
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
	configure();
}

void configure() {
	system("clear");
	system("xrandr");
	system("vim ~/uwm/config.h");
}
