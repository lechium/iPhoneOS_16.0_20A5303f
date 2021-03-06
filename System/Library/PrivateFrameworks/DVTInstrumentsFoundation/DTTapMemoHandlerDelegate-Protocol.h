//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@class DTTapConfig, DTTapDataMemo, DTTapHeartbeatMemo, NSDictionary;
@protocol DTTapBulkDataReceiver;

@protocol DTTapMemoHandlerDelegate <NSObject>
- (void)sendHeartbeatMemo:(DTTapHeartbeatMemo *)arg1 toClientUsingConfig:(DTTapConfig *)arg2;
- (void)sendDataMemo:(DTTapDataMemo *)arg1 toClientUsingConfig:(DTTapConfig *)arg2;
- (void)sendDataMemo:(DTTapDataMemo *)arg1 toBulkReceiver:(id <DTTapBulkDataReceiver>)arg2;

@optional
- (NSDictionary *)peekAtMemo:(DTTapDataMemo *)arg1;
@end

