//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Recap/NSObject-Protocol.h>

@class RCPEventSenderProperties;

@protocol RCPBaseEventStreamComposer <NSObject>
@property(retain, nonatomic) RCPEventSenderProperties *senderProperties;
- (void)advanceTime:(double)arg1;
@end
