//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSMapTable;

@interface GEOResourceManifestUpdateAssertionServer : GEOServer
{
    NSMapTable *_peerToAssertionRecord;	// 8 = 0x8
}

+ (id)identifier;	// IMP=0x00200000000184c1
- (void).cxx_destruct;	// IMP=0x001000000002c09e
- (void)checkinForUpdateAssertionWithRequest:(id)arg1;	// IMP=0x001000000002bc92
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000002bbb9
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00100000000184ce

@end
