//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pasteboard/PBItemCollection.h>

@interface PBItemCollection (Server)
+ (id)unserializeCollectionFromPasteboardURL:(id)arg1 baseURL:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000001b63f
+ (id)unserializeCollectionFromBaseURL:(id)arg1 persistenceName:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000001b582
- (void)recordUserAuthorizationDecision:(_Bool)arg1 auditTokenInfo:(id)arg2;	// IMP=0x002000000001c67b
- (unsigned long long)authorizationDecisionForAuditTokenInfo:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x001000000001c511
- (void)setStorageBaseURL:(id)arg1;	// IMP=0x001000000001c344
- (id)serializeToBaseURL:(id)arg1 isServerToServerCopy:(_Bool)arg2;	// IMP=0x001000000001b97f
- (id)serializeToBaseURL:(id)arg1;	// IMP=0x001000000001b96b
- (id)directoryName;	// IMP=0x001000000001b924
@end

