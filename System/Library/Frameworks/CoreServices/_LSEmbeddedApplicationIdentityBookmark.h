//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSEmbeddedApplicationIdentityBookmark : NSObject
{
    _Bool _placeholder;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000018eb9
- (void).cxx_destruct;	// IMP=0x0000000000018f6d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018ec1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018e4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018e40
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018d7b

@end
