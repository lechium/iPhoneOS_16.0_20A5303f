//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PRSPosterPath, PRSceneViewController, _EXExtensionIdentity;
@protocol BSInvalidatable;

@interface ExtensionItem : NSObject
{
    _EXExtensionIdentity *_extension;	// 8 = 0x8
    PRSceneViewController *_viewController;	// 16 = 0x10
    PRSPosterPath<BSInvalidatable> *_tmpPoster;	// 24 = 0x18
    long long _activationStyle;	// 32 = 0x20
}

+ (id)itemWithExtension:(id)arg1 activationStyle:(long long)arg2;	// IMP=0x0040000000002cfc
- (void).cxx_destruct;	// IMP=0x002000000000318b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000030f4
- (unsigned long long)hash;	// IMP=0x00100000000030ac
- (_Bool)wasEverActivated;	// IMP=0x001000000000309e
- (void)invalidate;	// IMP=0x0010000000003031
- (void)deactivate;	// IMP=0x001000000000301b
- (id)activate;	// IMP=0x0010000000002e03
- (id)name;	// IMP=0x0010000000002d85
- (void)dealloc;	// IMP=0x0010000000002d47

@end
