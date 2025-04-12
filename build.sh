#!/bin/bash

wget https://dl.google.com/android/repository/android-ndk-r28-linux.zip

unzip android-ndk-r28-linux.zip
mv android-ndk-r28/ ndk/

./ndk/build/ndk-build
