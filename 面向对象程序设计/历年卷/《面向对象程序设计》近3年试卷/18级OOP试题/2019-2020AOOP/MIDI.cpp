// MIDI.cpp
#include "MIDI.h"

HMIDIOUT MIDI::hMIDI;			// 静态数据成员定义（MIDI设备句柄）
int MIDI::NumObjs = 0;			// 静态数据成员定义（对象的个数）

DWORD MIDI::MidiOutMessage(int iStatus, int iChannel, int iFlip,  int iVolume)
{
	DWORD dwMessage = (iVolume << 16) | (iFlip << 8) | iStatus         | iChannel;
					//      音量      |     音符     | 状态字节(高4位) | 通道(低4位)
	return midiOutShortMsg (hMIDI, dwMessage) ;
}

MIDI::MIDI(const string &Name, int n, const Music *data) : name(Name), len(n)
{
	if(++NumObjs==1)		// 若是第一个对象，则打开MIDI设备
		midiOutOpen(&hMIDI, 0, 0, 0, CALLBACK_NULL);
	if(len<0) len = 0;
	if(data==NULL) return;
	for(int i=0; i<len; i++)
		x[i] = data[i];
}

MIDI::MIDI(const MIDI &m) : name(m.name), len(m.len)	// 拷贝构造函数
{
	++NumObjs;
	for(int i=0; i<len; i++)
		x[i] = m.x[i];
}

MIDI::~MIDI()
{
	if(--NumObjs==0)		// 若是最后一个对象，则关闭MIDI设备
		midiOutClose(hMIDI);
}

void MIDI::Play() const
{
	cout << name << endl;
	for(int i=0; i<len; i++)
	{
		cout << x[i].note << " ";
		MidiOutMessage(0x90, 0x00, x[i].note, x[i].volume);	// 开音
		Sleep(x[i].deltaTime*60000/180);					// 每分钟180拍
		MidiOutMessage(0x80, 0x00, x[i].note, 127);			// 关音
	}
	cout << endl;
}

MIDI_Piano::MIDI_Piano(const string &Name, int n, const Music *data)
	: MIDI(Name, n, data), timbre(0)
{
}

void MIDI_Piano::Play() const
{
	cout << "钢琴演奏\t";					// 此处无换行
	MidiOutMessage(0xC0, 0x00, timbre, 0);	// 设置音色
	MIDI::Play();
}

MIDI_Violin::MIDI_Violin(const string &Name, int n, const Music *data)
	: MIDI(Name, n, data), timbre(40)
{
}

void MIDI_Violin::Play() const
{
	cout << "小提琴演奏\t";					// 此处无换行
	MidiOutMessage(0xC0, 0x00, timbre, 0);	// 设置音色
	MIDI::Play();
}

MIDI_ChurchOrgan::MIDI_ChurchOrgan(const string &Name, int n, const Music *data)
	: MIDI(Name, n, data), timbre(19)
{
}

void MIDI_ChurchOrgan::Play() const
{
	cout << "教堂管风琴演奏\t";				// 此处无换行
	MidiOutMessage(0xC0, 0x00, timbre, 0);	// 设置音色
	MIDI::Play();
}
