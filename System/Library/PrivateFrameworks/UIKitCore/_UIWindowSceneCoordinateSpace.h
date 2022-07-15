//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneSettings, NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneCoordinateSpace : NSObject
{
    FBSSceneSettings *_effectiveSettings;	// 8 = 0x8
    UIWindowScene *_windowScene;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010e0c22
@property(readonly, nonatomic) __weak UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x00000000010e0209
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x00000000010df847
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x00000000010df7e4
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x00000000010df781
- (id)initWithWindowScene:(id)arg1 effectiveSettings:(id)arg2;	// IMP=0x00000000010df6ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
