//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTestNavigationControllerDelegate, NSString;

@interface ScrollEditingContactTest
{
    CNTestNavigationControllerDelegate *_navControllerDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003cd9
@property(retain, nonatomic) CNTestNavigationControllerDelegate *navControllerDelegate; // @synthesize navControllerDelegate=_navControllerDelegate;
- (void)editAndScrollContactViewController:(id)arg1;	// IMP=0x0010000000003b50
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000003b3b
- (void)didShow:(id)arg1;	// IMP=0x0010000000003a30
- (void)resetDelegate;	// IMP=0x0010000000003934
- (void)prepareForNextTest;	// IMP=0x00100000000038f6
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x00100000000033c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
