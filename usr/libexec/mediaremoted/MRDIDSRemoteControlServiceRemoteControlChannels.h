//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRDIDSRemoteControlServiceRemoteControlChannels : NSObject
{
    NSMutableDictionary *_channels;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000413a8
- (id)channelForDestination:(id)arg1 session:(id)arg2;	// IMP=0x001000000004131f
- (void)removeChannelForDestination:(id)arg1;	// IMP=0x0010000000041100
- (void)addChannel:(id)arg1 forDestination:(id)arg2 session:(id)arg3;	// IMP=0x0010000000041008
- (id)debugDescription;	// IMP=0x0010000000040f72

@end

