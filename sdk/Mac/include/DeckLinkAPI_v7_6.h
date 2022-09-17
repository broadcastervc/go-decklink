/* -LICENSE-START-
** Copyright (c) 2009 Blackmagic Design
**
** Permission is hereby granted, free of charge, to any person or organization
** obtaining a copy of the software and accompanying documentation covered by
** this license (the "Software") to use, reproduce, display, distribute,
** execute, and transmit the Software, and to prepare derivative works of the
** Software, and to permit third-parties to whom the Software is furnished to
** do so, all subject to the following:
** 
** The copyright notices in the Software and this entire statement, including
** the above license grant, this restriction and the following disclaimer,
** must be included in all copies of the Software, in whole or in part, and
** all derivative works of the Software, unless such copies or derivative
** works are solely in the form of machine-executable object code generated by
** a source language processor.
** 
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
** SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
** FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
** ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
** -LICENSE-END-
*/

/* DeckLinkAPI_v7_6.h */

#ifndef __DeckLink_API_v7_6_h__
#define __DeckLink_API_v7_6_h__

#include "DeckLinkAPI.h"
#include "DeckLinkAPI_v10_11.h"

// Interface ID Declarations

#define IID_IDeckLinkVideoOutputCallback_v7_6            /* E763A626-4A3C-49D1-BF13-E7AD3692AE52 */ (REFIID){0xE7,0x63,0xA6,0x26,0x4A,0x3C,0x49,0xD1,0xBF,0x13,0xE7,0xAD,0x36,0x92,0xAE,0x52}
#define IID_IDeckLinkInputCallback_v7_6                  /* 31D28EE7-88B6-4CB1-897A-CDBF79A26414 */ (REFIID){0x31,0xD2,0x8E,0xE7,0x88,0xB6,0x4C,0xB1,0x89,0x7A,0xCD,0xBF,0x79,0xA2,0x64,0x14}
#define IID_IDeckLinkDisplayModeIterator_v7_6            /* 455D741F-1779-4800-86F5-0B5D13D79751 */ (REFIID){0x45,0x5D,0x74,0x1F,0x17,0x79,0x48,0x00,0x86,0xF5,0x0B,0x5D,0x13,0xD7,0x97,0x51}
#define IID_IDeckLinkDisplayMode_v7_6                    /* 87451E84-2B7E-439E-A629-4393EA4A8550 */ (REFIID){0x87,0x45,0x1E,0x84,0x2B,0x7E,0x43,0x9E,0xA6,0x29,0x43,0x93,0xEA,0x4A,0x85,0x50}
#define IID_IDeckLinkOutput_v7_6                         /* 29228142-EB8C-4141-A621-F74026450955 */ (REFIID){0x29,0x22,0x81,0x42,0xEB,0x8C,0x41,0x41,0xA6,0x21,0xF7,0x40,0x26,0x45,0x09,0x55}
#define IID_IDeckLinkInput_v7_6                          /* 300C135A-9F43-48E2-9906-6D7911D93CF1 */ (REFIID){0x30,0x0C,0x13,0x5A,0x9F,0x43,0x48,0xE2,0x99,0x06,0x6D,0x79,0x11,0xD9,0x3C,0xF1}
#define IID_IDeckLinkTimecode_v7_6                       /* EFB9BCA6-A521-44F7-BD69-2332F24D9EE6 */ (REFIID){0xEF,0xB9,0xBC,0xA6,0xA5,0x21,0x44,0xF7,0xBD,0x69,0x23,0x32,0xF2,0x4D,0x9E,0xE6}
#define IID_IDeckLinkVideoFrame_v7_6                     /* A8D8238E-6B18-4196-99E1-5AF717B83D32 */ (REFIID){0xA8,0xD8,0x23,0x8E,0x6B,0x18,0x41,0x96,0x99,0xE1,0x5A,0xF7,0x17,0xB8,0x3D,0x32}
#define IID_IDeckLinkMutableVideoFrame_v7_6              /* 46FCEE00-B4E6-43D0-91C0-023A7FCEB34F */ (REFIID){0x46,0xFC,0xEE,0x00,0xB4,0xE6,0x43,0xD0,0x91,0xC0,0x02,0x3A,0x7F,0xCE,0xB3,0x4F}
#define IID_IDeckLinkVideoInputFrame_v7_6                /* 9A74FA41-AE9F-47AC-8CF4-01F42DD59965 */ (REFIID){0x9A,0x74,0xFA,0x41,0xAE,0x9F,0x47,0xAC,0x8C,0xF4,0x01,0xF4,0x2D,0xD5,0x99,0x65}
#define IID_IDeckLinkScreenPreviewCallback_v7_6          /* 373F499D-4B4D-4518-AD22-6354E5A5825E */ (REFIID){0x37,0x3F,0x49,0x9D,0x4B,0x4D,0x45,0x18,0xAD,0x22,0x63,0x54,0xE5,0xA5,0x82,0x5E}
#define IID_IDeckLinkCocoaScreenPreviewCallback_v7_6     /* D174152F-8F96-4C07-83A5-DD5F5AF0A2AA */ (REFIID){0xD1,0x74,0x15,0x2F,0x8F,0x96,0x4C,0x07,0x83,0xA5,0xDD,0x5F,0x5A,0xF0,0xA2,0xAA}
#define IID_IDeckLinkGLScreenPreviewHelper_v7_6          /* BA575CD9-A15E-497B-B2C2-F9AFE7BE4EBA */ (REFIID){0xBA,0x57,0x5C,0xD9,0xA1,0x5E,0x49,0x7B,0xB2,0xC2,0xF9,0xAF,0xE7,0xBE,0x4E,0xBA}
#define IID_IDeckLinkVideoConversion_v7_6                /* 3EB504C9-F97D-40FE-A158-D407D48CB53B */ (REFIID){0x3E,0xB5,0x04,0xC9,0xF9,0x7D,0x40,0xFE,0xA1,0x58,0xD4,0x07,0xD4,0x8C,0xB5,0x3B}
#define IID_IDeckLinkConfiguration_v7_6                  /* B8EAD569-B764-47F0-A73F-AE40DF6CBF10 */ (REFIID){0xB8,0xEA,0xD5,0x69,0xB7,0x64,0x47,0xF0,0xA7,0x3F,0xAE,0x40,0xDF,0x6C,0xBF,0x10}


