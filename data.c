/* mipslabdata.c
   This file compiled 2015 by F Lundevall
   from original code written by Axel Isaksson

   For copyright and licensing, see file COPYING */

#include <stdint.h>   /* Declarations of uint_32 and the like */
#include <pic32mx.h>  /* Declarations of system-specific addresses etc */
#include "data.h"  /* Declatations for these labs */

const uint8_t const int_screen_buffer[] = {
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x45, 
0x7d, 
0x41, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0xff, 
0xff, 
0xff, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x75, 
0x55, 
0x5d, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0xff, 
0xff, 
0xff, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x55, 
0x55, 
0x7d, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0x01, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff, 
0x01, 
0x5d, 
0x55, 
0x75, 
0x01, 
0x7d, 
0x55, 
0x55, 
0x01, 
0x7d, 
0x41, 
0x41, 
0x01, 
0x7d, 
0x55, 
0x55, 
0x01, 
0x7d, 
0x45, 
0x45, 
0x01, 
0x05, 
0x7d, 
0x05, 
0x01, 
0xff, 
0xff, 
0xff, 
0xff, 
0xff
};

const uint64_t const ext_screen_buffer[] = {
0x83ee0ffff83fbfff, 0xfeffffdffffff7ff, 
0x07dc1ffff07f7fff, 0xfdffffbfffffefff, 
0x0fb83fffe0feffff, 0xfbffff7fffffdffe, 
0x1f707fffc1fdffff, 0xf7fffeffffffbffc, 
0x3ee0ffff83fbffff, 0xeffffdffffff7ff8, 
0x7dc1ffff07f7ffff, 0xdffffbfffffefff0, 
0xfb83fffe0fefffff, 0xbffff7fffffdffe0, 
0xf707fffc1fdfffff, 0x7fffeffffffbffc1, 
0xee0ffff83fbfffff, 0xffffdffffff7ff83, 
0xdc1ffff07f7fffff, 0xffffbfffffefff07, 
0xb83fffe0feffffff, 0xffff7fffffdffe0f, 
0x707fffc1fdffffff, 0xfffeffffffbffc1f, 
0xe0ffff83fbffffff, 0xfffdffffff7ff83e, 
0xc1ffff07f7fffffc, 0xfffbfffffefff07d, 
0x83fffe0feffffff8, 0xfff7fffffdffe0fb, 
0x07fffc1fdffffff0, 0xffeffffffbffc1f7, 
0x0ffff83fbfffffe0, 0xffdffffff7ff83ee, 
0x1ffff07f7fffffc1, 0xffbfffffefff07dc, 
0x3fffe0feffffff83, 0xff7fffffdffe0fb8, 
0x7fffc1fdffffff07, 0xfeffffffbffc1f70, 
0xffff83fbfffffe0f, 0xfdffffff7ff83ee0, 
0xffff07f7fffffc1f, 0xfbfffffefff07dc1, 
0xfffe0feffffff83f, 0xf7fffffdffe0fb83, 
0xfffc1fdffffff07f, 0xeffffffbffc1f707, 
0xfff83fbfffffe0ff, 0xdffffff7ff83ee0f, 
0xfff07f7fffffc1ff, 0xbfffffefff07dc1f, 
0xffe0feffffff83ff, 0x7fffffdffe0fb83f, 
0xffc1fdffffff07ff, 0xffffffbffc1f707f, 
0xff83fbfffffe0fff, 0xffffff7ff83ee0ff, 
0xff07f7fffffc1fff, 0xfffffefff07dc1ff, 
0xfe0feffffff83fff, 0xfffffdffe0fb83ff, 
0xfc1fdffffff07fff, 0xfffffbffc1f707ff, 
0xf83fbfffffe0ffff, 0xfffff7ff83ee0fff, 
0xf07f7fffffc1ffff, 0xffffefff07dc1fff, 
0xe0feffffff83ffff, 0xffffdffe0fb83fff, 
0xc1fdffffff07ffff, 0xffffbffc1f707fff, 
0x83fbfffffe0fffff, 0xffff7ff83ee0ffff, 
0x07f7fffffc1fffff, 0xfffefff07dc1ffff, 
0x0feffffff83ffffe, 0xfffdffe0fb83fffe, 
0x1fdffffff07ffffd, 0xfffbffc1f707fffc, 
0x3fbfffffe0fffffb, 0xfff7ff83ee0ffff8, 
0x7f7fffffc1fffff7, 0xffefff07dc1ffff0, 
0xfeffffff83ffffef, 0xffdffe0fb83fffe0, 
0xfdffffff07ffffdf, 0xffbffc1f707fffc1, 
0xfbfffffe0fffffbf, 0xff7ff83ee0ffff83, 
0xf7fffffc1fffff7f, 0xfefff07dc1ffff07, 
0xeffffff83ffffeff, 0xfdffe0fb83fffe0f, 
0xdffffff07ffffdff, 0xfbffc1f707fffc1f, 
0xbfffffe0fffffbff, 0xf7ff83ee0ffff83f, 
0x7fffffc1fffff7ff, 0xefff07dc1ffff07f, 
0xffffff83ffffefff, 0xdffe0fb83fffe0fe, 
0xffffff07ffffdfff, 0xbffc1f707fffc1fd, 
0xfffffe0fffffbfff, 0x7ff83ee0ffff83fb, 
0xfffffc1fffff7fff, 0xfff07dc1ffff07f7, 
0xfffff83ffffeffff, 0xffe0fb83fffe0fef, 
0xfffff07ffffdffff, 0xffc1f707fffc1fdf, 
0xffffe0fffffbffff, 0xff83ee0ffff83fbf, 
0xffffc1fffff7ffff, 0xff07dc1ffff07f7f, 
0xffff83ffffefffff, 0xfe0fb83fffe0feff, 
0xffff07ffffdfffff, 0xfc1f707fffc1fdff, 
0xfffe0fffffbfffff, 0xf83ee0ffff83fbff, 
0xfffc1fffff7fffff, 0xf07dc1ffff07f7ff, 
0xfff83ffffeffffff, 0xe0fb83fffe0fefff, 
0xfff07ffffdffffff, 0xe1f707fffe1fdfff, 
};
