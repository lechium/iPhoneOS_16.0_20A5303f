//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSCertifiedDeliveryReplayCommitter : NSObject
{
    NSMutableDictionary *_backingCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000072640
@property(retain, nonatomic) NSMutableDictionary *backingCache; // @synthesize backingCache=_backingCache;
- (void)commitStateForKey:(id)arg1;	// IMP=0x0010000000072190
- (void)holdCommitBlock:(CDUnknownBlockType)arg1 andDecryptedData:(id)arg2 withEncryptedAttributes:(id)arg3 forKey:(id)arg4;	// IMP=0x0010000000071cd0
- (id)decryptedDataForKey:(id)arg1;	// IMP=0x0010000000071c30
- (id)init;	// IMP=0x0010000000071b90

@end
