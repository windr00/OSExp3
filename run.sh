#!/usr/bin/env bash
sudo rmmod main
sudo insmod main.ko
echo "modules intalled to kernel, use dmesg to view ouputs"
