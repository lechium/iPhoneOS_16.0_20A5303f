//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class RAPFixedProblemViewController;

@interface RAPFixedProblemNavigationController : UINavigationController
{
    CDUnknownBlockType doneHandler;	// 8 = 0x8
    RAPFixedProblemViewController *_fixedProblemViewController;	// 16 = 0x10
    CDUnknownBlockType _doneHandler;	// 24 = 0x18
}

+ (id)fixedProblemNavigationControllerWithProblemStatusResponse:(id)arg1;	// IMP=0x00400000008a6b6d
- (void).cxx_destruct;	// IMP=0x00200000008a6c8c
@property(retain, nonatomic) RAPFixedProblemViewController *fixedProblemViewController; // @synthesize fixedProblemViewController=_fixedProblemViewController;
@property(copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
- (void)handleDone:(id)arg1;	// IMP=0x00100000008a6c12
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000008a6c07
- (_Bool)shouldAutorotate;	// IMP=0x00100000008a6bff

@end

