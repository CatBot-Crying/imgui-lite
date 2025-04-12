#!/bin/bash

# Define variables
NDK_ZIP="android-ndk-r28-linux.zip"
NDK_URL="https://dl.google.com/android/repository/$NDK_ZIP"
NDK_DIR="ndk"

# Check if the zip file already exists
if [ -f "$NDK_ZIP" ]; then
    echo "NDK zip file ($NDK_ZIP) already exists. Skipping download."
else
    echo "Downloading Android NDK..."
    wget "$NDK_URL"
    if [ $? -ne 0 ]; then
        echo "Error: Failed to download $NDK_ZIP"
        exit 1
    fi
fi

# Check if the NDK directory already exists
if [ -d "$NDK_DIR" ]; then
    echo "NDK directory ($NDK_DIR) already exists. Skipping unzip and move."
else
    # Check if the zip file exists before attempting to unzip
    if [ ! -f "$NDK_ZIP" ]; then
        echo "Error: $NDK_ZIP not found. Cannot proceed with unzip."
        exit 1
    fi

    echo "Unzipping $NDK_ZIP..."
    unzip "$NDK_ZIP"
    if [ $? -ne 0 ]; then
        echo "Error: Failed to unzip $NDK_ZIP"
        exit 1
    fi

    # Move the extracted folder to ndk/
    echo "Moving android-ndk-r28 to $NDK_DIR..."
    mv android-ndk-r28/ "$NDK_DIR"
    if [ $? -ne 0 ]; then
        echo "Error: Failed to move android-ndk-r28 to $NDK_DIR"
        exit 1
    fi
fi

# Check if ndk-build exists and is executable
if [ -f "./$NDK_DIR/build/ndk-build" ]; then
    echo "Running ndk-build..."
    ./"$NDK_DIR/build/ndk-build"
    if [ $? -ne 0 ]; then
        echo "Error: ndk-build failed"
        exit 1
    fi
else
    echo "Error: ndk-build not found in $NDK_DIR/build/"
    exit 1
fi

echo "NDK setup and build completed successfully!"
