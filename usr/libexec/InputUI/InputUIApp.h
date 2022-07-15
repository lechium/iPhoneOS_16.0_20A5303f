//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIApplication.h>

@class ITTInputTeletypeServer, IUIDummyITTInputTeletypeServer, NSObject, RTIInputSystemService, RTIInputSystemUIService, UIKeyboardUIService;
@protocol OS_dispatch_semaphore;

@interface InputUIApp : UIApplication
{
    NSObject<OS_dispatch_semaphore> *_sceneCreationSemaphore;	// 8 = 0x8
    RTIInputSystemService *_textInputService;	// 16 = 0x10
    RTIInputSystemUIService *_inputLaunchAngelService;	// 24 = 0x18
    UIKeyboardUIService *_keyboardUIService;	// 32 = 0x20
    ITTInputTeletypeServer *_inputTeletypeServer;	// 40 = 0x28
    IUIDummyITTInputTeletypeServer *_dummyInputTeletypeServer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000263a
@property(retain, nonatomic) IUIDummyITTInputTeletypeServer *dummyInputTeletypeServer; // @synthesize dummyInputTeletypeServer=_dummyInputTeletypeServer;
@property(retain, nonatomic) ITTInputTeletypeServer *inputTeletypeServer; // @synthesize inputTeletypeServer=_inputTeletypeServer;
@property(retain, nonatomic) UIKeyboardUIService *keyboardUIService; // @synthesize keyboardUIService=_keyboardUIService;
@property(retain, nonatomic) RTIInputSystemUIService *inputLaunchAngelService; // @synthesize inputLaunchAngelService=_inputLaunchAngelService;
@property(readonly, nonatomic) RTIInputSystemService *textInputService; // @synthesize textInputService=_textInputService;
- (void)waitForSpringBoardToCreateInputUIScene;	// IMP=0x00100000000024c9
- (void)pauseTextInputService;	// IMP=0x00100000000023f9
- (void)resumeTextInputService;	// IMP=0x00100000000023ba
- (id)init;	// IMP=0x00100000000021cc

@end
