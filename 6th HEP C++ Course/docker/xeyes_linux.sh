#!/bin/bash

xhost +

docker run -e DISPLAY=$DISPLAY -v /tmp/.X11-unix:/tmp/.X11-unix:rw gns3/xeyes
