# dmenu - dynamic menu

dmenu is an efficient dynamic menu for X.

## Requirements

- Xlib header files
- [Fira code Nerd Font](https://aur.archlinux.org/packages/nerd-fonts-fira-code/)
- JoyPixel Emoji icon


## Installation

- clone this repository  
- edit `config.mk` to match your local setup
- make as sudo.

```shell
$ git clone https://gitlab.com/samyak039/suckless_dmenu.git dmenu
$ cd dmenu
$ sudo make clean install
```

## Scripts Available

- `dmenu`: dynamic menu
- `dmenu_path`: find and cache a list of executables
- `dmenu_run`: to execute programs
- `dmenu_run_i`: to execute programs and commands! in new terminal
- `dmenu_run_history`: to execute programs, but sorts in descending history
- `dmenu_run_history_i`: to execute programs and commands! in a new terminal, but sorts in descending history

See the **man page** for more details.

## Screenshots

#### The way I like to use it
```
dmenu_run_history_i -l 20 -c -bw 3 -p 'run'
```

![dmenu_run_history_i](screenshot/dmenu_run_history_i.png)

