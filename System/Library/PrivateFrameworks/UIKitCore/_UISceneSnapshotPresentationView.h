//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class FBSceneSnapshot, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneSnapshotPresentationView : UIView
{
    FBSceneSnapshot *_snapshot;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007a6e45
@property(retain, nonatomic) FBSceneSnapshot *sceneSnapshot; // @synthesize sceneSnapshot=_snapshot;
- (id)initWithSnapshot:(id)arg1;	// IMP=0x00000000007a6c67
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007a6bbb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007a6b0f
- (id)init;	// IMP=0x00000000007a69af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

