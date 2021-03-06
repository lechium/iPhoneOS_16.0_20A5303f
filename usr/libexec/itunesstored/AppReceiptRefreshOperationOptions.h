//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString;

@interface AppReceiptRefreshOperationOptions : NSObject
{
    long long _authenticationPromptStyle;	// 8 = 0x8
    MISSING_TYPE *_bundleIdentifier;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    _Bool _needsAuthentication;	// 32 = 0x20
    _Bool _performSinfMirartionCheckBeforeFailing;	// 33 = 0x21
    NSNumber *_targetAccount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001a0dd5
@property(copy, nonatomic) NSNumber *targetAccount; // @synthesize targetAccount=_targetAccount;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_flags;
@property(nonatomic) _Bool performSinfMirartionCheckBeforeFailing; // @synthesize performSinfMirartionCheckBeforeFailing=_performSinfMirartionCheckBeforeFailing;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long authenticationPromptStyle; // @synthesize authenticationPromptStyle=_authenticationPromptStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a0cab
@property(readonly, nonatomic) NSString *URLBagKey;
- (id)initWithReceiptFlags:(unsigned long long)arg1;	// IMP=0x00100000001a0c43

@end