#if defined(__cplusplus)

/* Enum BMDVideoConnection - Video connection types */

typedef uint32_t BMDVideoConnection_v7_6;
enum _BMDVideoConnection_v7_6 {
    bmdVideoConnectionSDI_v7_6                              = 'sdi ',
    bmdVideoConnectionHDMI_v7_6                             = 'hdmi',
    bmdVideoConnectionOpticalSDI_v7_6                       = 'opti',
    bmdVideoConnectionComponent_v7_6                        = 'cpnt',
    bmdVideoConnectionComposite_v7_6                        = 'cmst',
    bmdVideoConnectionSVideo_v7_6                           = 'svid'
};


// Forward Declarations

class IDeckLinkVideoOutputCallback_v7_6;
class IDeckLinkInputCallback_v7_6;
class IDeckLinkDisplayModeIterator_v7_6;
class IDeckLinkDisplayMode_v7_6;
class IDeckLinkOutput_v7_6;
class IDeckLinkInput_v7_6;
class IDeckLinkTimecode_v7_6;
class IDeckLinkVideoFrame_v7_6;
class IDeckLinkMutableVideoFrame_v7_6;
class IDeckLinkVideoInputFrame_v7_6;
class IDeckLinkScreenPreviewCallback_v7_6;
class IDeckLinkCocoaScreenPreviewCallback_v7_6;
class IDeckLinkGLScreenPreviewHelper_v7_6;
class IDeckLinkVideoConversion_v7_6;


/* Interface IDeckLinkVideoOutputCallback - Frame completion callback. */

