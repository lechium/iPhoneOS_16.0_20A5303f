//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface AUAppleViewControllerBase : UIViewController
{
    struct AUListenerBase *eventListener;	// 8 = 0x8
    double lastRenderedSampleTime;	// 16 = 0x10
    _Bool auRendering;	// 24 = 0x18
    _Bool initialized;	// 25 = 0x19
    _Bool _needsRealtimeDrawing;	// 26 = 0x1a
    struct OpaqueAudioComponentInstance *AU;	// 32 = 0x20
    NSArray *topLevelObjects;	// 40 = 0x28
    double _realtimeDrawingInterval;	// 48 = 0x30
    UIColor *_tintColor;	// 56 = 0x38
}

+ (id)getLocalizedString:(id)arg1;	// IMP=0x006000000002416c
+ (id)customViewLogger;	// IMP=0x0060000000023935
- (void).cxx_destruct;	// IMP=0x000000000002433a
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property double realtimeDrawingInterval; // @synthesize realtimeDrawingInterval=_realtimeDrawingInterval;
- (void)priv_eventListener:(void *)arg1 event:(const struct AudioUnitEvent *)arg2 value:(float)arg3;	// IMP=0x000000000002411d
- (void)postEndGestureNotificationForParameter:(unsigned int)arg1;	// IMP=0x00000000000240cd
- (void)postBeginGestureNotificationForParameter:(unsigned int)arg1;	// IMP=0x000000000002407d
- (void)handleEndGesture:(unsigned int)arg1;	// IMP=0x0000000000024077
- (void)handleBeginGesture:(unsigned int)arg1;	// IMP=0x0000000000024071
- (struct AudioUnitParameterInfo)getParameterInfo:(unsigned int)arg1 scope:(unsigned int)arg2;	// IMP=0x0000000000023f0b
- (void)priv_removeListenerForParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;	// IMP=0x0000000000023df6
- (void)priv_addListenerForParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;	// IMP=0x0000000000023bc7
- (void)priv_removeListeners;	// IMP=0x0000000000023a61
- (void)cleanup;	// IMP=0x0000000000023a4f
- (void)handleParameterListChanged;	// IMP=0x0000000000023a49
- (void)synchronizeUIWithParameterValues;	// IMP=0x0000000000023a43
- (void)registerParameters;	// IMP=0x0000000000023a3d
- (void)prepareData;	// IMP=0x0000000000023a37
- (struct OpaqueAudioComponentInstance *)au;	// IMP=0x0000000000023a26
- (void)setAU:(struct OpaqueAudioComponentInstance *)arg1;	// IMP=0x0000000000023a15
- (void)doRealtimeDrawing;	// IMP=0x0000000000023a0f
@property _Bool needsRealtimeDrawing; // @synthesize needsRealtimeDrawing=_needsRealtimeDrawing;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000239dd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000239d7
- (void)viewDidLoad;	// IMP=0x0000000000023979

@end
