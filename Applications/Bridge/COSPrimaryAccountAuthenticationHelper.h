//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationController;

@interface COSPrimaryAccountAuthenticationHelper : NSObject
{
    AKAppleIDAuthenticationController *_authenticationController;	// 8 = 0x8
}

+ (id)_contextForPrimaryAccountWithController:(id)arg1;	// IMP=0x00400000000e73ee
- (void).cxx_destruct;	// IMP=0x00200000000e76ff
@property(retain, nonatomic) AKAppleIDAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
- (void)authenticatePrimaryAccountWithController:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e7621
- (void)authenticatePrimaryAccountWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e758c
- (void)_authWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e750b

@end

