//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTAsciiAddress : NSObject
{
    NSString *_address;	// 8 = 0x8
}

+ (id)asciiAddressWithString:(id)arg1;	// IMP=0x00100000000c96d7
- (void).cxx_destruct;	// IMP=0x00000000000c97fc
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;	// IMP=0x00000000000c97da
- (id)encodedString;	// IMP=0x00000000000c97cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c9793
- (id)initWithAddress:(id)arg1;	// IMP=0x00000000000c9720

@end

