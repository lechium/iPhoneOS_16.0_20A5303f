//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageSerializationWrapper : NSObject
{
    UIImage *_image;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008a8507
- (void).cxx_destruct;	// IMP=0x00000000008a850f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008a84d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008a8439
- (Class)classForCoder;	// IMP=0x00000000008a842b
- (id)initWithImage:(id)arg1;	// IMP=0x00000000008a83d1

@end

