//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class CKNicknamePreviewView;

__attribute__((visibility("hidden")))
@interface CKNicknameIntroViewController : OBWelcomeController
{
    CKNicknamePreviewView *_nicknamePreviewView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000035c69f
@property(retain, nonatomic) CKNicknamePreviewView *nicknamePreviewView; // @synthesize nicknamePreviewView=_nicknamePreviewView;
- (double)_contentViewHeight;	// IMP=0x000000000035c5b9
- (void)viewDidLayoutSubviews;	// IMP=0x000000000035c419
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000035c3aa
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000035c304
- (void)viewDidLoad;	// IMP=0x000000000035c269

@end

