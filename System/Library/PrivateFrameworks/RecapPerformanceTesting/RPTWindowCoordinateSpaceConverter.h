//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RPTCoordinateSpaceConverter.h"

@class UIScreen, UIWindow;

__attribute__((visibility("hidden")))
@interface RPTWindowCoordinateSpaceConverter : RPTCoordinateSpaceConverter
{
    UIWindow *_window;	// 8 = 0x8
    UIScreen *_screen;	// 16 = 0x10
    id _nsScreen;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000069fd
@property(retain, nonatomic) id nsScreen; // @synthesize nsScreen=_nsScreen;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (struct CGVector)convertVector:(struct CGVector)arg1;	// IMP=0x000000000000691e
- (struct CGRect)convertRect:(struct CGRect)arg1;	// IMP=0x000000000000688d
- (struct CGSize)convertSize:(struct CGSize)arg1;	// IMP=0x00000000000067c1
- (struct CGPoint)convertPoint:(struct CGPoint)arg1;	// IMP=0x00000000000065a4
- (id)initFromWindow:(id)arg1 toScreen:(id)arg2;	// IMP=0x0000000000006502

@end

