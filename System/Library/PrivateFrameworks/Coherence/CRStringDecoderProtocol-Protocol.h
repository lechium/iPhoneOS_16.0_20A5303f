//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSUUID;

@protocol CRStringDecoderProtocol
- (unsigned int)substringChild:(long long)arg1;
- (long long)substringChildCount;
- (long long)substringContentOptions;
- (unsigned int)substringLength;
- (unsigned int)substringRemovedAddedByCounter:(long long)arg1;
- (NSUUID *)substringRemovedAddedByReplica:(long long)arg1 withError:(id *)arg2;
- (long long)substringRemovedAddedByCount;
- (unsigned int)substringAddedByCounter:(long long)arg1;
- (NSUUID *)substringAddedByReplica:(long long)arg1 withError:(id *)arg2;
- (long long)substringAddedByCount;
- (unsigned int)substringCharClock;
- (NSUUID *)substringCharReplicaWithError:(id *)arg1;
- (void)decodeSubstring:(long long)arg1;
- (long long)substringCount;
- (NSObject *)fromAddedByVersionWithError:(id *)arg1;
- (NSObject *)fromVersionWithError:(id *)arg1;
- (NSObject *)addedByVersionWithError:(id *)arg1;
- (NSObject *)versionWithError:(id *)arg1;
- (id)storageWithError:(id *)arg1;
@end
