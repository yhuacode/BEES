# SmartSA

An Energy-aware Image Sharing System for Real-time Situation Awareness in Disasters

## The SmartSA paper

Pengfei Zuo, Yu Hua, Dan Feng, Zhenhua Nie, Min Fu, Yuanyuan Sun, "E-STORE: An Energy-constrained Smartphone Storage for Near Real-time Disaster Image Sharing", Poster in the 13th USENIX Conference on File and Storage Technologies (FAST), February, 2015.

Pengfei Zuo, Yu Hua, Xue Liu, Dan Feng, Wen Xia, Shunde Cao, Jie Wu, Yuanyuan Sun, Zhou Feng, Yuncheng Guo, "SmartSA: An Energy-aware Image Sharing System for Real-time Situation Awareness in Disasters", submitted to USENIX ATC 2016.


## The client


### Environment
>Android 4.4

### Dependencies

>1. [OpenCV Library for Android - 2.4.11] (http://opencv.org/downloads.html)
>
>2. v7-appcompat


## The server


### Environment
>Linux 64bit

### Dependencies
> [OpenCV library for Linux - 2.4.11] (http://opencv.org/downloads.html)

### Install

> 1. Makefile
>> `make` 	
>
> 2. Generate the ORB library: extract the ORB keypoints of images in "./imagelib" and put them in "./orblib"
>> `./orblib_init  ./imagelib`
> 
> 3. Start the server 
>> `./server`

## Contact

The contributors of implementing SmartSA: Pengfei Zuo, [Jie Wu](https://github.com/courageJ), Zhou Feng, Shunde Cao, Yuncheng Guo

Email: pfzuo@hust.edu.cn

If you have any questions, please feel free to contact me. 
