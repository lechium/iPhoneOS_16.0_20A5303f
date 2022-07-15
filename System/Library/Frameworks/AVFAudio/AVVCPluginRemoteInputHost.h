//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVoiceController, NSMutableArray;
@protocol AVAudioRemoteInputPlugin;

__attribute__((visibility("hidden")))
@interface AVVCPluginRemoteInputHost : NSObject
{
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;	// 8 = 0x8
    AVVoiceController *_mMotherController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000da2c9
@property(nonatomic) __weak AVVoiceController *mMotherController; // @synthesize mMotherController=_mMotherController;
- (id)mockPluginEndpoint;	// IMP=0x00000000000d9ef9
- (void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2;	// IMP=0x00000000000d9a8a
- (void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2;	// IMP=0x00000000000d961b
- (void)setParentVoiceController:(id)arg1;	// IMP=0x00000000000d960a
- (id)findFirstBluetoothDevice;	// IMP=0x00000000000d916d
- (id)findDeviceWithIdentifier:(id)arg1;	// IMP=0x00000000000d8b34
- (id)allBundles:(id *)arg1;	// IMP=0x00000000000d851c
- (void)invalidatePlugins;	// IMP=0x00000000000d828b
- (void)dealloc;	// IMP=0x00000000000d8199
- (id)init;	// IMP=0x00000000000d7b1b

@end
