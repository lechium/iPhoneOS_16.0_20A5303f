//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _PFEvanescentData : NSData
{
    unsigned long long _length;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    int _openfd;	// 24 = 0x18
    const void *_activeMap;	// 32 = 0x20
    int _mapRefCount;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000023802e
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x00000000002380f8
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000238096
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000023807f
- (void)getBytes:(void *)arg1;	// IMP=0x000000000023803f
- (Class)classForCoder;	// IMP=0x000000000023801d
- (const void *)bytes;	// IMP=0x0000000000237fe0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000237f61
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000237ef8
- (unsigned long long)hash;	// IMP=0x0000000000237ede
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000237e5d
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x0000000000237e4b
- (void)invalidate;	// IMP=0x0000000000237e41
- (unsigned long long)length;	// IMP=0x0000000000237b61
- (id)description;	// IMP=0x0000000000237adf
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000237aa5
- (void)dealloc;	// IMP=0x00000000002379f9
- (id)initWithURL:(id)arg1;	// IMP=0x00000000002378a1

@end
