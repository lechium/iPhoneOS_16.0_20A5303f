//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _CKAcknowledgmentTally : NSObject
{
    long long _type;	// 8 = 0x8
    NSArray *_senders;	// 16 = 0x10
    NSArray *_contacts;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000117225
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) NSArray *senders; // @synthesize senders=_senders;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000116f06
- (id)initWithType:(long long)arg1 senders:(id)arg2;	// IMP=0x0000000000116e66

@end