class IDeckLinkVideoOutputCallback_v7_6 : public IUnknown
{
public:
    virtual HRESULT ScheduledFrameCompleted (/* in */ IDeckLinkVideoFrame_v7_6 *completedFrame, /* in */ BMDOutputFrameCompletionResult result) = 0;
    virtual HRESULT ScheduledPlaybackHasStopped (void) = 0;

protected:
    virtual ~IDeckLinkVideoOutputCallback_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkInputCallback - Frame arrival callback. */

class IDeckLinkInputCallback_v7_6 : public IUnknown
{
public:
    virtual HRESULT VideoInputFormatChanged (/* in */ BMDVideoInputFormatChangedEvents notificationEvents, /* in */ IDeckLinkDisplayMode_v7_6 *newDisplayMode, /* in */ BMDDetectedVideoInputFormatFlags detectedSignalFlags) = 0;
    virtual HRESULT VideoInputFrameArrived (/* in */ IDeckLinkVideoInputFrame_v7_6* videoFrame, /* in */ IDeckLinkAudioInputPacket* audioPacket) = 0;

protected:
    virtual ~IDeckLinkInputCallback_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkDisplayModeIterator - enumerates over supported input/output display modes. */

class IDeckLinkDisplayModeIterator_v7_6 : public IUnknown
{
public:
    virtual HRESULT Next (/* out */ IDeckLinkDisplayMode_v7_6 **deckLinkDisplayMode) = 0;

protected:
    virtual ~IDeckLinkDisplayModeIterator_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkDisplayMode - represents a display mode */

class IDeckLinkDisplayMode_v7_6 : public IUnknown
{
public:
    virtual HRESULT GetName (/* out */ CFStringRef *name) = 0;
    virtual BMDDisplayMode GetDisplayMode (void) = 0;
    virtual long GetWidth (void) = 0;
    virtual long GetHeight (void) = 0;
    virtual HRESULT GetFrameRate (/* out */ BMDTimeValue *frameDuration, /* out */ BMDTimeScale *timeScale) = 0;
    virtual BMDFieldDominance GetFieldDominance (void) = 0;

protected:
    virtual ~IDeckLinkDisplayMode_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkOutput - Created by QueryInterface from IDeckLink. */

class IDeckLinkOutput_v7_6 : public IUnknown
{
public:
    virtual HRESULT DoesSupportVideoMode (/* in */ BMDDisplayMode displayMode, /* in */ BMDPixelFormat pixelFormat, /* out */ BMDDisplayModeSupport_v10_11 *result) = 0;
    virtual HRESULT GetDisplayModeIterator (/* out */ IDeckLinkDisplayModeIterator_v7_6 **iterator) = 0;

    virtual HRESULT SetScreenPreviewCallback (/* in */ IDeckLinkScreenPreviewCallback_v7_6 *previewCallback) = 0;

    /* Video Output */

    virtual HRESULT EnableVideoOutput (/* in */ BMDDisplayMode displayMode, /* in */ BMDVideoOutputFlags flags) = 0;
    virtual HRESULT DisableVideoOutput (void) = 0;

    virtual HRESULT SetVideoOutputFrameMemoryAllocator (/* in */ IDeckLinkMemoryAllocator *theAllocator) = 0;
    virtual HRESULT CreateVideoFrame (/* in */ int32_t width, /* in */ int32_t height, /* in */ int32_t rowBytes, /* in */ BMDPixelFormat pixelFormat, /* in */ BMDFrameFlags flags, /* out */ IDeckLinkMutableVideoFrame_v7_6 **outFrame) = 0;
    virtual HRESULT CreateAncillaryData (/* in */ BMDPixelFormat pixelFormat, /* out */ IDeckLinkVideoFrameAncillary **outBuffer) = 0;

    virtual HRESULT DisplayVideoFrameSync (/* in */ IDeckLinkVideoFrame_v7_6 *theFrame) = 0;
    virtual HRESULT ScheduleVideoFrame (/* in */ IDeckLinkVideoFrame_v7_6 *theFrame, /* in */ BMDTimeValue displayTime, /* in */ BMDTimeValue displayDuration, /* in */ BMDTimeScale timeScale) = 0;
    virtual HRESULT SetScheduledFrameCompletionCallback (/* in */ IDeckLinkVideoOutputCallback_v7_6 *theCallback) = 0;
    virtual HRESULT GetBufferedVideoFrameCount (/* out */ uint32_t *bufferedFrameCount) = 0;

    /* Audio Output */

    virtual HRESULT EnableAudioOutput (/* in */ BMDAudioSampleRate sampleRate, /* in */ BMDAudioSampleType sampleType, /* in */ uint32_t channelCount, /* in */ BMDAudioOutputStreamType streamType) = 0;
    virtual HRESULT DisableAudioOutput (void) = 0;

    virtual HRESULT WriteAudioSamplesSync (/* in */ void *buffer, /* in */ uint32_t sampleFrameCount, /* out */ uint32_t *sampleFramesWritten) = 0;

    virtual HRESULT BeginAudioPreroll (void) = 0;
    virtual HRESULT EndAudioPreroll (void) = 0;
    virtual HRESULT ScheduleAudioSamples (/* in */ void *buffer, /* in */ uint32_t sampleFrameCount, /* in */ BMDTimeValue streamTime, /* in */ BMDTimeScale timeScale, /* out */ uint32_t *sampleFramesWritten) = 0;

