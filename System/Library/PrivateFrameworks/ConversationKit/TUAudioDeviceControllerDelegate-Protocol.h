//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConversationKit/NSObject-Protocol.h>

@class TUAudioDeviceController;

@protocol TUAudioDeviceControllerDelegate <NSObject>

@optional
- (void)audioDeviceControllerMutedTalkerDidEnd:(TUAudioDeviceController *)arg1;
- (void)audioDeviceControllerMutedTalkerDidStart:(TUAudioDeviceController *)arg1;
- (void)audioDeviceControllerDeviceListChanged:(TUAudioDeviceController *)arg1;
@end

