//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _PFResultUniString
{
    unsigned int _length;	// 16 = 0x10
}

+ (struct __CFAllocator *)cfDeallocator;	// IMP=0x00600000000752e4
+ (unsigned long long)bufferOffset;	// IMP=0x00600000000752d7
+ (void)initialize;	// IMP=0x0060000000075232
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000075478
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000075438
- (unsigned long long)hash;	// IMP=0x000000000007540a
- (unsigned long long)cStringLength;	// IMP=0x00000000000753fa
- (void)getCString:(char *)arg1;	// IMP=0x00000000000753c4
- (_Bool)_isCString;	// IMP=0x00000000000753bc
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000075373
- (void)getCharacters:(unsigned short *)arg1;	// IMP=0x0000000000075335
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000075311
- (unsigned long long)length;	// IMP=0x0000000000075301
- (const char *)UTF8String;	// IMP=0x00000000000752f1

@end

