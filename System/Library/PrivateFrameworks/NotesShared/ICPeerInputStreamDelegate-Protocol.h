//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/NSObject-Protocol.h>

@class ICPeerInputStream, NSData;

@protocol ICPeerInputStreamDelegate <NSObject>
- (void)didDisconnectInputStream:(ICPeerInputStream *)arg1;
- (void)handleMessage:(NSData *)arg1 fromInputStream:(ICPeerInputStream *)arg2;
@end
