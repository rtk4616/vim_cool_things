# Vim cool things

* 不抠细节
* 实用的一些操作
* Vim 设计哲学
* 一键部署 Vim 开发环境

## 光标移动

* h
* j
* k
* l
* w
* b

## 编辑

* i
* d
* x
* y
* p

## 高效的操作设计哲学

* <数量><操作><方向/位置>
  - 2yw
* <数量><操作>
  - 2p
* <选中><操作>
  - v d
  - v ~

## 其他光标移动操作

* f
* t
* %
* ^
* \$
* 9G
* gg
* G
* H
* L
* M

## 屏幕操作

* zz
* zt
* zb

## 操作()[]{}内的内容

* di{
* ci{
* di{
* yi{
* vi{

## 快速定位()[]{}的另一半

* %

* 高亮 () [] {} 的另一半
  - set  showmatch


## 全文替换

* %s/old/new/g
* 5,9s/old/new/g
* 5,9s/old/new/gc

## 关键字查找

* *
* #
* /
* Ack
* :nohl

## 剪切板

* "aY
* "ap

* 26 个命名的剪切板 (a-z)

## 大小写转换

* ~
* ^v ~

## 分割窗口

* split
* vsplit
* ^w
* ^h
* close

## 多文件编辑

* e
* bn
* bp
* ls
  - vim-airline plugin
* b<n>
* 复制/剪切一段代码至另一个文件

## 嵌入中文输入法

* Vim-IM plugin
* ^/

## 代码补全

* OmniCppCompletion
* SuperTab
* Tab
* .
* :

## 代码跳转

* ctags
* ^]
* ^t

## 竖行操作

* ^v I
* ^v r
* ^v x

## 代码查错

* ^j
* ^n
* ^p

## 代码缩进对齐

* ==
* gg=G

## 代码块的折叠

## 语法高亮

* syntax on

## 头文件与实现文件间快速跳转

* A plugin
* :A
* map hotkey ^a to :A

## 注释代码

* NerdCommenter plugin
* \cc
* \cu

## 代码注释

* ^v I *
* ^v x
* DoxygenToolKit plugin
* :Dox
* :DoxAuthor

## Vim 中执行 git 命令

* Fugitive plugin
* Git status
* Git add
* Git commit
* Git push

## Vim 展示 PPT

* Presenting plugin
* :PresentingStart

## 插件管理器

* Vundle plugin
* :VundleInstall
* :VundleClean

## 一键部署 Vim 开发环境

```bash
bash -c "$(curl -fsSL http://localhost:3000/shenyu/.vim/raw/master/install.sh)"
```

## 键盘布局

* Esc       交换 ~
* ^         交换 CapsLock
* Backspace 交换 \
