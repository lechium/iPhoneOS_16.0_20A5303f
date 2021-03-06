//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactChangeRequest : NSObject
{
    NSArray *_contacts;	// 8 = 0x8
    long long _kind;	// 16 = 0x10
    NSString *_linkIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001b0e7
+ (id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;	// IMP=0x001000000001afad
- (void).cxx_destruct;	// IMP=0x000000000001b655
@property(readonly, copy, nonatomic) NSString *linkIdentifier; // @synthesize linkIdentifier=_linkIdentifier;
@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(readonly, copy, nonatomic) NSArray *contactIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b266
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b0ef
- (id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;	// IMP=0x000000000001b028

@end

