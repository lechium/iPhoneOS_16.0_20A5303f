//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray;

@interface SupplementalStackViewController : UIViewController
{
    NSMutableArray *_containeeViewControllerStack;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000005924f0
@property(retain, nonatomic) NSMutableArray *containeeViewControllerStack; // @synthesize containeeViewControllerStack=_containeeViewControllerStack;
- (id)topContainee_forTests;	// IMP=0x00100000005924ae
- (id)preferredFocusEnvironments;	// IMP=0x001000000059240b
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)popContainee:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000059216f
- (void)pushContainee:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000591f0e
- (void)_removeContainee:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000591e5e
- (void)_addContainee:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000005919ec
- (id)init;	// IMP=0x001000000059197b

@end