    virtual HRESULT GetBufferedAudioSampleFrameCount (/* out */ uint32_t *bufferedSampleFrameCount) = 0;
    virtual HRESULT FlushBufferedAudioSamples (void) = 0;

    virtual HRESULT SetAudioCallback (/* in */ IDeckLinkAudioOutputCallback *theCallback) = 0;

    /* Output Control */

    virtual HRESULT StartScheduledPlayback (/* in */ BMDTimeValue playbackStartTime, /* in */ BMDTimeScale timeScale, /* in */ double playbackSpeed) = 0;
    virtual HRESULT StopScheduledPlayback (/* in */ BMDTimeValue stopPlaybackAtTime, /* out */ BMDTimeValue *actualStopTime, /* in */ BMDTimeScale timeScale) = 0;
    virtual HRESULT IsScheduledPlaybackRunning (/* out */ bool *active) = 0;
    virtual HRESULT GetScheduledStreamTime (/* in */ BMDTimeScale desiredTimeScale, /* out */ BMDTimeValue *streamTime, /* out */ double *playbackSpeed) = 0;

    /* Hardware Timing */

    virtual HRESULT GetHardwareReferenceClock (/* in */ BMDTimeScale desiredTimeScale, /* out */ BMDTimeValue *hardwareTime, /* out */ BMDTimeValue *timeInFrame, /* out */ BMDTimeValue *ticksPerFrame) = 0;

protected:
    virtual ~IDeckLinkOutput_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkInput_v7_6 - Created by QueryInterface from IDeckLink. */

class IDeckLinkInput_v7_6 : public IUnknown
{
public:
    virtual HRESULT DoesSupportVideoMode (/* in */ BMDDisplayMode displayMode, /* in */ BMDPixelFormat pixelFormat, /* out */ BMDDisplayModeSupport_v10_11 *result) = 0;
    virtual HRESULT GetDisplayModeIterator (/* out */ IDeckLinkDisplayModeIterator_v7_6 **iterator) = 0;

    virtual HRESULT SetScreenPreviewCallback (/* in */ IDeckLinkScreenPreviewCallback_v7_6 *previewCallback) = 0;

    /* Video Input */

    virtual HRESULT EnableVideoInput (/* in */ BMDDisplayMode displayMode, /* in */ BMDPixelFormat pixelFormat, /* in */ BMDVideoInputFlags flags) = 0;
    virtual HRESULT DisableVideoInput (void) = 0;
    virtual HRESULT GetAvailableVideoFrameCount (/* out */ uint32_t *availableFrameCount) = 0;

    /* Audio Input */

    virtual HRESULT EnableAudioInput (/* in */ BMDAudioSampleRate sampleRate, /* in */ BMDAudioSampleType sampleType, /* in */ uint32_t channelCount) = 0;
    virtual HRESULT DisableAudioInput (void) = 0;
    virtual HRESULT GetAvailableAudioSampleFrameCount (/* out */ uint32_t *availableSampleFrameCount) = 0;

    /* Input Control */

    virtual HRESULT StartStreams (void) = 0;
    virtual HRESULT StopStreams (void) = 0;
    virtual HRESULT PauseStreams (void) = 0;
    virtual HRESULT FlushStreams (void) = 0;
    virtual HRESULT SetCallback (/* in */ IDeckLinkInputCallback_v7_6 *theCallback) = 0;

    /* Hardware Timing */

    virtual HRESULT GetHardwareReferenceClock (/* in */ BMDTimeScale desiredTimeScale, /* out */ BMDTimeValue *hardwareTime, /* out */ BMDTimeValue *timeInFrame, /* out */ BMDTimeValue *ticksPerFrame) = 0;

protected:
    virtual ~IDeckLinkInput_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkTimecode - Used for video frame timecode representation. */

class IDeckLinkTimecode_v7_6 : public IUnknown
{
public:
    virtual BMDTimecodeBCD GetBCD (void) = 0;
    virtual HRESULT GetComponents (/* out */ uint8_t *hours, /* out */ uint8_t *minutes, /* out */ uint8_t *seconds, /* out */ uint8_t *frames) = 0;
    virtual HRESULT GetString (/* out */ CFStringRef *timecode) = 0;
    virtual BMDTimecodeFlags GetFlags (void) = 0;

protected:
    virtual ~IDeckLinkTimecode_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkVideoFrame - Interface to encapsulate a video frame; can be caller-implemented. */

class IDeckLinkVideoFrame_v7_6 : public IUnknown
{
public:
    virtual long GetWidth (void) = 0;
    virtual long GetHeight (void) = 0;
    virtual long GetRowBytes (void) = 0;
    virtual BMDPixelFormat GetPixelFormat (void) = 0;
    virtual BMDFrameFlags GetFlags (void) = 0;
    virtual HRESULT GetBytes (/* out */ void **buffer) = 0;

