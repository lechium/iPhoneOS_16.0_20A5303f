//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class STUnifiedTransportPayload;
@protocol STConduit;

@protocol STConduitDelegate <NSObject>
- (void)conduit:(id <STConduit>)arg1 didPrepareTransportPayload:(STUnifiedTransportPayload *)arg2;
- (void)conduit:(id <STConduit>)arg1 didReceiveTransportPayload:(STUnifiedTransportPayload *)arg2;
- (void)conduit:(id <STConduit>)arg1 didDeliverTransportPayload:(STUnifiedTransportPayload *)arg2;
- (void)conduitDidInvalidate:(id <STConduit>)arg1;
@end

