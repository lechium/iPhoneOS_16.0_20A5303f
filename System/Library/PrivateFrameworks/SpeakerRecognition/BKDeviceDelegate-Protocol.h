//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class BKDevice, BKMatchEvent;

@protocol BKDeviceDelegate <NSObject>

@optional
- (void)device:(BKDevice *)arg1 matchEventOccurred:(BKMatchEvent *)arg2;
@end
