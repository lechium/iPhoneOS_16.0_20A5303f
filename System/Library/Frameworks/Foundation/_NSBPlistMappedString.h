//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

__attribute__((visibility("hidden")))
@interface _NSBPlistMappedString : NSString
{
    unsigned long long payload;	// 8 = 0x8
}

+ (id)createStringWithOffset:(long long)arg1 intoMappingData:(id)arg2;	// IMP=0x00600000004b4529
+ (void)initialize;	// IMP=0x00600000004b44d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b4f61
- (unsigned long long)smallestEncoding;	// IMP=0x00000000004b4eed
- (unsigned long long)fastestEncoding;	// IMP=0x00000000004b4e79
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x00000000004b4d35
- (unsigned long long)length;	// IMP=0x00000000004b4ccc
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000004b48cf
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004b477e

@end

