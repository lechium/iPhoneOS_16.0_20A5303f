//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTEmailAddress : NSObject
{
    NSString *_address;	// 8 = 0x8
}

+ (id)emailAddress:(id)arg1;	// IMP=0x0010000000035238
- (void).cxx_destruct;	// IMP=0x0000000000035357
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;	// IMP=0x000000000003533b
- (id)encodedString;	// IMP=0x000000000003532d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000352f4
- (id)initWithAddress:(id)arg1;	// IMP=0x0000000000035281

@end
