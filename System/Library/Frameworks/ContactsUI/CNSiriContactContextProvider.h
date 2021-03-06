//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNSiriContactContextProvider : NSObject
{
    _Bool _isEnabled;	// 8 = 0x8
    CNContact *_contact;	// 16 = 0x10
    CNContactStore *_store;	// 24 = 0x18
}

+ (id)descriptorForRequiredKeys;	// IMP=0x00100000001c6148
- (void).cxx_destruct;	// IMP=0x00000000001c5f32
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)defaultContextManager;	// IMP=0x00000000001c5ecf
- (void)_removeContextProviderOnMainThread;	// IMP=0x00000000001c5e83
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000001c5e0a
- (id)getCurrentContext;	// IMP=0x00000000001c5d19
- (_Bool)allowContextProvider:(id)arg1;	// IMP=0x00000000001c5d11
- (void)dealloc;	// IMP=0x00000000001c5c78
- (id)initWithContact:(id)arg1 store:(id)arg2;	// IMP=0x00000000001c5b82

@end

