//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRPhoneSearch : NSObject
{
    NSString *_countryCode;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
}

+ (id)copyNormalizedPhoneNumber:(struct __CFString *)arg1 countryCode:(struct __CFString *)arg2;	// IMP=0x00400000000173f0
+ (id)copyCountryCode;	// IMP=0x00100000000173da
- (_Bool)matchesUTF8String:(const char *)arg1 matchType:(unsigned long long)arg2;	// IMP=0x00200000000178b9
- (_Bool)hasPrefix:(id)arg1;	// IMP=0x001000000001773a
- (_Bool)isEqualToPhoneNumber:(id)arg1;	// IMP=0x00100000000175e0
- (id)_copyInterpretationsForPhoneNumber:(id)arg1;	// IMP=0x001000000001758b
- (void)dealloc;	// IMP=0x0010000000017541
- (id)initWithSearchString:(id)arg1;	// IMP=0x00100000000174d6
- (id)init;	// IMP=0x00100000000174bd

@end

