# 42KL Cursus

> ***"No Teacher. No Classess. No Fees. 100% Practical Coding" - Software Engineering***

# Why 42 KL?
1. Peer 2 Peer Learning
2. Gamication
3. Not Tuition Fees
4. No Classes
5. Equal Opportunity
6. Project-Based Learning

![Myself @42KL](https://i.imgur.com/6to9ib1.jpg)


## Resources to get prepared using your own PC
1. [42 Norminette setup](https://github.com/42School/norminette)
2. [42 Header Setup](https://github.com/42Paris/42header)
3. [Setup your vim editor - vimrc](https://www.freecodecamp.org/news/vimrc-configuration-guide-customize-your-vim-editor/)
  ```
  ~/.vimrc
  set number
  set ruler
  syntax on
  set mouse=a
  cd ~/.vim/colors
  curl -o molokai.vim https://raw.githubusercontent.com/tomasr/molokai/master/colors/molokai.vim
  colorscheme molokai
  set nocompatible
  filetype on
  filetype indent on
  ```
  
## Git issue

*xcrun: error: invalid active developer path (/Library/Developer/CommandLineTools), missing xcrun at: /Library/Developer/CommandLineTools/usr/bin/xcrun*

```bash
Lims-iMac:42cursus YCLim$ git status
xcrun: error: invalid active developer path (/Library/Developer/CommandLineTools), missing xcrun at: /Library/Developer/CommandLineTools/usr/bin/xcrun
Lims-iMac:42cursus YCLim$ xcode-select --install
xcode-select: note: install requested for command line developer tools
```
