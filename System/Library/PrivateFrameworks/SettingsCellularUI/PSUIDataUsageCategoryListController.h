//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class PSSpecifier, PSUIDataUsageCategorySpecifier;

__attribute__((visibility("hidden")))
@interface PSUIDataUsageCategoryListController : PSListController
{
    PSUIDataUsageCategorySpecifier *_parentSpecifier;	// 192 = 0xc0
    PSSpecifier *_spinnerSpecifier;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000029b79
@property(retain, nonatomic) PSSpecifier *spinnerSpecifier; // @synthesize spinnerSpecifier=_spinnerSpecifier;
@property(retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x0000000000029b27
- (id)specifiers;	// IMP=0x0000000000029875
- (id)init;	// IMP=0x0000000000029700

@end

