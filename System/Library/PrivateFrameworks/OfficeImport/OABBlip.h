//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABBlip : NSObject
{
}

+ (void)writeBlip:(id)arg1 toBlipStoreEntry:(struct EshBSE *)arg2;	// IMP=0x00800000003005f8
+ (struct EshBlip *)writeBlip:(id)arg1;	// IMP=0x00800000003001f9
+ (id)readBlipFromEshBlip:(struct EshBlip *)arg1;	// IMP=0x008000000001d668
+ (id)readBlipFromBse:(id)arg1;	// IMP=0x008000000001d5ac
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE *)arg1;	// IMP=0x0080000000300cf9
+ (id)compressMetafileData:(id)arg1 info:(void *)arg2;	// IMP=0x0080000000300ba1
+ (void)setMetafileBoundsFromPictData:(id)arg1 info:(void *)arg2;	// IMP=0x0080000000300a8d
+ (int)blipTypeForBlipSignature:(int)arg1;	// IMP=0x00800000000ddaa0
+ (id)delayedSubBlipWithMetafileInfo:(const void *)arg1;	// IMP=0x00800000000dd910
+ (id)subBlipWithMetafileInfo:(const void *)arg1;	// IMP=0x00800000003008f3
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData *)arg1;	// IMP=0x00800000003007a8

@end
