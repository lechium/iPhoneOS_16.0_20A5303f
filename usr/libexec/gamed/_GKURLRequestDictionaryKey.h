//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject
{
    NSURLRequest *_request;	// 8 = 0x8
}

+ (id)keyWithRequest:(id)arg1;	// IMP=0x00200000000c1787
- (void).cxx_destruct;	// IMP=0x00200000000c1b8e
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (unsigned long long)hash;	// IMP=0x00100000000c1b2b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c18a0
- (id)description;	// IMP=0x00100000000c17db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c17d0
- (id)initWithRequest:(id)arg1;	// IMP=0x00100000000c1714

@end