    virtual HRESULT GetTimecode (BMDTimecodeFormat format, /* out */ IDeckLinkTimecode_v7_6 **timecode) = 0;
    virtual HRESULT GetAncillaryData (/* out */ IDeckLinkVideoFrameAncillary **ancillary) = 0;

protected:
    virtual ~IDeckLinkVideoFrame_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkMutableVideoFrame - Created by IDeckLinkOutput::CreateVideoFrame. */

class IDeckLinkMutableVideoFrame_v7_6 : public IDeckLinkVideoFrame_v7_6
{
public:
    virtual HRESULT SetFlags (BMDFrameFlags newFlags) = 0;

    virtual HRESULT SetTimecode (BMDTimecodeFormat format, /* in */ IDeckLinkTimecode_v7_6 *timecode) = 0;
    virtual HRESULT SetTimecodeFromComponents (BMDTimecodeFormat format, uint8_t hours, uint8_t minutes, uint8_t seconds, uint8_t frames, BMDTimecodeFlags flags) = 0;
    virtual HRESULT SetAncillaryData (/* in */ IDeckLinkVideoFrameAncillary *ancillary) = 0;

protected:
    virtual ~IDeckLinkMutableVideoFrame_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkVideoInputFrame - Provided by the IDeckLinkVideoInput frame arrival callback. */

class IDeckLinkVideoInputFrame_v7_6 : public IDeckLinkVideoFrame_v7_6
{
public:
    virtual HRESULT GetStreamTime (/* out */ BMDTimeValue *frameTime, /* out */ BMDTimeValue *frameDuration, BMDTimeScale timeScale) = 0;
    virtual HRESULT GetHardwareReferenceTimestamp (BMDTimeScale timeScale, /* out */ BMDTimeValue *frameTime, /* out */ BMDTimeValue *frameDuration) = 0;

protected:
    virtual ~IDeckLinkVideoInputFrame_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkScreenPreviewCallback - Screen preview callback */

class IDeckLinkScreenPreviewCallback_v7_6 : public IUnknown
{
public:
    virtual HRESULT DrawFrame (/* in */ IDeckLinkVideoFrame_v7_6 *theFrame) = 0;

protected:
    virtual ~IDeckLinkScreenPreviewCallback_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkCocoaScreenPreviewCallback - Screen preview callback for Cocoa-based applications */

class IDeckLinkCocoaScreenPreviewCallback_v7_6 : public IDeckLinkScreenPreviewCallback_v7_6
{
public:

protected:
    virtual ~IDeckLinkCocoaScreenPreviewCallback_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkGLScreenPreviewHelper - Created with CoCreateInstance(). */

class IDeckLinkGLScreenPreviewHelper_v7_6 : public IUnknown
{
public:

    /* Methods must be called with OpenGL context set */

    virtual HRESULT InitializeGL (void) = 0;
    virtual HRESULT PaintGL (void) = 0;
    virtual HRESULT SetFrame (/* in */ IDeckLinkVideoFrame_v7_6 *theFrame) = 0;

protected:
    virtual ~IDeckLinkGLScreenPreviewHelper_v7_6 () {}; // call Release method to drop reference count
};


/* Interface IDeckLinkVideoConversion - Created with CoCreateInstance(). */

class IDeckLinkVideoConversion_v7_6 : public IUnknown
{
public:
    virtual HRESULT ConvertFrame (/* in */ IDeckLinkVideoFrame_v7_6* srcFrame, /* in */ IDeckLinkVideoFrame_v7_6* dstFrame) = 0;

protected:
    virtual ~IDeckLinkVideoConversion_v7_6 () {}; // call Release method to drop reference count
};

/* Interface IDeckLinkConfiguration - Created by QueryInterface from IDeckLink. */

class IDeckLinkConfiguration_v7_6 : public IUnknown
{
public:
    virtual HRESULT GetConfigurationValidator (/* out */ IDeckLinkConfiguration_v7_6 **configObject) = 0;
    virtual HRESULT WriteConfigurationToPreferences (void) = 0;
	
    /* Video Output Configuration */
	
