//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, _TVShelfViewController;

__attribute__((visibility("hidden")))
@interface _TVRelatedContentShelfViewController : UIViewController
{
    _TVShelfViewController *_shelfViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000038a8e
@property(retain, nonatomic) _TVShelfViewController *shelfViewController; // @synthesize shelfViewController=_shelfViewController;
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x00000000000388f2
- (id)preferredFocusEnvironments;	// IMP=0x000000000003882b
- (void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2;	// IMP=0x00000000000387b9
- (void)loadView;	// IMP=0x000000000003874c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
