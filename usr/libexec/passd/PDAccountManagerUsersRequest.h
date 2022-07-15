//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerUsersRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    _Bool _fromPush;	// 16 = 0x10
    NSString *_accountIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000003fa418
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) _Bool fromPush; // @synthesize fromPush=_fromPush;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithUsers:(id)arg1 error:(id)arg2;	// IMP=0x00100000003fa1aa
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003fa16a
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x00100000003f9fcd
- (id)requestIdentifier;	// IMP=0x00100000003f9f6f
- (unsigned long long)requestType;	// IMP=0x00100000003f9f64
- (id)initWithAccountIdentifier:(id)arg1 fromPush:(_Bool)arg2;	// IMP=0x00100000003f9ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
