//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VKInternedString : NSString
{
    NSString *original;	// 8 = 0x8
}

+ (id)stringWithString:(id)arg1;	// IMP=0x0060000000521cc5
+ (void)initialize;	// IMP=0x0060000000521c2f
- (void).cxx_destruct;	// IMP=0x0000000000521f87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000521f7c
- (unsigned long long)hash;	// IMP=0x0000000000521f5f
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000521f42
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x0000000000521f25
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000521f08
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x0000000000521eeb
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000521ece
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000521eb1
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000521e94
- (unsigned long long)length;	// IMP=0x0000000000521e77
- (void)dealloc;	// IMP=0x0000000000521dd2
- (id)initWithString:(id)arg1;	// IMP=0x0000000000521ca0

@end

