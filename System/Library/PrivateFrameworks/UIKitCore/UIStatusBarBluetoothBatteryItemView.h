//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIStatusBarBluetoothBatteryItemView
{
    int _capacity;	// 8 = 0x8
    int _accessibilityCachedHUDCapacity;	// 12 = 0xc
    UIImage *_accessibilityCachedHUDImage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ee6b86
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000ee66e1
- (struct UIEdgeInsets)_accessibilityHUDBatteryInsidesInsets;	// IMP=0x0000000000ee66c3
- (double)extraLeftPadding;	// IMP=0x0000000000ee6673
- (id)contentsImage;	// IMP=0x0000000000ee6311
- (double)_normalizedCapacity;	// IMP=0x0000000000ee62f7
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000ee62a1

@end

