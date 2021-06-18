// MIDI.h	本程序需要连接多媒体库libwinmm.a
// 设置方法 Project/Settings.../Link/Libraries项的值为C:\MinGWStudio\MinGW\lib\libwinmm.a
#ifndef MIDI_H
#define MIDI_H
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

const int N = 100;

struct Music
{
	int deltaTime, note, volume;	// 时长（拍数）、音符、音量
};

class MIDI		// 乐器数字化接口(Musical Instrument Digital Interface)
{
public:
	MIDI(const string &Name="", int n=0, const Music *data=NULL);// 构造函数
	MIDI(const MIDI &m);		// 拷贝构造函数
	virtual ~MIDI();			// 析构函数（虚函数）
	virtual void Play() const;	// 演奏乐曲（虚函数）
protected:
	static DWORD MidiOutMessage(int iStatus, int iChannel, int iFlip, int iVolume);
			// 给MIDI设备发送消息，用于设置音色、发出声音、停止发音等功能
	static HMIDIOUT hMIDI;		// 静态数据成员
	static int NumObjs;			// 创建对象的个数
	string name;				// 乐曲名
	int len;					// 乐曲的音符数（不超过N）
	Music x[N];					// 乐谱
};

class MIDI_Piano : public MIDI	// 钢琴类
{
public:
	MIDI_Piano(const string &Name="", int n=0, const Music *data=NULL);
	void Play() const;
protected:
	int timbre;					// 音色（对应某种乐器） 
};

class MIDI_Violin : public MIDI	// 小提琴类
{
public:
	MIDI_Violin(const string &Name="", int n=0, const Music *data=NULL);
	void Play() const;
protected:
	int timbre;					// 音色（对应某种乐器）
};

class MIDI_ChurchOrgan : public MIDI	// 教堂管风琴类
{
public:
	MIDI_ChurchOrgan(const string &Name="", int n=0, const Music *data=NULL);
	void Play() const;
protected:
	int timbre;					// 音色（对应某种乐器） 
};

#endif
