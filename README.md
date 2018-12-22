## [USTH-First year] Basic Programing Labworks
The C programming language is one of the most popular programming languages. Despite being fairly old programming language, it is widely used for system and application software. because of its efficiency and control.

This course is intended for beginners who do not have any prior knowledge or have very little knowledge of computer programming. All basic features of C programming language are included in detail such as basic syntax, data types, operators, control flow, functions, arrays, pointers, union, structure, and the standard c library.

In this course, you will not only learn the C programming language, but you also improve your computational skills beneficial to your major field of study.

## How to use
There are **2 ways** you can run C files in your computer  
* Using IDE ( Code::Blocks/ Dev-C++)  
![NSGIG](www.google.com)  
* Using cmd/ powershell
```PowerShell:
gcc \.filename.c -o \.filename.exe
```  
![NSGIG](www.google.com)


### Sofware installation

##### Using IDE: 
Download and install Code::Blocks or Def-C++:
* [CodeBlock::](https://sourceforge.net/projects/codeblocks/files/Binaries/17.12/Windows/codeblocks-17.12mingw-setup.exe/download)
* [Def-C++](https://sourceforge.net/projects/orwelldevcpp/)
#### Using cmd/powershell:
It's more complicated than the previous method, but you will look more pro.  
Follow this [link](https://www.wikihow.com/Compile-a-C-Program-Using-the-GNU-Compiler-(GCC))

### Installation with CocoaPods

CocoaPods is a dependency manager for Objective-C, which automates and simplifies the process of using 3rd-party libraries like NSGIF in your projects. See the "[Getting Started](http://guides.cocoapods.org/syntax/podfile.html)" guide for more information.

### Podfile
```ruby
platform :ios, '7.0'
pod "NSGIF", "~> 1.0"
```

## Practical use
```objective-c
[NSGIF optimalGIFfromURL:url loopCount:0 completion:^(NSURL *GifURL) {
    NSLog(@"Finished generating GIF: %@", GifURL);
}];
```
This generates a GIF from the provided video, by automatically setting the best frame count, delay time and size.

If you want some more flexibility you can use:
```objective-c
[NSGIF createGIFfromURL:url withFrameCount:30 delayTime:.010 loopCount:0 completion:^(NSURL *GifURL) {
    NSLog(@"Finished generating GIF: %@", GifURL);
}];
```
The library is lightweight and very straight forward. Once you grab the URL of your video, pass it to NSGIF alongside the frame count, delay time and loop count. 
Let me explain those for you: 
```
frameCount - is the amount of frames of the GIF. You can adjust this depending on the resolution of your video. The higher the resolution the lower to frame count!
delayTime  -  is the amount of time for each frame in the GIF.
loopCount  - is the number of times the GIF will repeat. Defaults to 0, which means repeat infinitely.
```
I recommend you to play with those values and find the best ones for your video.

## Demo

Check out the demo project for a quick example of how NSGIF works. After you capture your video, this is what you have to do, to retrieve the GIF:

![NSGIF](https://dl.dropboxusercontent.com/s/p02c6l7rzk6mf6m/NSGIF-HT.gif?dl=0)

## Todo
- [X] Add MacOS Demo
- [X] Auto-calculate the frame count
- [X] Show preview of GIF in iOS App
- [X] Create GIFs based on enums for quality type 

Pull requests are more than welcomed!

## License
Usage is provided under the [MIT License](http://http//opensource.org/licenses/mit-license.php). See LICENSE for the full details.

