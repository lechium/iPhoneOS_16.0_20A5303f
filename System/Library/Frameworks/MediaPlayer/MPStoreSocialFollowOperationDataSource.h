//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelSocialPerson, NSString;

__attribute__((visibility("hidden")))
@interface MPStoreSocialFollowOperationDataSource : NSObject
{
    MPModelSocialPerson *_person;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000115df7
@property(retain, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
- (id)queryItems;	// IMP=0x0000000000115dd4
- (long long)httpMethod;	// IMP=0x0000000000115dc9
- (long long)httpBodyType;	// IMP=0x0000000000115dbe
- (id)httpBody;	// IMP=0x0000000000115c97
- (id)bagKey;	// IMP=0x0000000000115c8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
