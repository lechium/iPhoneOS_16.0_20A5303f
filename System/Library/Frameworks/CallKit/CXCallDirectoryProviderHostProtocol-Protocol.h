//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSObject-Protocol.h>

@class CXCallDirectoryLabeledPhoneNumberEntryData, CXCallDirectoryPhoneNumberEntryData;

@protocol CXCallDirectoryProviderHostProtocol <NSObject>
- (oneway void)completeRequestWithReply:(void (^)(void))arg1;
- (oneway void)removeAllIdentificationEntriesWithReply:(void (^)(void))arg1;
- (oneway void)removeIdentificationEntriesWithData:(CXCallDirectoryPhoneNumberEntryData *)arg1 reply:(void (^)(void))arg2;
- (oneway void)addIdentificationEntriesWithData:(CXCallDirectoryLabeledPhoneNumberEntryData *)arg1 reply:(void (^)(void))arg2;
- (oneway void)removeAllBlockingEntriesWithReply:(void (^)(void))arg1;
- (oneway void)removeBlockingEntriesWithData:(CXCallDirectoryPhoneNumberEntryData *)arg1 reply:(void (^)(void))arg2;
- (oneway void)addBlockingEntriesWithData:(CXCallDirectoryPhoneNumberEntryData *)arg1 reply:(void (^)(void))arg2;
- (oneway void)isIncrementalLoadingAllowed:(void (^)(_Bool, NSError *))arg1;
@end
