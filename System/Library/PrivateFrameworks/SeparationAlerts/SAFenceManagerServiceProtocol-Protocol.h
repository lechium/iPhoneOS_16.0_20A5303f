//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SAFenceManagerClientProtocol, TAEventProtocol;

@protocol SAFenceManagerServiceProtocol
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeClient:(id <SAFenceManagerClientProtocol>)arg1;
- (void)addClient:(id <SAFenceManagerClientProtocol>)arg1;
@end

