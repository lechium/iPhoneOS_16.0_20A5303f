//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXRuntime/AXRemoteElement.h>

@interface AXRemoteElement (UIAccessibilityElementTraversal)
- (_Bool)_accessibilityEnumerateSiblingsWithParent:(id *)arg1 options:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x006000000001314c
- (id)_ancestorElementThatSupportsActivationAction;	// IMP=0x0060000000058bc5
- (_Bool)accessibilityActivate;	// IMP=0x0060000000058b78
- (id)_iosAccessibilityAttributeValue:(long long)arg1;	// IMP=0x0060000000058812
- (id)_iosAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;	// IMP=0x00600000000586a1
- (id)_handleElementTraversalRequestMovingForward:(_Bool)arg1 count:(unsigned long long)arg2 shouldIncludeSelf:(_Bool)arg3 wantsContainers:(_Bool)arg4;	// IMP=0x00600000000583aa
- (_Bool)_accessibilityIsRemoteElement;	// IMP=0x00600000000583a2
- (_Bool)accessibilityViewIsModal;	// IMP=0x006000000005839a
- (void)platformCleanup;	// IMP=0x0060000000058388
@end