    virtual HRESULT SetVideoOutputFormat (/* in */ BMDVideoConnection_v7_6 videoOutputConnection) = 0;
    virtual HRESULT IsVideoOutputActive (/* in */ BMDVideoConnection_v7_6 videoOutputConnection, /* out */ bool *active) = 0;
	
    virtual HRESULT SetAnalogVideoOutputFlags (/* in */ BMDAnalogVideoFlags analogVideoFlags) = 0;
    virtual HRESULT GetAnalogVideoOutputFlags (/* out */ BMDAnalogVideoFlags *analogVideoFlags) = 0;
	
    virtual HRESULT EnableFieldFlickerRemovalWhenPaused (/* in */ bool enable) = 0;
    virtual HRESULT IsEnabledFieldFlickerRemovalWhenPaused (/* out */ bool *enabled) = 0;
	
    virtual HRESULT Set444And3GBpsVideoOutput (/* in */ bool enable444VideoOutput, /* in */ bool enable3GbsOutput) = 0;
    virtual HRESULT Get444And3GBpsVideoOutput (/* out */ bool *is444VideoOutputEnabled, /* out */ bool *threeGbsOutputEnabled) = 0;
	
    virtual HRESULT SetVideoOutputConversionMode (/* in */ BMDVideoOutputConversionMode conversionMode) = 0;
    virtual HRESULT GetVideoOutputConversionMode (/* out */ BMDVideoOutputConversionMode *conversionMode) = 0;
	
    virtual HRESULT Set_HD1080p24_to_HD1080i5994_Conversion (/* in */ bool enable) = 0;
    virtual HRESULT Get_HD1080p24_to_HD1080i5994_Conversion (/* out */ bool *enabled) = 0;
	
    /* Video Input Configuration */
	
    virtual HRESULT SetVideoInputFormat (/* in */ BMDVideoConnection_v7_6 videoInputFormat) = 0;
    virtual HRESULT GetVideoInputFormat (/* out */ BMDVideoConnection_v7_6 *videoInputFormat) = 0;
	
    virtual HRESULT SetAnalogVideoInputFlags (/* in */ BMDAnalogVideoFlags analogVideoFlags) = 0;
    virtual HRESULT GetAnalogVideoInputFlags (/* out */ BMDAnalogVideoFlags *analogVideoFlags) = 0;
	
    virtual HRESULT SetVideoInputConversionMode (/* in */ BMDVideoInputConversionMode conversionMode) = 0;
    virtual HRESULT GetVideoInputConversionMode (/* out */ BMDVideoInputConversionMode *conversionMode) = 0;
	
    virtual HRESULT SetBlackVideoOutputDuringCapture (/* in */ bool blackOutInCapture) = 0;
    virtual HRESULT GetBlackVideoOutputDuringCapture (/* out */ bool *blackOutInCapture) = 0;
	
    virtual HRESULT Set32PulldownSequenceInitialTimecodeFrame (/* in */ uint32_t aFrameTimecode) = 0;
    virtual HRESULT Get32PulldownSequenceInitialTimecodeFrame (/* out */ uint32_t *aFrameTimecode) = 0;
	
    virtual HRESULT SetVancSourceLineMapping (/* in */ uint32_t activeLine1VANCsource, /* in */ uint32_t activeLine2VANCsource, /* in */ uint32_t activeLine3VANCsource) = 0;
    virtual HRESULT GetVancSourceLineMapping (/* out */ uint32_t *activeLine1VANCsource, /* out */ uint32_t *activeLine2VANCsource, /* out */ uint32_t *activeLine3VANCsource) = 0;
	
    /* Audio Input Configuration */
	
    virtual HRESULT SetAudioInputFormat (/* in */ BMDAudioConnection audioInputFormat) = 0;
    virtual HRESULT GetAudioInputFormat (/* out */ BMDAudioConnection *audioInputFormat) = 0;
};



/* Functions */

extern "C" {

	IDeckLinkIterator*							CreateDeckLinkIteratorInstance_v7_6 (void);
	IDeckLinkGLScreenPreviewHelper_v7_6*		CreateOpenGLScreenPreviewHelper_v7_6 (void);
    IDeckLinkCocoaScreenPreviewCallback_v7_6*	CreateCocoaScreenPreview_v7_6 (void* /* (NSView*) */ parentView);
    IDeckLinkVideoConversion_v7_6*				CreateVideoConversionInstance_v7_6 (void);

};


#endif      // defined(__cplusplus)
#endif      // __DeckLink_API_v7_6_h__
